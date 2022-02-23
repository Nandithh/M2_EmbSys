# SIMPLE EMBEDDED SYSTEM
## WATER HEATER
## BLOCK DIAGRAM:

![](/Case%20study/water%20heater.png)

## COMPONENTS:

### SENSOR-1:
•	Thermocouple sensor is used to check the temperature of the water.  
•	It is contact type sensor.  
•	Sends an alert if threshold is exceeded.  

### SENSOR-2:
•	LMK 382 sensor is used as water level sensor.   
•	It is submersible.    
•	Can withstand till 125degree celcius.   
•	Has a range of 3meters.   
•	Output signal:4-20mA.   

## ARM MICROCONTROLLER:

•	16 bit ARM7 micro controller.   
•	32kb RAM.   
•	512kb program flash.    
•	2x32 bit timers.      

## HEATING ELEMENT:

•	1000 W geyser is used as heating element.   
•	Material-Copper.    
•	Voltage-220V.    

## REQUIREMENTS
### HIGH LEVEL REQUIREMENTS:
|`      `**ID**|`   `**Description** |`         
| :- | :- | :- |
|`    `HLR 1|` `It shall heat water to the set temperature |
|`    `HLR 2|` `It shall cut off after the temperature is reached |
|`    `HLR 3|` `It shall alert the user through a buzzer when temperature is reached |
 

### LOW LEVEL REQUIREMENTS:
|`      `**ID**|`   `**Description** |`         
| :- | :- | :- |
|`    `LLR 1|` `A Geyser shall be used to heat water |
|`    `LLR 2|` `Thermistor shall be used to measure the temperature |
|`    `LLR 3|` `A buzzer shall be used to alert the user|

 

## APPLICATIONS:
* This system is used to hat water in domestic purposes.
* Industrial furnaces.


# COMPLEX EMBEDDEDSYSTEM
## SET TOP BOX

## BLOCK DIAGRAM
![](/Case%20study/Complex.png)

## COMPONENTS
### IR SENSOR:
•	IR sensor is used to receive inputs from the user.  
•	The users input is fed to the SoC processer for further process.  

### SMART CARD READER:
•	This is used to read a unique identification card provided to each subscriber.  
•	Through this card the user manages his accounts.  

### MICROPROCESSOR (SoC):
•	The microprocessor used here itself is a complex processor which also has sub co-processsors performing desired functionalities.  
•	It has its own RAM and memories inbuilt.  
•	There is Demux inside the Soc which is responsible for demultiplexing the input audio and video signals and sends them to modulater.  

### AUDIO VIDEO DEMODULATOR:
•	These are also co processors that is responsible for processing the signal into supporting formats and displaying to the user.  
•	It is programmable so that it supports all formats like MP3,MP4,MPEG,VC1 etc.,  
•	It also has DAC’s that converts the processed digital signal into analog signal and sends to display. 

## BROADCASTING SIGNAL:
•	The Broadcasting signal is received through a dish which is then fed to the set top box through cables.   

## REQUIREMENTS
### HIGH LEVEL REQUIREMENTS:
•	The main purpose of set top box is to process the broadcasted signals into desired audio, video signals and display the output.     
•	It also receives user inputs through IR sensor to change channels.  
•	It must have a smart reader to read the unique ID that is given to individual users.  
•	It must have decoders to decode the broadcasted signals.  

### LOW LEVEL REQUIREMENTS:
•	A System on Chip (SoC) processor is used to perform the desired process.  
•	Individual ports are given to receive the broad casted signals as well as send signals to the user interface.     
•	DAC’s and ADC’s are used desired places to convert the signals as per the need. 

## APPLICATIONS:
* It is used in television in houses.
* Broad casting connection.













