/**
  ******************************************************************************
  * @file   		KEYPAD.h
  * @brief   		This file contains all the function prototypes for
  *          		the KEYPAD.c file
  * @driver name 	[[ 4x4 KEYPAD ]]
  ******************************************************************************
  */


#ifndef KEYPAD_H_
#define KEYPAD_H_

#define HAL_GPIO_MODULE_ENABLED

#include "stm32f3xx_hal.h"


// numero di KeyPAD usati nel progetto
#define KEYPAD_UNITS  1
#define ROWS          4
#define COLS          4
#define KEYS          16


#define KEY_PRESSED   1
#define KEY_RELEASED  0

typedef struct
{
	GPIO_TypeDef * ROW_GPIO[ROWS];
	uint16_t       ROW_PIN[ROWS];
	GPIO_TypeDef * COL_GPIO[COLS];
	uint16_t       COL_PIN[COLS];
}KEYPAD_CfgType;


/*-----[ Prototypes For All Functions ]-----*/

void KEYPAD_Init(uint16_t au16_Instance, uint8_t* au8_KeyStates);
void KEYPAD_Scan(uint16_t au16_Instance);

#endif /* KEYPAD_H_ */
