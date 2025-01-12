/*
 * MDIO.c
 *
 * Created: 12/17/2024 2:07:59 PM
 *  Author: Gendy
 */ 

#include "MDIO.h"



MDIO_enuErrorStatus_t MDIO_enuSetPinConfigration(MDIO_enu_PORT_OPTS_t Copy_enuPortNum, MDIO_enu_PIN_OPTS_t Copy_enuPinNum,MDIO_enu_CONFG_OPTS_t Copy_enuConfigration)
{
	MDIO_enuErrorStatus_t ret_enu = MDIO_enu_NOK; //to get the error in a variable and get only one return at end of api
	
	if(Copy_enuPortNum > MDIO_enu_PORTD )
	ret_enu  =  MDIO_enu_INVALID_PORT_NUM ;
	 
	 else if (Copy_enuPinNum > MDIO_enu_PIN7)
	 ret_enu = MDIO_enu_INVALID_PIN_CONFG ;  
	
	else if (Copy_enuConfigration > MDIO_enu_EXTERNAL_PULLDOWN) 
	ret_enu = MDIO_enu_INVALID_PORT_CONFG ;
	
	else{
		
		switch (Copy_enuPortNum) 
		{
			case MDIO_enu_PORTA :
			  {
				switch (Copy_enuConfigration)
				{
					case MDIO_enu_OUTPUT :
					set_bit(DDRA , Copy_enuPinNum);
					clear_bit(PORTA , Copy_enuPinNum);
					break;
					
					case MDIO_enu_INPUT_PULLUP :
					clear_bit(DDRA , Copy_enuPinNum);
					set_bit(PORTA , Copy_enuPinNum);
					break;
					case MDIO_enu_EXTERNAL_PULLDOWN :
					clear_bit(DDRA , Copy_enuPinNum);
					clear_bit(PORTA , Copy_enuPinNum);
					break;
		       }
			   
				break;
			 }
			 
			 case MDIO_enu_PORTB :
			 {
				 switch (Copy_enuConfigration)
				 {
					 case MDIO_enu_OUTPUT :
					 set_bit(DDRB,Copy_enuPinNum);
					 clear_bit(PORTB , Copy_enuPinNum);
					 break;
					 
					 case MDIO_enu_INPUT_PULLUP:
					 clear_bit(DDRB , Copy_enuPinNum);
					 set_bit(PORTB , Copy_enuPinNum);
					 break;
					 
					 case MDIO_enu_EXTERNAL_PULLDOWN:
					 clear_bit(DDRB , Copy_enuPinNum);
					 clear_bit(PORTB , Copy_enuPinNum);
					 break;
					 
				 }
				 break;
			 } 
			 
			 case MDIO_enu_PORTC :
			 {
				 switch (Copy_enuConfigration)
				 {
					 case MDIO_enu_OUTPUT :
					 set_bit(DDRC , Copy_enuPinNum);
					 clear_bit(PORTC , Copy_enuPinNum);
					 break;
					 
					 case MDIO_enu_INPUT_PULLUP :
					 clear_bit(DDRC , Copy_enuPinNum);
					 set_bit(PORTC , Copy_enuPinNum);
					 break;
					 case MDIO_enu_EXTERNAL_PULLDOWN :
					 clear_bit(DDRC , Copy_enuPinNum);
					 clear_bit(PORTC , Copy_enuPinNum);
					 break;
				 }
				 
				 break;
			 }
			 
			 case MDIO_enu_PORTD :
			 {
				 switch (Copy_enuConfigration)
				 {
					 case MDIO_enu_OUTPUT :
					 set_bit(DDRD , Copy_enuPinNum);
					 clear_bit(PORTD , Copy_enuPinNum);
					 break;
					 
					 case MDIO_enu_INPUT_PULLUP :
					 clear_bit(DDRD , Copy_enuPinNum);
					 set_bit(PORTD , Copy_enuPinNum);
					 break;
					 case MDIO_enu_EXTERNAL_PULLDOWN :
					 clear_bit(DDRD , Copy_enuPinNum);
					 clear_bit(PORTD , Copy_enuPinNum);
					 break;
				 }
				 
				 break;
			 }
			
		}
		
		ret_enu = MDIO_enu_OK ;
	    
	    }
	return ret_enu;
	};

// pin number 14

