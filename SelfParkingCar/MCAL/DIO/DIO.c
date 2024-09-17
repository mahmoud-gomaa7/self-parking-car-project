
#include "STD_TYPE.h"
#include"DIO_REG.h"
#include"BIT_MATH.h"




/***************************************************************************************/
/* Description! Setting Port Direction :---- input or output                           */
/* Input      ! PortNumber , PortDirection                                             */
/* Output     ! Nothing                                                                */
/***************************************************************************************/


void DIO_VidSetPortDirection(u8 LOC_u8Port, u8 LOC_u8Value)
{

	switch(LOC_u8Port)
	{
	case PORTA : DDRA = LOC_u8Value ; break ;
	case PORTB : DDRB = LOC_u8Value ; break ;
	case PORTC : DDRC = LOC_u8Value ; break ;
	case PORTD : DDRD = LOC_u8Value ; break ;

	}

}






/***************************************************************************************/
/* Description! Setting Port Value :---- 1 or 0                                   */
/* Input      ! PortNumber , PortValue                                                 */
/* Output     ! Nothing                                                                */
/***************************************************************************************/


void DIO_VidSetPortValue(u8 LOC_u8Port, u8 LOC_u8Value)
{

	switch(LOC_u8Port)
	{
	case PORTA : PORTA = LOC_u8Value ; break ;
	case PORTB : PORTB = LOC_u8Value ; break ;
	case PORTC : PORTC = LOC_u8Value ; break ;
	case PORTD : PORTD = LOC_u8Value ; break ;

	}

}








/***************************************************************************************/
/* Description! Setting Pin Direction :---- input or output                            */
/* Input      ! PortNumber ,PinNumber ,  PinDirection                                  */
/* Output     ! Nothing                                                                */
/***************************************************************************************/

void DIO_VidSetPinDirection(u8 LOC_u8Port , u8 LOC_u8Pin , u8 LOC_u8Value)
{

	switch(LOC_u8Port)
	{

	case PORTA :
		if(LOC_u8Value == 1)
		{
			SET_BIT( DDRA ,  LOC_u8Pin);
			break;
		}
		else if(LOC_u8Value == 0)
		{
			CLR_BIT( DDRA ,  LOC_u8Pin);
			break;
		}break;


	case PORTB :
		if(LOC_u8Value == 1)
		{
			SET_BIT( DDRB ,  LOC_u8Pin);
			break;
		}
		else if(LOC_u8Value == 0)
		{
			CLR_BIT( DDRB ,  LOC_u8Pin);
			break;
		}break;

	case PORTC :
		if(LOC_u8Value == 1)
		{
			SET_BIT( DDRC ,  LOC_u8Pin);
			break;
		}
		else if(LOC_u8Value == 0)
		{
			CLR_BIT( DDRC ,  LOC_u8Pin);
			break;
		}break;

	case PORTD :
		if(LOC_u8Value == 1)
		{
			SET_BIT( DDRD ,  LOC_u8Pin);
			break;
		}
		else if(LOC_u8Value == 0)
		{
			CLR_BIT( DDRD ,  LOC_u8Pin);
			break;
		}break;

	}
}







/***************************************************************************************/
/* Description! Setting Pin Value :---- 1 or 0                                    */
/* Input      ! PortNumber , PinNumber ,  PinValue                                     */
/* Output     ! Nothing                                                                */
/***************************************************************************************/


void DIO_VidSetPinValue(u8 LOC_u8Port , u8 LOC_u8Pin , u8 LOC_u8Value)
{

	switch(LOC_u8Port)
	{

	case PORTA :
		if(LOC_u8Value == 1)
		{
			SET_BIT( PORTA ,  LOC_u8Pin);
			break;
		}
		else if(LOC_u8Value == 0)
		{
			CLR_BIT( PORTA ,  LOC_u8Pin);
			break;
		}break;


	case PORTB :
		if(LOC_u8Value == 1)
		{
			SET_BIT( PORTB ,  LOC_u8Pin);
			break;
		}
		else if(LOC_u8Value == 0)
		{
			CLR_BIT( PORTB ,  LOC_u8Pin);
			break;
		}break;

	case PORTC :
		if(LOC_u8Value == 1)
		{
			SET_BIT( PORTC ,  LOC_u8Pin);
			break;
		}
		else if(LOC_u8Value == 0)
		{
			CLR_BIT( PORTC ,  LOC_u8Pin);
			break;
		}break;

	case PORTD :
		if(LOC_u8Value == 1)
		{
			SET_BIT( PORTD ,  LOC_u8Pin);
			break;
		}
		else if(LOC_u8Value == 0)
		{
			CLR_BIT( PORTD ,  LOC_u8Pin);
			break;
		}break;




	}
}









/***************************************************************************************/
/* Description! Reading Port Value :---- HIGH or LOW                                   */
/* Input      ! PortNumber                                                             */
/* Output     ! PortValue                                                              */
/***************************************************************************************/

u8 DIO_u8ReadPort(u8 LOC_u8Port)
{
	u8 value ;
	switch(LOC_u8Port)
	{

	case PORTA : value = PINA ; break ;
	case PORTB : value = PINB ; break ;
	case PORTC : value = PINC ; break ;
	case PORTD : value = PIND ; break ;

	}

	return value ;
}









/***************************************************************************************/
/* Description! Reading Pin Value :---- HIGH or LOW                                    */
/* Input      ! PortNumber , PinNumber                                                 */
/* Output     ! PinValue                                                               */
/***************************************************************************************/

u8 DIO_u8ReadPin(u8 LOC_u8Port , u8 LOC_u8Pin )
{
	u8 value ;
	switch(LOC_u8Port)
	{

	case PORTA : value = GET_BIT(PINA , LOC_u8Pin); break ;
	case PORTB : value = GET_BIT(PINB , LOC_u8Pin); break ;
	case PORTC : value = GET_BIT(PINC , LOC_u8Pin); break ;
	case PORTD : value = GET_BIT(PIND , LOC_u8Pin); break ;

	}

	return value ;
}
