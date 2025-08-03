const int ledPin = 2; // Pin for the LED
void setup() {
  pinMode(ledPin, OUTPUT); // Set the LED pin as an output
  digitalWrite(ledPin, LOW); // Initialize the LED to be off
  Serial.begin(9600); // Start serial communication at 9600 baud rate
  Serial.println("Home Control System Initialized");
}

void loop() {
  // Main loop for the home control system
  // Here you can add code to control the LED or other devices
  // For example, toggle the LED every second
  digitalWrite(ledPin, HIGH); // Turn the LED on
  delay(1000); // Wait for a second
  digitalWrite(ledPin, LOW); // Turn the LED off
  delay(1000); // Wait for a second
}
