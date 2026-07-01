// ============================================================
// Smart Home – Task 1 : Automated LED Control with LDR
// Soft Nexis Technology | Embedded Systems Internship
// ============================================================
// --- Pin definitions ---
const int LDR_PIN = A0; // LDR connected to analog pin A0
const int LED_PIN = 9; // LED connected to digital pin 9
// --- Threshold value (adjust 300–600 based on your room) ---
const int THRESHOLD = 400;
// setup() runs ONCE when Arduino is powered on
void setup() {
pinMode(LED_PIN, OUTPUT); // Set LED pin as output
Serial.begin(9600); // Start serial monitor at 9600 baud
Serial.println("Smart Home – LED Control Started!");
}
// loop() runs FOREVER (repeats continuously)
void loop() {
int lightValue = analogRead(LDR_PIN); // Read LDR value (0–1023)
Serial.print("Light Level: ");
Serial.println(lightValue); // Print value to monitor
if (lightValue < THRESHOLD) {
// Dark environment detected ® Turn LED ON
digitalWrite(LED_PIN, HIGH);
Serial.println("Status: DARK ® LED ON");
} else {
// Bright environment detected ® Turn LED OFF
digitalWrite(LED_PIN, LOW);
Serial.println("Status: BRIGHT ® LED OFF");
}
delay(500); // Wait 500 ms before next reading
}