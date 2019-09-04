// LED Pin
const int LED = 8;

// Interval to blink
const int DELAY_MILLIS = 1000;

// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long previousMillis = 0;        // will store last time LED was updated

// ledState used to set the LED
int ledState = LOW; 

void setup() {
  // LED
  pinMode(LED, OUTPUT);

}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= DELAY_MILLIS) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(LED, ledState);
  }
}
