
# Color Sorting Robotic Arm

## Overview
This project is a 6DOF robotic arm designed to automatically sort objects based on color using embedded systems and sensors. The system mimics a basic industrial pick-and-place mechanism and aims to improve efficiency in sorting tasks.

## Features
- Automated color detection using TCS3200 sensor
- Pick-and-place mechanism using servo motors
- Real-time object detection with IR sensors
- Sorting into predefined bins based on color

## Tech Stack
- Arduino Nano
- TCS3200 Color Sensor
- IR Sensors
- MG995 Servo Motors
- Embedded C (Arduino IDE)

## How it works
1. IR sensor detects the presence of an object  
2. Color sensor identifies the object's color  
3. Arduino processes the input and determines the target bin  
4. Robotic arm picks the object and places it in the correct bin  

## System Design
You can view the full system architecture, circuit diagrams, and working explanation here:  
https://roboticarmcolor-sorting.my.canva.site/

## Applications
- Industrial automation
- Warehouse sorting systems
- Smart manufacturing

## Learnings
- Worked with embedded systems and real-time sensor data  
- Understood servo motor control and calibration  
- Improved system accuracy through iterative testing  

## Future Improvements
- Add camera-based detection for higher accuracy  
- Improve speed and precision  
- Integrate IoT for remote monitoring  
