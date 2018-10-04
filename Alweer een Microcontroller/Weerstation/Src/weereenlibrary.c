/*
 * weereenlibrary.c
 *
 *  Created on: 4 Oct 2018
 *      Author: Kayne
 */
#include "weereenlibrary.h"

int ldrCheckVal(){
	int adcResult = 0;
	HAL_ADC_Start(&hadc);
	HAL_ADC_PollForConversion(&hadc, 100);
	adcResult = HAL_ADC_GetValue(&hadc);
	HAL_ADC_Stop(&hadc);
	return adcResult;
}

void viewValOnOLED(float temp,float humd, float wind, int light){
	char tempbuf[6];
	char humdbuf[6];
	char windbuf[6];
	char lightbuf[6];
	gcvt(temp,4,tempbuf);
	gcvt(humd,4,humdbuf);
	gcvt(wind,4,windbuf);
	itoa(light,lightbuf,10);

	 ssd1306_SetCursor(0, 0);    //set cursor position x=0, y=0
	 ssd1306_WriteString(tempbuf, Font_7x10, White);
	 ssd1306_SetCursor(0,50);
}
