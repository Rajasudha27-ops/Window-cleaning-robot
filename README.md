WINDOW CLEANING ROBOT

1. INTRODUCTION

Window Cleaning Robot is an automatic cleaning system designed to clean glass windows efficiently.

* Manual window cleaning is time-consuming and difficult.
* High-rise and large glass windows are difficult to clean safely.
* The robot automatically cleans glass surfaces.
* It reduces human effort and improves cleaning efficiency.

2. OBJECTIVES

* To develop an automatic window cleaning robot.
* To reduce human effort and cleaning time.
* To clean glass surfaces efficiently.
* To improve safety while cleaning difficult-to-reach windows.

3. COMPONENTS REQUIRED

S.No	Component	Purpose
1	ESP32 / Arduino	Main controller
2	DC Motors	Movement of robot
3	Motor Driver (L298N)	Controls motors
4	Cleaning Brush / Wiper	Cleans glass surface
5	Water Pump	Sprays cleaning liquid
6	Water Tank	Stores cleaning liquid
7	Battery (12V)	Power supply
8	Spray Nozzle	Sprays water
9	Buzzer	Alert indication
10	Wheels / Suction Mechanism	Movement and surface contact

4. BLOCK DIAGRAM

Battery (12V) → ESP32 Controller → L298N Motor Driver → DC Motors → Robot Movement.

Water Tank → Water Pump → Spray Nozzle → Cleaning Mechanism.

ESP32 → Buzzer.

5. WORKING PRINCIPLE

1. The battery supplies power to the system.
2. The controller controls the motors.
3. The robot moves over the window surface.
4. The water pump sprays cleaning liquid.
5. The brush/wiper removes dust and stains.
6. The robot completes the cleaning process.

6. CIRCUIT DIAGRAM

The ESP32 is connected to the L298N motor driver to control the left and right DC motors.

The water pump and cleaning brush are controlled through suitable driver circuits.

The buzzer is connected to the controller for alert indication.

7. FLOWCHART

START
↓
Power ON
↓
Initialize Controller
↓
Move Robot
↓
Spray Cleaning Liquid
↓
Rotate Cleaning Brush / Wiper
↓
Check Cleaning Area
↓
Continue Cleaning / Stop Robot
↓
END

8. ADVANTAGES

* Reduces manual effort.
* Saves cleaning time.
* Improves safety.
* Can clean large glass surfaces.
* Simple and cost-effective design.
* Reduces the need for high-altitude manual cleaning.

9. APPLICATIONS

* Residential windows.
* Commercial buildings.
* Office buildings.
* Shopping malls.
* Glass doors.
* Large glass panels.

10. FUTURE SCOPE

* Automatic obstacle detection.
* IoT-based remote monitoring.
* Mobile application control.
* Automatic water-level monitoring.
* AI-based dirt detection.
* Improved safety and navigation.

11. SUSTAINABLE DEVELOPMENT GOAL

SDG 9 – Industry, Innovation and Infrastructure

* Promotes innovative automation.
* Supports smart and efficient technologies.
* Reduces manual effort in cleaning operations.

12. CONCLUSION

The Window Cleaning Robot provides an automatic solution for cleaning glass surfaces. It reduces human effort, saves time, and improves cleaning efficiency. This project demonstrates the use of embedded systems and automation technology.
