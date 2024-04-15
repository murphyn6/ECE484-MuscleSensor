# ECE484-MuscleSensor
This goal of this project was to interface with a muscle sensor chip using avr. All code relevant to this project can be found in the musclesensor folder. To compile simply change the avr path and com in the compile script and run the compile script while in the musclesensor folder. Please refer to the included datasheet for information on setting up the muscle sensor. A video demo and important images can be found in the media folder.  
Pins:  
  LCD:  
    D4 --- 5  
    D5 --- 4  
    D6 --- 3  
    D7 --- 2  
    RS --- 12  
    RW --- 10  
    EN --- 11  
    VSS --- GND  
    VCC --- 5V  
    LED+ --- 5V  
    LED- --- GND   
      
  Sensor:  
    +Vs --- +Batteries  
    GND --- Batteries GND  
    -Vs --- -Batteries  
    SIG --- A0  
    GND --- GND  

  LED --- 7  
