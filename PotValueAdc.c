/*
 * PotValueAdc.c
 *
 *  Created on: Oct 3, 2020
 *      Author: Training
 */

#include "PotValueAdc.h"

uint32_t PotValueAdc(ADC_HandleTypeDef* hadc)
{
	uint32_t AdcVal;
	HAL_ADC_Start(hadc);
	if(HAL_ADC_PollForConversion(hadc, 10) == HAL_OK)
	{
	  AdcVal = HAL_ADC_GetValue(hadc);
	  HAL_Delay(50);
	}
	HAL_ADC_Stop(hadc);
	return AdcVal;
}