/*uin8* arr[2] = {
	0x3A,
	0x37 
}

	void dio_setpin(uint8 pin, configurations) 
	{
		uint8 port = pin / 8;
		uint8 pinnumber = pin % 8;

		(*arr[port]) |= configuration << pinnumber;  

	} */
	
	MDIO_enuErrorStatus_t MDIO_enuSetPortConfigration(MDIO_enu_PORT_OPTS_t Copy_enuPortNum, MDIO_enu_CONFG_OPTS_t Copy_enuConfigration)
	{
		MDIO_enuErrorStatus_t ret_enu = MDIO_enu_NOK; //to get the error in a variable and get only one return at end of api
		
		if(Copy_enuPortNum > MDIO_enu_PORTD )
		ret_enu  =  MDIO_enu_INVALID_PORT_NUM ;
		
		
		else if (Copy_enuConfigration > MDIO_enu_EXTERNAL_PULLDOWN)
		ret_enu = MDIO_enu_INVALID_PORT_CONFG ;
		
		else{
			
			switch (Copy_enuPortNum)
			{
				case MDIO_enu_PORTA :
				{
					switch (Copy_enuConfigration)
					{
						case MDIO_enu_OUTPUT :
						set_port(DDRA);
						clear_port(PORTA);
						break;
						
						case MDIO_enu_INPUT_PULLUP :
						clear_port(DDRA);
						set_port(PORTA);
						break;
						
						case MDIO_enu_EXTERNAL_PULLDOWN :
						clear_port(DDRA);
						clear_port(PORTA);
						break;
					}
					
					break;
				}
				
				case MDIO_enu_PORTB :
				{
					switch (Copy_enuConfigration)
					{
						case MDIO_enu_OUTPUT :
						set_port(DDRB);
						clear_port(PORTB);
						break;
						
						case MDIO_enu_INPUT_PULLUP :
						clear_port(DDRB);
						set_port(PORTB);
						break;
						
						case MDIO_enu_EXTERNAL_PULLDOWN :
						clear_port(DDRB);
						clear_port(PORTB);
						break;
					}
					
					break;
				}
				
				case MDIO_enu_PORTC :
				{
					switch (Copy_enuConfigration)
					{
						case MDIO_enu_OUTPUT :
						set_port(DDRC);
						clear_port(PORTC);
						break;
						
						case MDIO_enu_INPUT_PULLUP :
						clear_port(DDRC);
						set_port(PORTC);
						break;
						
						case MDIO_enu_EXTERNAL_PULLDOWN :
						clear_port(DDRC);
						clear_port(PORTC);
						break;
					}
					
					break;
				}
				
				
				case MDIO_enu_PORTD :
				{
					switch (Copy_enuConfigration)
					{
						case MDIO_enu_OUTPUT :
						set_port(DDRD);
						clear_port(PORTD);
						break;
						
						case MDIO_enu_INPUT_PULLUP :
						clear_port(DDRD);
						set_port(PORTD);
						break;
						
						case MDIO_enu_EXTERNAL_PULLDOWN :
						clear_port(DDRD);
						clear_port(PORTD);
						break;
					}
					
					break;
				}
			}
			
			ret_enu = MDIO_enu_OK ;
			
		}
		return ret_enu;
	};
	
	MDIO_enuErrorStatus_t MDIO_enuSetPinValue(MDIO_enu_PORT_OPTS_t Copy_enuPortNum, MDIO_enu_PIN_OPTS_t Copy_enuPinNum, MDIO_enu_PIN_STATE_OPTS_t Copy_enuState)
	{
		MDIO_enuErrorStatus_t ret_enu = MDIO_enu_NOK ;
		
		if (Copy_enuPortNum > MDIO_enu_PORTD)
		   ret_enu = MDIO_enu_INVALID_PORT_NUM ; 
		   
		   else if (Copy_enuPinNum > MDIO_enu_PIN7)
		   ret_enu = MDIO_enu_INVALID_PIN_NUM ; 
		   
		   else if (Copy_enuState > MDIO_enu_HIGH)
		   ret_enu = MDIO_enu_INVALID_PIN_STATE ; 
		    
		else 
		{
			
	switch (Copy_enuPortNum)
	  {
				case MDIO_enu_PORTA :
				
				switch (Copy_enuState)
				{
					
					case MDIO_enu_LOW :
					clear_bit(PORTA , Copy_enuPinNum);
					break;
					
					case MDIO_enu_HIGH :
					set_bit(PORTA , Copy_enuPinNum);
					break;
				}
			     break;

				case MDIO_enu_PORTB :
				
				switch (Copy_enuState)
				{
					
					case MDIO_enu_LOW :
					clear_bit(PORTB , Copy_enuPinNum);
					break;
					
					case MDIO_enu_HIGH :
					set_bit(PORTB , Copy_enuPinNum);
					break;
				}
				break;
				
				case MDIO_enu_PORTC :
				
				switch (Copy_enuState)
				{
					
					case MDIO_enu_LOW :
					clear_bit(PORTC , Copy_enuPinNum);
					break;
					
					case MDIO_enu_HIGH :
					set_bit(PORTC , Copy_enuPinNum);
					break;
				}
				break;

				case MDIO_enu_PORTD :
				
				switch (Copy_enuState)
				{
					
					case MDIO_enu_LOW :
					clear_bit(PORTD , Copy_enuPinNum);
					break;
					
					case MDIO_enu_HIGH :
					set_bit(PORTD , Copy_enuPinNum);
					break;
				}
				break;

	   
	   }
			
			ret_enu = MDIO_enu_OK;
		}
		
		return ret_enu;
		};


