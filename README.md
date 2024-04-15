# ECE484-MuscleSensor
This goal of this project was to interface with a muscle sensor chip using avr. All code relevant to this project can be found in the musclesensor folder. To compile simply change the avr path and com in the compile script and run the compile script while in the musclesensor folder. Please refer to the included datasheet for information on setting up the muscle sensor. A video demo and important images can be found in the media folder.  
## Wiki  
### What this Project Does  
The purpose of this project is to turn on an LED when the chosen muscle is flexed and To display the measured analog value when flexing on an lcd.(Note that when not flexed the lcd will display the last measured flexed value.)  
### How was this achieved  
There were a few steps that went into this project. First research on the chip was necessary to understand how it works and how to interface with it. Necessary information on the chip can be found on the data sheet and pins can be found below. After learning how to interface with the chip the first prototype was written in the Arduino IDE, this was achieved with very few issues and allowed fast progress. After this was the last step of the process, writing the program in C. The only necessary functions needed for writing this in C were analogRead() to measure the signal pin and digitalWrite() to turn the led on and off. All required setup and functions for the lcd was included in the lcd lab from earlier in the semester. Because both of these functions only need to be used once I simply wrote the code for them in the main loop. ADCSRA = ADCSRA | (1 << ADSC); for analogRead(), PORTD |= _BV(PORTD7); for turning the led on, and PORTD &= ~_BV(PORTD7); for turning the led off. Other than that the project was fairly straightforward.  

### Pins:  
  #### LCD:  
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
      
  #### Sensor:  
    +Vs --- +Batteries  
    GND --- Batteries GND  
    -Vs --- -Batteries  
    SIG --- A0  
    GND --- GND  

  #### LED:  
    + --- 7  
    - --- GND
