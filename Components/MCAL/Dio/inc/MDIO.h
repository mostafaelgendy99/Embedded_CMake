/*
 * MDIO.h
 *
 * Created: 12/17/2024 2:08:16 PM
 *  Author: Gendy
 */ 


#ifndef MDIO_H_
#define MDIO_H_

#include "STD_TYPES.h"
#include "BIT_MATH.h"
//typedef unsigned char u8  ;

#define PORTA (*((volatile u8*)0x3B))
#define DDRA  (*((volatile u8*)0x3A))
#define PINA  (*((volatile u8*)0x39))

#define PORTB (*((volatile u8*)0x38))
#define DDRB  (*((volatile u8*)0x37))
#define PINB  (*((volatile u8*)0x36))

#define PORTC (*((volatile u8*)0x35))
#define DDRC  (*((volatile u8*)0x34))
#define PINC  (*((volatile u8*)0x33))

#define PORTD (*((volatile u8*)0x32))
#define DDRD  (*((volatile u8*)0x31))
#define PIND  (*((volatile u8*)0x30))
/*

#define set_bit(REG , BIT)    ((REG) |= (1<<BIT))
#define clear_bit(REG , BIT)  ((REG) &= (~(1<<BIT)))
#define toggle_bit(REG , BIT) (((REG)) ^= (1<<BIT))
#define git_bit(REG , BIT)	  ((REG>>BIT) & (1))

#define set_port(REG)    (REG = 0xff)
#define clear_port(REG)  (REG= 0x00)

*/
typedef enum 
{
	MDIO_enu_NOK,
	MDIO_enu_OK,
	MDIO_enu_INVALID_PORT_NUM,
	MDIO_enu_INVALID_PIN_NUM,
	MDIO_enu_INVALID_PIN_CONFG,
	MDIO_enu_INVALID_PORT_CONFG,
	MDIO_enu_INVALID_PORT_STATE,
	MDIO_enu_INVALID_PIN_STATE,
	MDIO_enu_NUL_POINTER
}MDIO_enuErrorStatus_t;


typedef enum
{
	MDIO_enu_PORTA,
	MDIO_enu_PORTB,
    MDIO_enu_PORTC,
    MDIO_enu_PORTD 
	
}MDIO_enu_PORT_OPTS_t;

typedef enum
{
	MDIO_enu_PIN0,
	MDIO_enu_PIN1,
	MDIO_enu_PIN2,
	MDIO_enu_PIN3,
	MDIO_enu_PIN4,
	MDIO_enu_PIN5,
	MDIO_enu_PIN6,
	MDIO_enu_PIN7
	
}MDIO_enu_PIN_OPTS_t;

typedef enum
{
	MDIO_enu_OUTPUT,
	MDIO_enu_INPUT_PULLUP,
	MDIO_enu_EXTERNAL_PULLDOWN,	
}MDIO_enu_CONFG_OPTS_t;


typedef enum
{
	MDIO_enu_LOW,
	MDIO_enu_HIGH,
	
}MDIO_enu_PIN_STATE_OPTS_t;


typedef enum
{
	MDIO_enu_PORT_LOW,
	MDIO_enu_PORT_HIGH,
	
}MDIO_enu_PORT_STATE_OPTS_t;

typedef struct{
    u8 pin;
    u8 ddr;
    u8 port;

}MDIO_st_Port_Ptr_t;

	
	
	
MDIO_enuErrorStatus_t MDIO_enuSetPinConfigration(MDIO_enu_PORT_OPTS_t Copy_enuPortNum, MDIO_enu_PIN_OPTS_t Copy_enuPinNum,MDIO_enu_CONFG_OPTS_t Copy_enuConfigration);
MDIO_enuErrorStatus_t MDIO_enuSetPortConfigration(MDIO_enu_PORT_OPTS_t Copy_enuPortNum, MDIO_enu_CONFG_OPTS_t Copy_enuConfigration);
MDIO_enuErrorStatus_t MDIO_enuSetPinValue(MDIO_enu_PORT_OPTS_t Copy_enuPortNum, MDIO_enu_PIN_OPTS_t Copy_enuPinNum, MDIO_enu_PIN_STATE_OPTS_t Copy_enuState);
MDIO_enuErrorStatus_t MDIO_enuSetPortValue(MDIO_enu_PORT_OPTS_t Copy_enuPortNum,MDIO_enu_PORT_STATE_OPTS_t Copy_enuPortState);
MDIO_enuErrorStatus_t MDIO_enuGetPinValue(MDIO_enu_PORT_OPTS_t Copy_enuPortNum,MDIO_enu_PIN_OPTS_t Copy_enuPinNum, u8* Add_pu8PinValue);







#endif /* MDIO_H_ */