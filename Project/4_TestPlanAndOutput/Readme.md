# TEST PLAN:

## High Level Test:
|Test id |Description |Expected i/p |Expected o/p |Actuall o/p |Pass/Fail |            
|---- |---- |---- |---- |----|----|
|HLTP1 |Water level Sensor shall detect the level of water | Digital signal |Sensed |Sensed |✅|
|HLTP2 |Water quality Sensor shall sense the  quality of water | Analog signal | sensed |sensed |✅ |
|HLTP3 |Buzzer shall alert the user about quality |1 |beep | beep |✅ |
|HLTP4 |LED shall alert the user about the water level | 1 | glow | glow |✅ |

## Low Level Test Plan 
|Test id |Description |Expected i/p |Expected o/p |Actuall o/p |Pass/Fail |
|---- |---- |---- |---- |----|----|
|LLT1 |For simulation, water level sensor is replaced by push switch (Digital value) | Close the  bottom switch |Motor runs and red LED blinks |Motor runs and red LED blinks |✅ |
|LLT2 |For simulation, water quality sensor is replaced by potentiometer (Analog value) | change in value |Buzzer beeps|Buzzer beeps |✅ |
|LLT3 |In simulation, buzzer is used to alert about poor water quality | change in value |Buzzer beeps|Buzzer beeps |✅ |
|LLT2 |IN simulation, LED's are used to indicate the water level | switch is closed |LED blinks | LED blinks |✅ |
