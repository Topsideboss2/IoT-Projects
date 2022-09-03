# Arduino 
This is a directory of my simple arduino projects. I will be constantly uploading new projects over time.
1. ***LCD***
This is a simple arduino LCD that prints what you tell it to. Used the LiquidCrystal library that is not difficult to implement. Main functions are:
```lcd.begin()```
```lcd.autoScroll()```
```lcd.leftToRight()```
```lcd.scrollDisplayLeft()```
```lcd.blink()```
```lcd.print()```
```lcd.setCursor()```
```lcd.clear()```
```lcd.begin()```
2. ***ParticleConcentrationLCD***
This is a simple arduino project that uses an LCD, an LED and an LDR to sense the percentage of particle concentration in the environment. This LED will emit light and as the light deflects off the surface of the particles it becomes scattered and the LDR will sense the amount of light that is able to reach it. The LCD will show the percentage of particle concentration in the environment. 
3. ***RGB LED***
This is a beginner arduino project that only requires an RGB LED and a resistor to work. The RGB LED is a special type of LED that has 4 nodes: 
> * Anode
> * Red 
> * Green
> * Blue
4. ***SmartStreetLight***
This is a simple smart street light arduino microcontroller project that uses an LED and LDR to switch light on during the night and switch it off during the day. Simple functions used are:
```pinMode()```
```map()```
```Serial.begin```
```void setup()```
```void loop()```
```digitalWrite()```
```analogRead()```
```Serial.print()```
```Serial.println()```
5. ***7-Segment Display***
This is a simple 7-segment display that has seven Light Emitting Diodes arranged in a rectangular manner. Each of the seven LEDs is called a segment because when illuminated the segment forms a numerical digit to be displayed. An additional 8th LED is sometimes used within the same package thus allowing the indication of a decimal point(DP). Two or more 7-segment displays are connected together to display numbers greater than ten
6. ***Motor-LED-LDR***
This is a simple arduino based project that involves an LDR and LED and a motor. This can be very useful to automate motors when dependent on light. i.e to water plants during the day. The LDR will act like a closed switch during the day and water the plants. This will also trigger an LED to indicate that the motor is running.
7. ***LED-brightness-control***
This is an arduino project that is both hardware and software controlled. The components used are potentiometer and LED. The potentiometer is used to vary the brightness of the LED.
