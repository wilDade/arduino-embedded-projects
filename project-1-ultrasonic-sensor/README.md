# Project 1 — Ultrasonic Sensor Data Logger

## Overview
Real-time distance measurement using HC-SR04 ultrasonic sensor 
interfaced with Arduino Uno via GPIO. Programmed in C++ to read distance via
trigger/echo pins and output data over UART serial communication on Linux (Pop!_OS).

## Hardware
- Arduino Uno R3
- HC-SR04 Ultrasonic Sensor
- Breadboard + Jumper Wires
- Red LED
- Green LED

## Software
- Arduino IDE 2.0
- C++ (Arduino framework)
- Pop!_OS (Ubuntu-based Linux)

## Protocols Used
- GPIO (digital output for LED control)
- UART serial communication

## How It Works
1. Arduino reads distance via HC-SR04 trigger/echo pins
2. Distance calculated in C++ and output over UART serial
3. Green LED illuminates when object is beyond 15cm
4. Red LED illuminates when object is within 15cm range
5. Data viewable via Arduino Serial Monitor

## Demo
![Demo](images/demo.gif)


