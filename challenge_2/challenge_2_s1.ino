//Challenge #2 - Digital Read Switch
// Scenario 1: LED must be ON when the button is not pressed and should be OFF when the button is pressed

#define LED_RED 8
#define BUTTON_RED 7

void setup() {
  Serial.begin(9600); // Initialize Serial Monitor
  pinMode(LED_RED, OUTPUT);  // Set LED as an output
  pinMode(BUTTON_RED, INPUT); // Set button as an input
  digitalWrite(LED_RED, HIGH); // Ensure LED is ON at startup
  Serial.println("Scenario 1: LED ON when button NOT pressed.");
}

void loop() {
  int buttonState = digitalRead(BUTTON_RED); // Read the button state

  if (buttonState == HIGH) {
    // Button is pressed
    digitalWrite(LED_RED, LOW); // Turn LED OFF
    Serial.println("Button is pressed. LED is OFF.");
  } else {
    // Button is not pressed
    digitalWrite(LED_RED, HIGH); // Turn LED ON
    Serial.println("Button is NOT pressed. LED is ON.");
  }
}
