#include <DallasTemperature_simplified.h>
// Data wire is plugged into pin 2 on the Arduino
#define DATA_PIN 2
/********************************************************************/
// Pass our oneWire reference to Dallas Temperature.
DallasTemperature sensor;
/********************************************************************/
void setup()
{
 Serial.begin(9600);
 sensor.begin();
}
void loop()
{
 Serial.print(" Requesting temperatures...");
 sensor.requestTemperatures(); // Send the command to get temperature readings
 Serial.println("DONE");
/********************************************************************/
 Serial.print("Temperature is: ");
 Serial.print(sensor.getTempF());
   delay(1000);
}
