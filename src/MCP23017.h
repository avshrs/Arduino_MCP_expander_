#ifndef MCP23017_h
#define MCP23017_h

#define    IODIRA    (0x00)      // MCP23x17 I/O Direction Register
#define    IODIRB    (0x01)      // 1 = Input (default), 0 = Output

#define    IPOLA     (0x02)      // MCP23x17 Input Polarity Register
#define    IPOLB     (0x03)      // 0 = Normal (default)(low reads as 0), 1 = Inverted (low reads as 1)

#define    GPINTENA  (0x04)      // MCP23x17 Interrupt on Change Pin Assignements
#define    GPINTENB  (0x05)      // 0 = No Interrupt on Change (default), 1 = Interrupt on Change

#define    DEFVALA   (0x06)      // MCP23x17 Default Compare Register for Interrupt on Change
#define    DEFVALB   (0x07)      // Opposite of what is here will trigger an interrupt (default = 0)

#define    INTCONA   (0x08)      // MCP23x17 Interrupt on Change Control Register
#define    INTCONB   (0x09)      // 1 = pin is compared to DEFVAL, 0 = pin is compared to previous state (default)

#define    IOCON     (0x0A)      // MCP23x17 Configuration Register

#define    GPPUA     (0x0C)      // MCP23x17 Weak Pull-Up Resistor Register
#define    GPPUB     (0x0D)      // INPUT ONLY: 0 = No Internal 100k Pull-Up (default) 1 = Internal 100k Pull-Up 

#define    INTFA     (0x0E)      // MCP23x17 Interrupt Flag Register
#define    INTFB     (0x0F)      // READ ONLY: 1 = This Pin Triggered the Interrupt

#define    INTCAPA   (0x10)      // MCP23x17 Interrupt Captured Value for Port Register
#define    INTCAPB   (0x11)      // READ ONLY: State of the Pin at the Time the Interrupt Occurred

#define    GPIOA     (0x12)      // MCP23x17 GPIO Port Register
#define    GPIOB     (0x13)      // Value on the Port - Writing Sets Bits in the Output Latch

#define    OLATA     (0x14)      // MCP23x17 Output Latch Register
#define    OLATB     (0x15)      // 1 = Latch High, 0 = Latch Low (default) Reading Returns Latch State, Not Port Value!

#include <Arduino.h>


class MCP {
    public:
        void MCP_Init(uint8_t MCPADDRSS, uint8_t GIPOA_TYPE, uint8_t GIPOA_PULL, uint8_t GIPOB_TYPE, uint8_t GIPOB_PULL);         
        //vars
        uint8_t mcpAddress = 0x20;
    
        //methods
        uint8_t readRaw(uint8_t side);                        
        uint16_t readAll();
        void writeRaw(uint8_t side, uint8_t memory);
        void writeOne(uint8_t pin, uint8_t value, uint8_t side, uint8_t force);
        void writeAll(uint8_t values, uint8_t side, uint8_t force);
        uint8_t convert_bits(uint8_t bits);
        uint8_t convert_bits2(uint8_t bits);


};
#endif //MCP23017_h
