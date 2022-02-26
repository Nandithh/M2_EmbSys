
##   WATER TANK CONTROLLER WITH QUALITY CHECK

### TABLE OF CONTENTS
Sl.no    | CONTENTS
-------| -----------------------------------------
1      | INTRODUCTION
1.1    |  ABSTRACT
1.2    |  OBJECTIVE
2      | REQUIREMENTS
2.1    |  HIGH LEVEL REQUIREMENTS
2.2    |  LOW LEVEL REQUIREMENTS
2.3    |  SWOT ANALYSIS
2.4    |  5W'S 1H
3      | BLOCK DIAGRAM AND COMPONENTS
3.1    |  BLOCK DIAGRAM
3.2    |  COMPONENT DESCRIPTION
4      | ARCHITECTURE 
4.1    |  BEHAVIOURAL DIAGRAMS 
4.1.1  |    HIGH LEVEL
4.1.2  |    LOW LEVEL
4.2    |  STRUCTURAL DIAGRAMS 
4.2.1  |    HIGH LEVEL
4.2.2  |    LOW LEVEL
5      | APPLICATIONS

## 1.INTRODUCTION


### 1.1ABSTRACT
 Water tank controller with Quality check is a system that shall be used to refill water tanks in houses and commercial buildings and monitor the water quality as well. This helps in elimination of manual monitoring and refilling of water tanks. The major advantages of the system is that it helps in automating tasks and also there is no wastage of water overflowing from tanks. It also provides the facility to check water quality as well. The components used in the system is very simple which makes the product economically accessible as well. The overall system development phase is explained.
 
### 1.2 OBJECTIVE
 * To refill the water tank automatically without any wastage of water and power.
 * To monitor the quality of water and alert the user.
        


## 2.REQUIREMENTS

### 2.1 High Level Requirements:

ID     | Description
-------| -----------------------------------------
HLR 1  |To Refill the water tank automatically when tank becomes empty.
HLR 2  |Alert the user when the tank is filled.
HLR 3  |To check the quality of water and alert user.
HLR 4  |To turn ON the motor when the tank becomes empty.

### 2.2 Low Level Requirements:


ID     | Description
-------| -----------------------------------------
LLR 1  |A Microcontroller is used for controlling the process.
LLR 1.1  |A water level sensor is used to check the water level.
LLR 2  |Buzzer is used to alert the user.
LLR 3  |A water Quality sensor is used to chechk the quality of the water
LLR 4  |A Motor Driver shall be used to switch ON the motor.

### 2.3 SWOT ANALYSIS
![](/Project/6_ImagesAndVideos/S.W.O.T.png) 
   
## 3.BLOCK DIAGRAM & COMPONENT DESCRIPTION
### 3.1BLOCK DIAGRAM

![](/Project/6_ImagesAndVideos/Block%20Diagram.png)

###  3.2 Components Description
### Microcontroller
   Microcontroller is used to control the overall process in automating the refill of water into the tank.

## SENSORS
### Water level sensor
 Two water level sensors are used to detect the water level. One for detecting if the tank is empty and another one detecting the top level of the tank.

### Water Quality sensor
 A water quality sensor is used to check the sediments and excess chlorine in the water and alert the user.

## ACTUATORS
### Motor Driver Circuit
   Motor Driver circuit is used to switch on and off the based upon the signals received from the sensors.

### Buzzer
  A buzzer is used to alert the user once the tank is filled.

### LED’s
 Two LED’s are used to alert the user regarding the quality of the water.  
           *  RED – The water is impure.  
           *  GREEN – The water is pure.  

### Power Supply
   AC power supply is converted to DC and  given to the circuit in order to run it.
   
## 4.ARCHITECTURE
### 4.1 BEHAVIOURAL DIAGRAMS
#### 4.1.1 HIGH LEVEL BEHAVIOURAL DIAGRAM
![](/Project/6_ImagesAndVideos/High%20level%20Behavioural%20diagram.png)
#### 4.1.2 LOW LEVEL BEHAVIOURAL DIAGRAM
![](/Project/6_ImagesAndVideos/Low%20Level%20Behavioural%20Diagram.png)

### 4.2 STRUCTURAL DIAGRAMS
#### 4.2.1 HIGH LEVEL STRUCTURAL DIAGRAM
![](/Project/6_ImagesAndVideos/High%20Level%20Structural%20Diagram.png)
#### 4.2.2 LOW LEVEL STRUCTURAL DIAGRAM
!

## 5.APPLICATIONS
•	Houses  
•	Industries  
•	Schools  
•	Hospitals  
•	Commercial complexes  
  


