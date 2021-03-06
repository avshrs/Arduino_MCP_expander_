#include "vars.h"
#include "MCP_eeprom.h"
#include "MCP_Manager.h"
#include "Ether.h"
#define delay_v (0)

MCP_eeprom mcp_eeprom;
MCP_Manager mcp_manager;


Ether_io ether_io;    

void setup(){
    Serial.begin(1000000);
    Serial.println(F("Setup Start"));

    mcp_eeprom.init_eeprom();

    ether_io.Ether_Intit();
    mcp_manager.init_mcp_devices();
    
    ether_io.register_eeprom(&mcp_eeprom);
    mcp_manager.register_eeprom(&mcp_eeprom);

    Serial.println(F("Setup End"));
}

void loop(){
    mcp_manager.read_all_inputs();
    ether_io.check_ether_buffer();
    delay(delay_v);    
}    
