//Challenge #1 - Digital Read Switch
// • Design the switch (with or without a pull-up resistor)
// • Control an LED state based on switch state
// • Switch pressed (HIGH) —> LED ON (High)
// • Switch released (LOW) —> LED OFF (Low)

#define LED_RED 8
#define BUTTON_RED 7

void setup() {
  Serial.begin(9600); // Initialize Serial Monitor
  pinMode(LED_RED, OUTPUT);  // Set LED as an output
  pinMode(BUTTON_RED, INPUT); // Set button as an input
  digitalWrite(LED_RED, LOW); // Ensure LED is off at startup
}

void loop() {
  int buttonState = digitalRead(BUTTON_RED); // Read the button state
  if (buttonState == HIGH) {
    // Button is pressed
    Serial.println("Button RED is pressed. LED is ON.");
    digitalWrite(LED_RED, HIGH); // Turn on the LED
  } else {
    // Button is released
    Serial.println("Button RED is released. LED is OFF.");
    digitalWrite(LED_RED, LOW); // Turn off the LED
  }
  delay(100); // Debounce delay
}
