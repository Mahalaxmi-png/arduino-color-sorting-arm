
# Color Sorting Robotic Arm

A 6DOF Arduino-based robotic arm that autonomously detects and sorts objects by color using real-time sensor input.

## Overview
This project implements a color-based sorting system using a robotic arm controlled by Arduino. The system identifies objects based on color and performs automated pick-and-place operations, simulating a basic industrial sorting mechanism.

## Features
- Color detection using TCS3200 sensor  
- Automated pick-and-place using servo motors  
- Real-time object detection with IR sensor  
- Predefined sorting positions for different colors  

## Tech Stack
- Arduino Nano  
- Embedded C (Arduino IDE)  
- TCS3200 Color Sensor  
- IR Sensors  
- MG995 Servo Motors  

## How it works
1. The IR sensor detects the presence of an object  
2. The TCS3200 sensor identifies the color of the object  
3. Arduino processes the input signals  
4. Based on detected color, the robotic arm moves to the corresponding bin  
5. The gripper picks and places the object  

## System Design
You can view the complete system architecture, circuit diagrams, and working explanation here:  
https://roboticarmcolor-sorting.my.canva.site/

## Results
- Successfully detected and sorted red, green, and blue objects  
- Achieved consistent pick-and-place operations after calibration  
- Demonstrated real-time response using sensor input  
- Improved sorting efficiency compared to manual handling  

## Learnings
- Hands-on experience with embedded systems and real-time processing  
- Understanding of sensor integration and calibration  
- Servo motor control and coordinated movement  
- Debugging hardware-software interaction  

## Future Improvements
- Integrate camera-based detection for higher accuracy  
- Optimize movement speed and precision  
- Add IoT support for remote monitoring and control  
rget bin  
4. Robotic arm picks the object and places it in the correct bin  

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
