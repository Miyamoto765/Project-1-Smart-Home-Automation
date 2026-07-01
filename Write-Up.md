## **Project 1 Smart Home Automation** 

I worked on a project where I built two embedded systems using an Arduino Uno R4 Wi-Fi. This project was really good for me because I got to try my hand at working with analog sensors and digital sensors. Working with both analog sensors and digital sensors is very important in embedded electronics. I got to learn about analog sensor interfacing and digital sensor interfacing. The Arduino UNO R4 Wi-Fi was a tool to use for this project. I learned a lot about embedded systems and how to work with sensors like analog sensors and digital sensors. 

## **Task 1: Light Based Automation** 

For this task I used a Light Dependent Resistor arranged in a setup with a 10kΩ resistor. This setup helps to change light into a voltage that I can read. I did this by using the Light Dependent Resistor in a voltage setup with the 10kΩ resistor. I took this voltage reading from pin A0 all the time. 

I compared this reading to a number, 400 that I had already decided on. When the reading was below this number it meant the Light Dependent Resistor was in conditions so I turned an LED on. When it was above this number it meant the Light Dependent Resistor was in conditions so I turned the LED off. 

I learned a lot from this task about how a Light Dependent Resistor works and how to use it to sense light. I found out why the Light Dependent Resistor needs a circuit to work properly. I also learned how to pick a threshold by looking at the readings from the Light Dependent Resistor using the Serial Monitor. 

## **Task 2: Temperature and Humidity Monitoring** 

In this task I worked with a DHT11 temperature and humidity sensor. I used the Adafruit DHT library for this. The DHT11 is different from the Light Dependent Resistor. It sends data through one pin, pin 2. It uses a timing protocol. The library takes care of this protocol for me. I used the sensor readings to calculate the heat index. I also made a system. If the temperature was above 35°C, the LED on pin 13 would light up. This project was a way to learn how to work with sensor libraries. I learned how to deal with sensor readings. I learned how to design automation logic based on thresholds. The DHT11 temperature and humidity sensor was quite useful. The Adafruit DHT library helped a lot in working with the sensor. The temperature and humidity readings were correct. I was able to calculate the heat index and the alert system worked as expected. 

## **Key Takeaways** 

Together these two tasks helped me understand concepts in embedded systems. I learned about the difference between analog sensing and digital sensing. Analog sensing helps to detect signals while digital sensing works with on and off signals. I also understood how voltage dividers work and how they help reduce voltage to a level that microcontrollers can read. Another important concept was logic for automation. This logic helps to make decisions based on conditions. The Serial Monitor was also crucial for debugging and calibration. It helps to see the data that the microcontroller is sending and receiving. These basic skills will be useful for smart home projects. For example I can integrate sensors at the time. I can also add connectivity using modules like the ESP32. Logging sensor data to the cloud will allow me to monitor and analyze it remotely. This will be helpful for keeping track of things at home when I'm not there. The skills I learned will make it easier to work on projects, like Smart Home Automation. 

