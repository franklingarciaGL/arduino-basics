// LED Pin
const int LED = 8;
// Step size for changing led brightness
int fadeAmount = 5;

// Current LED brightness
int brightness = 0;

void setup() {
  // LED
  pinMode(LED, OUTPUT);
}

void loop() {
  // set the brightness of pin:
  analogWrite(LED, brightness);

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);  
}
