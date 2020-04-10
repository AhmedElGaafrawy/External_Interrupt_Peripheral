/*
 * EXT_INT_int.h
 *
 *  Created on: Apr 10, 2020
 *      Author: hp
 */

#ifndef MCAL_EXT_INT_INT_H_
#define MCAL_EXT_INT_INT_H_



/*****************************************************************************/
/*****************************************************************************/
/**	Function Name   : EXT_INT_enuInit.                                      **/
/**	Return Type     : ERROR_STATES enum.                                    **/
/**	Arguments       : void.                                                 **/
/**	Functionality   : Setting which peripheral is enabled.                  **/
/*****************************************************************************/
/*****************************************************************************/
ERROR_STATES EXT_INT_enuInit				(void);
/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/



/*****************************************************************************/
/*****************************************************************************/
/**	Function Name   : EXT_INT_enuSelectSenceLevel.                          **/
/**	Return Type     : ERROR_STATES enum.                                    **/
/**	Arguments       : Sense Level of any EXT_INT.                           **/
/**	Functionality   : Setting the Sense Level of any EXT_INT.               **/
/*****************************************************************************/
/*****************************************************************************/
ERROR_STATES EXT_INT_enuSelectSenceLevel	(u8 Copy_u8SenseLevel);
/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/




/*****************************************************************************/
/*****************************************************************************/
/**	Function Name   : EXT_INT_enuCallBackFunction.                          **/
/**	Return Type     : ERROR_STATES enum.                                    **/
/**	Arguments       : Ptr to void func , its generic Ptr and num of EXT_INT.**/
/**	Functionality   : Setting the Sense Level of any EXT_INT.               **/
/*****************************************************************************/
/*****************************************************************************/
ERROR_STATES EXT_INT_enuCallBackFunction	(void(*Copy_PF_CallBack)(void*) , void* Copy_PvoidParameter , u8 Copy_u8NumberOfINT);
/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/

/*****************************************************************************/
/**    Definitions of EXT_INTERRUPT peripheral passing to functions         **/
/*****************************************************************************/
#define	INT0								1
#define	INT1								3
#define	INT2								5
/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/


/*****************************************************************************/
/**             Definitions of Sense Level passing to functions             **/
/*****************************************************************************/
#define LOW_LEVEL_INT0						1
#define ANY_LOGICAL_CHANGE_INT0				3
#define FALLING_EDAGE_INT0					5
#define RISING_EDAGE_INT0					7


#define LOW_LEVEL_INT1						9
#define ANY_LOGICAL_CHANGE_INT1				11
#define FALLING_EDAGE_INT1					13
#define RISING_EDAGE_INT1					15


#define FALLING_EDAGE_INT2					17
#define RISING_EDAGE_INT2					19
/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/


#endif /* MCAL_EXT_INT_INT_H_ */