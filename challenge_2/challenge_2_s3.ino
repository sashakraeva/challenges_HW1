//Challenge #2 - Digital Read Switch
// Scenario 3: Press the button to turn ON the LED and press it again to turn OFF the LED (toggle)

#define LED_RED 8
#define BUTTON_RED 7

bool ledState = LOW;           // Current state of the LED (ON/OFF)
bool lastButtonState = LOW;    // Previous state of the button

void setup() {
  Serial.begin(9600); // Initialize Serial Monitor
  pinMode(LED_RED, OUTPUT);  // Set LED as an output
  pinMode(BUTTON_RED, INPUT); // Set button as an input
  digitalWrite(LED_RED, LOW); // Ensure LED is OFF at startup
  Serial.println("Scenario 3: Press the button to toggle LED state.");
}

void loop() {
  int buttonState = digitalRead(BUTTON_RED); // Read the button state

  if (buttonState == HIGH && lastButtonState == LOW) {
    // Button press detected (transition from LOW to HIGH)
    ledState = !ledState;             // Toggle the LED state
    digitalWrite(LED_RED, ledState);  // Update the LED based on the new state

    if (ledState) {
      Serial.println("Button pressed. LED is ON.");
    } else {
      Serial.println("Button pressed. LED is OFF.");
    }
    delay(100); // Debounce delay to avoid multiple toggles
  }

  lastButtonState = buttonState; // Update the last button state
}
