/*
 * main.c
 *
 *  Created on: Apr 10, 2020
 *      Author: hp
 */
#include "../LIBRARY/stdTypes.h"
#include "../LIBRARY/BIT_MATH.h"
#include "../LIBRARY/errorStates.h"
#include "../LIBRARY/AVR_REG.h"


#include "../MCAL/GIE_int.h"


#include "../MCAL/EXT_INT_int.h"

void fun  (void*);
void fun1 (void*);
void fun2 (void*);

int main (void)
{
	PORTD|=(1<<2);
	PORTD|=(1<<3);

	DDRB|=(7<<4);
	GIE_enuEnable();
	EXT_INT_enuInit();
	EXT_INT_enuSelectSenceLevel(ANY_LOGICAL_CHANGE_INT0);
	EXT_INT_enuSelectSenceLevel(RISING_EDAGE_INT1);
	EXT_INT_enuSelectSenceLevel(FALLING_EDAGE_INT2);
	EXT_INT_enuCallBackFunction(fun , NULL , INT0);
	EXT_INT_enuCallBackFunction(fun1 , NULL , INT1);
	EXT_INT_enuCallBackFunction(fun2 , NULL , INT2);

	while(1)
	{

	}
	return 0;
}

void fun (void* para)
{
	PORTB^=(1<<4);
}
void fun1 (void* para)
{
	PORTB^=(1<<5);
}
void fun2 (void* para)
{
	PORTB^=(1<<6);
}
