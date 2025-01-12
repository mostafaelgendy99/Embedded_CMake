
#ifdef Port_H   
#define Port_H

#include "PortConfig.h"
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#define NO_OF_PORTS 4
#define NO_OF_PINS 8


typedef enum 
{
    MPORT_enu_OUTPUT,
	MPORT_enu_INPUT_PULLUP,
	MPORT_enu_EXTERNAL_PULLDOWN,
    MPORT_enu_UNAVAILABLE,


}MPORT_enu_CONFG_OPTS_t;

typedef enum 
{
    MPORT_enu_OUTPUT,
	MPORT_enu_INPUT,	
    MPORT_enu_UNAVAILABLE,
}MPORT_enu_DIR_OPTS_t;

typedef enum 
{

    MPORT_enu_NOK,
    MPORT_enu_OK,
    MPORT_enu_INVALID_PIN_NUM,
    MPORT_enu_INVALID_PIN_CONFIG,
    MPORT_enu_INVALID_PORT_CONFIG,

}MPORT_enuErrorStatus_t;

typedef struct 
{
    u8 MPORT_str_PIN;
    u8 MPORT_str_DDR;
    u8 MPORT_str_PORT;

}MPORT_str_PORT_PTR_t;

typedef struct
{
    u8 MPORT_u8_Pin_Name;
    MPORT_enu_CONFG_OPTS_t MPORT_enu_Pin_config;
    MPORT_enu_DIR_OPTS_t MPORT_enu_Pin_Dir;
}MPORT_str_Pin_details_t;

MPORT_enuErrorStatus_t MPORT_enuSetPinConfigration( u8 Copy_enuPinNum,MPORT_enu_CONFG_OPTS_t Copy_enuConfigration);


#endif