#include "Port.h"
#include "PortConfig.h"

MPORT_str_Pin_details_t Pin_details_arr [NO_OF_PORTS * NO_OF_PINS]
{
    {.MPORT_u8_Pin_Name = PINA0 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },
    {.MPORT_u8_Pin_Name = PINA1 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },
    {.MPORT_u8_Pin_Name = PINA2 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },
    {.MPORT_u8_Pin_Name = PINA3 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },
    {.MPORT_u8_Pin_Name = PINA4 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },
    {.MPORT_u8_Pin_Name = PINA5 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },
    {.MPORT_u8_Pin_Name = PINA6 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },
    {.MPORT_u8_Pin_Name = PINA7 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },

    {.MPORT_u8_Pin_Name = PINB0 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },
    {.MPORT_u8_Pin_Name = PINB1 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },
    {.MPORT_u8_Pin_Name = PINB2 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },
    {.MPORT_u8_Pin_Name = PINB3 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },
    {.MPORT_u8_Pin_Name = PINB4 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },
    {.MPORT_u8_Pin_Name = PINB5 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },
    {.MPORT_u8_Pin_Name = PINB6 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },
    {.MPORT_u8_Pin_Name = PINB7 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },

    {.MPORT_u8_Pin_Name = PINC0 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },
    {.MPORT_u8_Pin_Name = PINC1 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },
    {.MPORT_u8_Pin_Name = PINC2 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },
    {.MPORT_u8_Pin_Name = PINC3 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },
    {.MPORT_u8_Pin_Name = PINC4 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },
    {.MPORT_u8_Pin_Name = PINC5 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },
    {.MPORT_u8_Pin_Name = PINC6 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },
    {.MPORT_u8_Pin_Name = PINC7 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },

    {.MPORT_u8_Pin_Name = PIND0 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },
    {.MPORT_u8_Pin_Name = PIND1 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },
    {.MPORT_u8_Pin_Name = PIND2 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },
    {.MPORT_u8_Pin_Name = PIND3 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },
    {.MPORT_u8_Pin_Name = PIND4 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },
    {.MPORT_u8_Pin_Name = PIND5 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },
    {.MPORT_u8_Pin_Name = PIND6 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE },
    {.MPORT_u8_Pin_Name = PIND7 , .MPORT_enu_Pin_config = MPORT_enu_UNAVAILABLE , .MPORT_enu_Pin_Dir = MPORT_enu_UNAVAILABLE }
};
