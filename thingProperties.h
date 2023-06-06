// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

void onVoltageChange();
void onBatPercentageChange();

float voltage;
int bat_percentage;

void initProperties(){

  ArduinoCloud.addProperty(voltage, READWRITE, ON_CHANGE, onVoltageChange);
  ArduinoCloud.addProperty(bat_percentage, READWRITE, ON_CHANGE, onBatPercentageChange);

}

////////////////////////////ATTENTION!!!////////////////////////////////
// ATTENTION: No device is currently associated to this Thing,        //
// hence the Connection Handler code could not be generated           //
// Please associate an existing or new device or manually create your //
// instance of Connection Handler                                     //
// Eg.                                                                // 
// WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);   //
////////////////////////////////////////////////////////////////////////

#error "No device is currently associated to this Thing, hence the Connection Handler code could not be generated"
