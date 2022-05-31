#include <Arduino.h>

/**
 * Partie II: LEDs clignotantes
 * Exercice A :  Une LED clignotante
 */

const byte PIN_LED = 12;
  
const int DUTY_CYCLE = 20;   // Rapport cyclique en %
const int PERIOD_MILLISEC = 1000 ;    
const int T_ON = PERIOD_MILLISEC * DUTY_CYCLE / 100;

void setup() {
  
  /* Configuration des E/S */
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  digitalWrite(PIN_LED, 1);   
  delay(T_ON);                      
  digitalWrite(PIN_LED, 0);
  delay(PERIOD_MILLISEC - T_ON);           
}