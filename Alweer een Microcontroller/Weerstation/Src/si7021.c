/*
 * si7021.c
 *
 *  Created on: 13 Sep 2018
 *      Author: Kayne
 */

#include "si7021.h"

float makeMeasurment(uint8_t command) {
	uint16_t nBytes = 3;

	if (command == 0xE0)
		nBytes = 2;
	HAL_I2C_Master_Transmit(&hi2c1, ADDRESS << 1, &command, 1, 100);
	osDelay(25);
	uint8_t buff[2];
	HAL_I2C_Master_Receive(&hi2c1, ADDRESS << 1, &buff, 2, 100);
	uint16_t code = buff[0] << 8 | buff[1];
	return (125.0 * code / 65536) - 6;;
}
