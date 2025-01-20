// Challenge #3 - Digital Read Switch
// Add one more button connected to Pin 3, use Pull Up or Pull Down resistor if necessary. Let’s call this Button2 and the previous one as Button1
// Add one LED as well
// Create a code that will do the following: Scenario 4: When Button1 is pressed, all LEDs will be ON and should stay ON even after Button1 is released. When Button2 is pressed and released, all LEDs should be OFF

#define LED1 8       // First LED connected to Pin 8
#define LED2 9       // Second LED connected to Pin 9
#define BUTTON1 7    // Button1 connected to Pin 7
#define BUTTON2 3    // Button2 connected to Pin 3

void setup() {
  Serial.begin(9600); // Initialize Serial Monitor

  // Set LED pins as outputs
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);

  // Set button pins as inputs
  pinMode(BUTTON1, INPUT);
  pinMode(BUTTON2, INPUT);

  // Turn LEDs OFF initially
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);

  Serial.println("Scenario 4: Control LEDs with two buttons.");
}

void loop() {
  int button1State = digitalRead(BUTTON1); // Read the state of Button1
  int button2State = digitalRead(BUTTON2); // Read the state of Button2

  // If Button1 is pressed, turn ON both LEDs
  if (button1State == HIGH) {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    Serial.println("Button1 pressed. LEDs are ON.");
    delay(200); // Debounce delay
  }

  // If Button2 is pressed, turn OFF both LEDs
  if (button2State == HIGH) {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    Serial.println("Button2 pressed. LEDs are OFF.");
    delay(200); // Debounce delay
  }
}
