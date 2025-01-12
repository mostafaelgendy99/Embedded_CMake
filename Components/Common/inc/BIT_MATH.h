#ifndef BIT_MATH_H_  //if we donot define this library before=file gard 
#define BIT_MATH_H_

#define set_bit(REG , BIT)    ((REG) |= (1<<BIT))
#define clear_bit(REG , BIT)  ((REG) &= (~(1<<BIT)))
#define toggle_bit(REG , BIT) (((REG)) ^= (1<<BIT))
#define git_bit(REG , BIT)	  ((REG>>BIT) & (1))

#define set_port(REG)    (REG = 0xFF)
#define clear_port(REG)  (REG= 0x00)

#define GET_HIGH_NIB(REG) ((REG & 0xF0) >> 4 ) 
#define GET_LOW_NIB(REG) (REG & 0x0F)

#define Port_A_Addr 0x39  //the addres of pin register of Port A
#define getPortAddress(PortNumber) ((port_A_addr)-(3*PortNumber))

#endif