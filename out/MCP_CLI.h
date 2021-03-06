#ifndef MCP_CLI_h
#define MCP_CLI_h
#include <Arduino.h>
#include "MCP_eeprom.h"
class MCP_CLI{
    public:
    MCP_eeprom *mcp_eeprom_;
    
    
    char RS_BUFFER[64];
    String RS_VALUE     = "";
    char   RS_DELIMITER = ',';
    char   RS_DELIMITER2 = '-';
    int    RS_POSITION  = 0;
    char   RS_FLAG      = '\n';

    void register_eeprom(MCP_eeprom *mcp_eeprom);
    void read_command();
    void serialCom();
    bool rsReceiver();
    String getCmd();
    bool isCmd(String CMD);
    String getValue();
    String get1Value();
    String get2Value();    
};

#endif //MCP_CLI_h
