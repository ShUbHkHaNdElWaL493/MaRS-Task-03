# MaRS-Task-03


@ Introduction

The RF receiver has been designed to detect signals sent by the RF transmitter.
The receiver detects the sent signal and sends the received information to the Arduino.
Arduino then, sends the signal to the led pin to turn it on.
The LED is turned off when no signal is received as Arduino stops receiving the signal from the sensor.


@ Procedure

1. The RF receiver consists of 8 pins.
2. Pin 1 is connected to an external antenna if available.
3. Pins 2, 3 and 8 are connected to ground.
4. Pins 4 and 5 are connected to the 5V source.
5. Pins 6 and 7 are connected to one of the digitalRead pins on the Arduino, say pin 11.
6. Connect another pin, say pin 12, to the positive terminal of the LED and the negative terminal of the LED is connected to the ground. A resistor may be used to manipulate the power being provided to the LED.
7. The code for the Arduino is written as provided.
8. The output can be observed on the serial monitor and through the LED.


@ Resources Used
1. Information on the RF transmitter and receiver: https://how2electronics.com/433mhz-rf-module-works-interfacing-arduino/
2. Link for the RadioHead library used: http://www.airspayce.com/mikem/arduino/RadioHead/RadioHead-1.92.zip


@ Knowledge Gained

Task 03 of MaRS was really interesting as I got to experience building circuits physically as opposed to building circuits on Tinkercad.
I learnt about transmitters and receivers and how they are used in everyday world.
I also found it interesting to work with electrical components and thought about using Arduino for different purposes.
I learnt about physical limitations that one faces that can not be perceived without actually experimenting with hardware.
Overall, it was a great learning experience for me.
