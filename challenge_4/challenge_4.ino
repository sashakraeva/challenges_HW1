//Challenge #4 - Analog Read Potentiometer
// ● Connect a potentiometer to the Arduino
// ● Use the serial monitor to read the values as you turn the knob
// ● Feel free to connect an actuator (LED) and see if you can use PWM principlesto create a dimmer


#define POTENTIOMETER_PIN A0  // Potentiometer connected to analog pin A0
#define LED_PIN 9            // LED connected to PWM pin 9

void setup() {
  Serial.begin(9600); // Initialize Serial Monitor
  pinMode(LED_PIN, OUTPUT);  // Set LED pin as an output
  Serial.println("Challenge #4: Potentiometer values and LED dimming.");
}

void loop() {
  // Read the potentiometer value (0 to 1023)
  int potValue = analogRead(POTENTIOMETER_PIN);

  // Map the potentiometer value to a PWM value (0 to 255)
  int pwmValue = map(potValue, 0, 1023, 0, 255);

  // Write the PWM value to the LED pin
  analogWrite(LED_PIN, pwmValue);

  // Print the potentiometer value and PWM value to the Serial Monitor
  Serial.print("Potentiometer Value: ");
  Serial.print(potValue);
  Serial.print(" | PWM Value: ");
  Serial.println(pwmValue);

  // Small delay for readability
  delay(100);
}
