/*
 * DIO_DRIVER.c
 *
 * Created: 12/17/2024 1:56:12 PM
 * Author : Gendy
 */ 


#include "MDIO.h"

int main(void)
{
    /* Replace with your application code */
	MDIO_enuSetPinConfigration( MDIO_enu_PORTA,  MDIO_enu_PIN1, MDIO_enu_INPUT_PULLUP);
	
	MDIO_enuSetPinConfigration(MDIO_enu_PORTB,  MDIO_enu_PIN0, MDIO_enu_OUTPUT);
	
	u8 pin_value ; 
	
	
    while (1) 
    {
		
		 MDIO_enuGetPinValue(MDIO_enu_PORTA , MDIO_enu_PIN1 ,  &pin_value ) ;
		
		if (pin_value == MDIO_enu_LOW )
		
		MDIO_enuSetPinValue(MDIO_enu_PORTB,  MDIO_enu_PIN0 , MDIO_enu_HIGH);
		
		else 
		
		MDIO_enuSetPinValue(MDIO_enu_PORTB,  MDIO_enu_PIN0 , MDIO_enu_LOW);
		
		
		
    }
}