MDIO_enuErrorStatus_t MDIO_enuSetPortValue(MDIO_enu_PORT_OPTS_t Copy_enuPortNum,MDIO_enu_PORT_STATE_OPTS_t Copy_enuPortState)
    {
		MDIO_enuErrorStatus_t ret_enu = MDIO_enu_NOK ;
		
		if (Copy_enuPortNum > MDIO_enu_PORTD)
		   ret_enu = MDIO_enu_INVALID_PORT_NUM ; 
		   
		   else if (Copy_enuPortState > MDIO_enu_HIGH )
		   ret_enu = MDIO_enu_INVALID_PORT_STATE ; 
		   
		    
		else 
		{
			
			switch (Copy_enuPortNum)
			{
				case MDIO_enu_PORTA :
				  
				  switch (Copy_enuPortState)
				  {
					  case MDIO_enu_PORT_LOW :
					  clear_port (PORTA) ;
					  break;
					  
					  case MDIO_enu_PORT_HIGH :
					  set_port (PORTA); 
				  }
				
				break;
				
				case MDIO_enu_PORTB :
				
				switch (Copy_enuPortState)
				{
					case MDIO_enu_PORT_LOW :
					clear_port (PORTB) ;
					break;
					
					case MDIO_enu_PORT_HIGH :
					set_port (PORTB);
				}
				
				break;
				
				case MDIO_enu_PORTC :
				
				switch (Copy_enuPortState)
				{
					case MDIO_enu_PORT_LOW :
					clear_port (PORTC) ;
					break;
					
					case MDIO_enu_PORT_HIGH :
					set_port (PORTC);
				}
				
				break;
				
				case MDIO_enu_PORTD :
				
				switch (Copy_enuPortState)
				{
					case MDIO_enu_PORT_LOW :
					clear_port (PORTD) ;
					break;
					
					case MDIO_enu_PORT_HIGH :
					set_port (PORTD);
				}
				
				break;
			}

       ret_enu = MDIO_enu_OK ; 
		
		}
	
	return ret_enu ;	
	}
	
	
	MDIO_enuErrorStatus_t MDIO_enuGetPinValue(MDIO_enu_PORT_OPTS_t Copy_enuPortNum,MDIO_enu_PIN_OPTS_t Copy_enuPinNum, u8* Add_pu8PinValue) 
	{
		MDIO_enuErrorStatus_t ret_enu = MDIO_enu_NOK ;
		
		if (Copy_enuPortNum > MDIO_enu_PORTD)
		ret_enu = MDIO_enu_INVALID_PORT_NUM ;
		
		else if (Copy_enuPinNum > MDIO_enu_HIGH )
		ret_enu = MDIO_enu_INVALID_PIN_NUM ;
		
		
		
		else
		{
			
			switch (Copy_enuPortNum) 
			{
				case MDIO_enu_PORTA :
				*Add_pu8PinValue = git_bit(PINA , Copy_enuPinNum);
				break;
				
				case MDIO_enu_PORTB :
				*Add_pu8PinValue = git_bit(PINB , Copy_enuPinNum);
				break;
				
				case MDIO_enu_PORTC :
				*Add_pu8PinValue = git_bit(PINC , Copy_enuPinNum);
				break;
				
				case MDIO_enu_PORTD :
				*Add_pu8PinValue = git_bit(PIND , Copy_enuPinNum);
				break;	
			}
	    }
	}
	
	