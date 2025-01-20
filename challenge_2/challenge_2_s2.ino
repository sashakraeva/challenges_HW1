//Challenge #2 - Digital Read Switch
// Scenario 2: LED must be ON when the button is pressed, and stay ON for 5 seconds even when the button is released, after that the LED should be OFF

#define LED_RED 8
#define BUTTON_RED 7

void setup() {
  Serial.begin(9600); // Initialize Serial Monitor
  pinMode(LED_RED, OUTPUT);  // Set LED as an output
  pinMode(BUTTON_RED, INPUT); // Set button as an input
  digitalWrite(LED_RED, LOW); // Ensure LED is OFF at startup
  Serial.println("Scenario 2: LED ON for 5 seconds after button press.");
}

void loop() {
  int buttonState = digitalRead(BUTTON_RED); // Read the button state

  if (buttonState == HIGH) {
    // Button is pressed
    digitalWrite(LED_RED, HIGH); // Turn LED ON
    Serial.println("Button is pressed. LED is ON.");
    delay(5000); // Keep LED ON for 5 seconds
    digitalWrite(LED_RED, LOW); // Turn LED OFF after 5 seconds
    Serial.println("5 seconds passed. LED is OFF.");
  }
}
