/*
 * weereenlibrary.c
 *
 *  Created on: 4 Oct 2018
 *      Author: Kayne
 */
#include "weereenlibrary.h"
#include <stdlib.h>
#include <string.h>

int16_t ldrCheckVal() {

	int16_t adcResult = 0;\
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_7, 1);
	HAL_ADC_Start(&hadc);
	HAL_ADC_PollForConversion(&hadc, 100);
	adcResult = HAL_ADC_GetValue(&hadc);
	HAL_ADC_Stop(&hadc);
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_7, 0);
	return adcResult;
}

GPIO_PinState windfCheckVal() {
	GPIO_PinState state = 0;

	state = HAL_GPIO_ReadPin( GPIOB, GPIO_PIN_4);
//	if(state == 1)
//	{
//		int millis_begin = 0;
//		int millis_end = 0;
//		millis_end = xTaskGetTickCount() - millis_begin;
//		millis_begin = xTaskGetTickCount();
//		//count_windspeed++;
//		//if(count_windspeed == 4)count_windspeed = 0;
//	}
	return state;

}

void viewValOnOLED(float temp, float humd, float wind, int16_t light) {
	char tempbuf[6];
	char humdbuf[6];
	char windbuf[6];
	char lightbuf[6];
	gcvt(temp, 4, tempbuf);
	gcvt(humd, 4, humdbuf);
	gcvt(wind, 4, windbuf);
	itoa(light, lightbuf, 10);
	ssd1306_Fill(Black);
	ssd1306_SetCursor(0, 0);    //set cursor position x=0, y=0
	ssd1306_WriteString(tempbuf, Font_7x10, White);
	ssd1306_SetCursor(64, 0);
	ssd1306_WriteString(humdbuf, Font_7x10, White);
	ssd1306_SetCursor(0, 15);
	ssd1306_WriteString(windbuf, Font_7x10, White);
	ssd1306_SetCursor(64, 15);
	ssd1306_WriteString(lightbuf, Font_7x10, White);
	ssd1306_UpdateScreen();
}

void huart1toesp(float temp, float humd, float wind, int16_t light) {
	int16_t inputbuf[4];
	uint8_t huart1buf[8];

	inputbuf[0] = (int16_t) (temp * 100);
	inputbuf[1] = (int16_t) (humd * 100);
	inputbuf[2] = (int16_t) (wind * 100);
	inputbuf[3] = light;

	uint8_t j = 0;
	for (uint8_t i = 0; i < 4; i++) {
		huart1buf[j] = (uint8_t) (inputbuf[i] & 0xFF);
		j++;
		huart1buf[j] = (uint8_t) ((inputbuf[i] >> 8) & 0xFF);
		j++;
	}
/*
	huart1buf[0] = (uint8_t) (inputbuf[0] & 0xFF);
	huart1buf[1] = (uint8_t) ((inputbuf[0] >> 8) & 0xFF);
	huart1buf[2] = (uint8_t) (inputbuf[1] & 0xFF);
	huart1buf[3] = (uint8_t) ((inputbuf[1] >> 8) & 0xFF);
	huart1buf[4] = (uint8_t) (inputbuf[2] & 0xFF);
	huart1buf[5] = (uint8_t) ((inputbuf[2] >> 8) & 0xFF);
	huart1buf[6] = (uint8_t) (inputbuf[3] & 0xFF);
	huart1buf[7] = (uint8_t) ((inputbuf[3] >> 8) & 0xFF);
*/
	HAL_UART_Transmit(&huart1, huart1buf, 8, 100);
}
