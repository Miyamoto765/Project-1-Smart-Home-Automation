# Project 1 – Smart Home Automation

Arduino-based Smart Home Automation project using an LDR sensor and a DHT11 sensor, developed during the Soft Nexis Technology Embedded Systems Internship.

## Overview

This project implements two automation tasks using an Arduino:

1. **Task 1 – Automated LED Control with LDR**: Turns an LED ON in the dark and OFF in bright light, based on readings from a photoresistor (LDR).
2. **Task 2 – Temperature & Humidity Monitor with Alert**: Reads temperature and humidity from a DHT11 sensor and lights an alert LED when the temperature exceeds a set threshold.

## Hardware Used

- Arduino UNO
- LDR (Light Dependent Resistor)
- DHT11 Temperature & Humidity Sensor
- 2x LEDs
- 2x 220Ω resistors (for LEDs)
- 1x 10kΩ resistor (for LDR voltage divider)
- Breadboard + jumper wires

## Task 1 – LDR + LED

**File:** `Task_1.ino`

| From | To | Note |
|---|---|---|
| LDR Pin 1 | Arduino 5V | Power supply to LDR |
| LDR Pin 2 | Arduino A0 + one end of 10kΩ resistor | Analog input & voltage divider |
| Other end of 10kΩ resistor | Arduino GND | Completes voltage divider |
| LED Anode (+) | Arduino Pin 9 via 220Ω resistor | Digital output controls LED |
| LED Cathode (−) | Arduino GND | Completes LED circuit |

- **Analog pin:** A0
- **LED pin:** 9
- **Threshold:** 400 (light level below this = dark → LED ON)
- **Logic:** Reads analog light level every 500ms; LED turns ON when dark, OFF when bright.

## Task 2 – DHT11 + Alert LED

**File:** `Task_2.ino`

| From | To | Note |
|---|---|---|
| DHT11 Pin 1 (VCC) | Arduino 5V | Power supply |
| DHT11 Pin 2 (DATA) | Arduino Pin 2 | Data communication |
| DHT11 Pin 3 (NC) | Not connected | Not used |
| DHT11 Pin 4 (GND) | Arduino GND | Ground |
| LED Anode (+) | Arduino Pin 13 via 220Ω resistor | Alert LED |
| LED Cathode (−) | Arduino GND | Ground |

- **Data pin:** 2
- **Alert LED pin:** 13
- **Temperature threshold:** 35.0°C (alert LED turns ON above this)
- **Logic:** Reads temperature, humidity, and computed heat index every 2 seconds via Serial Monitor; alert LED activates when temperature exceeds 35°C.

**Required Library:** DHT sensor library by Adafruit (also requires Adafruit Unified Sensor library)

## Repository Structure

```    
Project-1-Smart-Home-Automation/
├── README.md
├── Task_1.ino
├── Task_2.ino
├── writeup.md
└── media/
    ├── task1_circuit_photo.jpg
    ├── task1_serial_monitor.png
    ├── task1_demo_video.mp4
    ├── task2_circuit_photo.jpg
    ├── task2_serial_monitor.png
    └── task2_demo_video.mp4
```
