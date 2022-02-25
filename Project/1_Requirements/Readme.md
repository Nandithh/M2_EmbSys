
##  AUTOMATIC WATER TANK CONTROLLER

### INTRODUCION
  Automatic water tank controller is a system that shall be used to refill water tanks in houses and commercial buidings. This helps in elimination of manual monitoring and refilling of water tanks. The major advantages of the system is that it helps in automating tasks and also there is no wastage of water overflowing from tanks. The components used in the system is very simple which makes the product economically accessible as well. The overall system development phase is explained in this case study.
        


## REQUIREMENTS

### High Level Requirements:

ID     | Description
-------| -----------------------------------------
HLR 1  |To Refill the water tank automatically when tank becomes empty.
HLR 2  |Alert the user when the tank is filled.
HLR 3  |To measure the level of water.

### Low Level Requirements:


ID     | Description
-------| -----------------------------------------
LLR 1  |Atmega 328 controller is used for the controlling the process.
LLR 2  |Buzzer is used to alert the user.
LLR 3  |Water level sensor is used to detect the water level.
LLR 4  |A relay shall be used to switch ON the motor.

## Components Description

### Microcontroller
   Microcontroller is used to control the overall process in automating the refill of water ito the tank.

### Water level sensor
 Two water level sensors are used to detect the water level. One for detecting if the tank is empty and another one detecting the top level of the tank.

### Relay Circuit
   Relay circuit is used to switch on and off the relay based on the signals received from microcontroller.

### Buzzer
  A buzzer is used to alert the user once the tank is filled.

### Power Supply

AC Power supply is given to the circuit inorder to run it.
  

### Rectifier
  Rectifier is used to convert 230 V AC power supply into 5 V DC power supply. Since, microcontroller and DS 1307 are digital electronic devices they operate only in DC power supply.



## APPLICATIONS
•	Houses  
•	Industries  
•	Schools     
•	Hospitals     
•	Commercial complexes  
