// ============================================================
// Smart Home – Task 2 : Temperature & Humidity Monitor
// Soft Nexis Technology | Embedded Systems Internship
// ============================================================
#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>
// --- Pin & Sensor definitions ---
#define DHTPIN 2 // DHT11 data pin connected to Arduino pin 2
#define DHTTYPE DHT11 // We are using DHT11 model
#define ALERT_LED 13 // LED for high-temperature alert
// --- Temperature alert threshold ---
const float TEMP_LIMIT = 35.0; // Alert if temp exceeds 35°C
DHT dht(DHTPIN, DHTTYPE); // Create sensor object
void setup() {
pinMode(ALERT_LED, OUTPUT);
Serial.begin(9600);
dht.begin(); // Initialize DHT sensor
Serial.println("Smart Home – Temperature Monitor Ready!");
Serial.println("------------------------------------------");
}
void loop() {
// Read values (takes ~250ms; library handles timing)
float humidity = dht.readHumidity();
float temperature = dht.readTemperature(); // Celsius by default
// Check if sensor returned valid numbers
if (isnan(humidity) || isnan(temperature)) {
Serial.println("ERROR: Sensor read failed. Check wiring!");
delay(2000);
return; // Skip rest of loop and retry
}
// Calculate Heat Index (feels-like temperature)
float heatIndex = dht.computeHeatIndex(temperature, humidity, false);
// Print to Serial Monitor
Serial.print("Temperature : "); Serial.print(temperature);
Serial.println(" C");
Serial.print("Humidity : "); Serial.print(humidity);
Serial.println(" %");
Serial.print("Heat Index : "); Serial.print(heatIndex);
Serial.println(" C");
// Alert logic
if (temperature > TEMP_LIMIT) {
digitalWrite(ALERT_LED, HIGH); // Turn on alert LED
Serial.println(">>> ALERT: High Temperature Detected! <<<");
} else {
digitalWrite(ALERT_LED, LOW); // Normal temperature
Serial.println("Status: Temperature Normal.");
}
Serial.println("------------------------------------------");
delay(2000); // Read every 2 seconds
}

