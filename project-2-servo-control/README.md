# Project 2 — Python-Controlled Servo Motor

## Overview
Analog potentiometer-controlled servo motor system built in C++ on Arduino Uno. 
Rotational position of the potentiometer maps to servo angle in real time, 
demonstrating ADC input reading and PWM output control.

## Hardware
- Arduino Uno R3
- SG90 Servo Motor
- Breadboard + Jumper Wires

## Software
- Arduino IDE 2.0
- Ubuntu

## Protocols Used
- PWM (Pulse Width Modulation)
- ADC (Analog to Digital Conversion)
- GPIO

## How It Works
1. Arduino reads analog voltage from potentiometer via ADC
2. Analog value (0-1023) mapped to servo angle (0-180 degrees)
3. Servo position updates in real time as potentiometer is rotated
4. Demonstrates direct relationship between analog input and PWM output

## Demo
![Demo](images/demo.gif)


