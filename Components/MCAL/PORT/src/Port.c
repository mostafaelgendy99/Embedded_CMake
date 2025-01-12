#include "Port.h"
#include "PortConfig.h"

typedef struct 
{
    u8 MPORT_str_PIN;
    u8 MPORT_str_DDR;
    u8 MPORT_str_PORT;

}MPORT_str_PORT_PTR_t;

MPORT_enuErrorStatus_t MPORT_enuSetPinConfigration( u8 Copy_enuPinName,MPORT_enu_CONFG_OPTS_t Copy_enuConfigration)
{
        MPORT_enuErrorStatus_t ret_enu = MPORT_enu_OK ; 
        MPORT_str_PORT_PTR_t* Port_Ptr = getPortAddress(GET_HIGH_NIB(Copy_enuPinName)); 
    if (Copy_enuPinNum > PIND7 )
        {
            ret_enu = MPORT_enu_INVALID_PIN_NUM;
        }

        // else if(Copy_enuConfigration > 	MPORT_enu_EXTERNAL_PULLDOWN )
        //     {
        //         ret_enu = MPORT_enu_INVALID_PIN_CONFIG ;
        //     }

    else 
        {
           switch (Copy_enuConfigration) 
           {
                case MPORT_enu_OUTPUT :
                set_bit(Port_ptr->MPORT_str_DDR , GET_LOW_NIB(Copy_enuPinName));
                clear_bit(Port_ptr->MPORT_str_PORT ,GET_LOW_NIB(Copy_enuPinName));
                break;

                case MDIO_enu_INPUT_PULLUP :
                clear_bit(Port_ptr->MPORT_str_DDR , GET_LOW_NIB(Copy_enuPinName));
                set_bit(Port_ptr->MPORT_str_PORT ,GET_LOW_NIB(Copy_enuPinName));
                break;

                case MDIO_enu_EXTERNAL_PULLDOWN :
                clear_bit(Port_ptr->MPORT_str_DDR , GET_LOW_NIB(Copy_enuPinName));
                clear_bit(Port_ptr->MPORT_str_PORT ,GET_LOW_NIB(Copy_enuPinName));
                break;

                default:
                ret_enu = MPORT_enu_INVALID_PIN_CONFIG ;
                break;
           }
        }
            return ret_enu;
};

MPORT_enuErrorStatus_t MPORT_enuSetPinDir( u8 Copy_enuPinName,MPORT_enu_DIR_OPTS_t Copy_enuConfigration)
{
        MPORT_enuErrorStatus_t ret_enu = MPORT_enu_OK ; 
        MPORT_str_PORT_PTR_t* Port_Ptr = getPortAddress(GET_HIGH_NIB(Copy_enuPinName)); 
    
    if (Copy_enuPinNum > PIND7 )
        {
            ret_enu = MPORT_enu_INVALID_PIN_NUM;
        }

        // else if(Copy_enuConfigration > 	MPORT_enu_EXTERNAL_PULLDOWN )
        //     {
        //         ret_enu = MPORT_enu_INVALID_PIN_CONFIG ;
        //     }

    else 
        {
           switch (Copy_enuConfigration) 
           {
                case MPORT_enu_OUTPUT :
                set_bit(Port_ptr->MPORT_str_DDR , GET_LOW_NIB(Copy_enuPinName));
                break;

                case MDIO_enu_INPUT:
                clear_bit(Port_ptr->MPORT_str_DDR , GET_LOW_NIB(Copy_enuPinName));
                break;
             
                default:
                ret_enu = MPORT_enu_INVALID_PIN_CONFIG ;
                break;
           }
        }
            return ret_enu;
};