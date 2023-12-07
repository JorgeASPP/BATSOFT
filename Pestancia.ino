/*Archivo: blink.ino*/
#define PIN_LED 13
#define DELAY 500
 
#define UNIT_TEST
 
#ifdef UNIT_TEST
#include <ArduinoUnit.h>
#endif
 
/*STATIC FUNCTIONS*****************************/
static void toggleLed(void);
 
/* static variables****************************/
static boolean ledStatus = LOW;
static unsigned long lastBlinkTime = 0;
 
void setup() {
  Serial.begin(9600);
  pinMode(PIN_LED, OUTPUT);
}
 
void loop() {
#ifndef UNIT_TEST  
  if(millis() - lastBlinkTime >= DELAY)
  {
    toggleLed();
    digitalWrite(PIN_LED, ledStatus);
 
    lastBlinkTime = millis();
  }
#else
    Test::run();
#endif
}
 
 
/*****************************************
 * Función: toggleLed
 * Descripción: Esta función cambia el estado del led (ledStatus),
 * es decir si es LOW lo cambia a HIGH y viceversa.
 *****************************************/
void toggleLed(void)
{
  ledStatus =  !ledStatus;
}
