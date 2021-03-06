#ifndef VARS_h
#define VARS_h

#include <Arduino.h>

#define    FORCE        (0xFF) 
#define    NFORCE       (0x00) 

#define    MPC1         (0x00)  
#define    MPC2         (0x01) 
#define    MPC3         (0x02)  
#define    MPC4         (0x03) 
#define    MPC5         (0x04)  
#define    MPC6         (0x05) 
#define    MPC7         (0x06)  
#define    MPC8         (0x07) 


#define  MCP1_ADDR      (0x20)
#define  MCP2_ADDR      (0x21)
#define  MCP3_ADDR      (0x22)  
#define  MCP4_ADDR      (0x23) 
#define  MCP5_ADDR      (0x24) 
#define  MCP6_ADDR      (0x25) 
#define  MCP7_ADDR      (0x26) 
#define  MCP8_ADDR      (0x27) 


#define    GPIOA        (0x12)  
#define    GPIOB        (0x13) 

#define    SIDEA        (0x00)  
#define    SIDEB        (0x01) 


#define  MCP_OUT        (0x00)
#define  MCP_IN         (0xFF) 
#define  MCP_PULLUP     (0xFF)
#define  MCP_NOT_PULLUP (0x00)


struct SERIALMCPFRAME{
    uint8_t INSTRUCTIONS = 0;          
    uint8_t VALUE1 = 0; 
    uint8_t VALUE2 = 0;
    uint8_t VALUE3 = 0;
};
struct MCP_Data
{
    uint8_t chipset;
    uint8_t side;
    uint8_t output;
}; 




#endif //VARS_h
