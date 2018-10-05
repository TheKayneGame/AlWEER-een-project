/*
 * weereenlibrary.c
 *
 *  Created on: 4 Oct 2018
 *      Author: Kayne
 */
#include "weereenlibrary.h"


int16_t ldrCheckVal() {
	int16_t adcResult = 0;
	HAL_ADC_Start(&hadc);
	HAL_ADC_PollForConversion(&hadc, 100);
	adcResult = HAL_ADC_GetValue(&hadc);
	HAL_ADC_Stop(&hadc);
	return adcResult;
}

GPIO_PinState windfCheckVal()
{
	GPIO_PinState state= 0;

	state =  HAL_GPIO_ReadPin( GPIOB, GPIO_PIN_4 );
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
	int16_t huart1buf[4];
	huart1buf[0] = (int16_t) (temp * 100);
	huart1buf[1] = (int16_t) (humd * 100);
	huart1buf[2] = (int16_t) (wind * 100);
	huart1buf[3] = light;

	HAL_UART_Transmit(&huart1, huart1buf, sizeof(huart1buf), 100);
}
