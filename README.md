4
Session 3 : 
Practical 
Overview: The goal is to improve the car parking system at GOICO Plaza in Musanze by integrating an 
embedded system and IoT solution. This system will help monitor the availability of parking spaces, control the 
entry and exit of vehicles, and visually display parking status using LEDs and an LCD display. By using a 
Proteus simulator, the system will simulate the management of free and occupied spaces in the parking lot with 
the following functionalities:
System Features:
1. Entrance Display: a) LCD Display will show the number of free spaces out of total spaces in the 
parking lot.
b) If there are no available spaces, a Red LED will light up, indicating that no space is available.
2. Push Buttons (Sensors for Car Entry/Exit): Pushbutton 1: Simulates the entry of a car. When pressed, 
it will decrement the number of free spaces and increment the total number of parked cars.
 Pushbutton 2: Simulates the exit of a car. When pressed, it will increment the number of free spaces and 
decrement the total number of parked cars.
3. LED Indicators: A Red LED will light up when there are no available parking spaces.
4. Parking Management Logic: If Pushbutton 1 is pressed (indicating a car entering the parking lot), the 
free spaces will decrease by one, and the number of cars inside will increase by one.
 If Pushbutton 2 is pressed (indicating a car leaving the parking lot), the free spaces will increase by one, 
and the number of cars inside will decrease by one.
Task : By using Proteus implement the above logic 
Good Luck !!!!!!
5
Check list 
Criteria Description Expected Outcome
Microcontroller 
Configuration
Choose an ATmega328P or 
similar microcontroller in Proteus 
and connect it to the required 
peripherals (LCD, LEDs, and 
pushbuttons).
The microcontroller is successfully 
configured and interfaces with the 
LCD, LEDs, and pushbuttons.
 / 6
Pushbutton 
Setup
Place two pushbuttons in the 
schematic:
Pushbutton 1 simulates the car 
entering the parking lot 
(decrements free spaces).
When pressed, Pushbutton 1
decreases the number of free spaces 
and increases the number of parked 
cars.
 /4
Pushbutton 2 simulates the car 
exiting the parking lot (increments 
free spaces).
When pressed, Pushbutton 2
increases the number of free spaces 
and decreases the number of parked 
cars.
/4
LCD Setup
Connect an LCD to the 
microcontroller to display the 
available free spaces and the 
number of parked cars. Use 
standard LCD commands.
The LCD displays the correct 
number of free spaces and total 
parked cars in real-time.
/6
LED Indicators
Connect a Green LED and Red 
LED to indicate the parking status 
(available or full).
The Red LED lights up when no 
parking spaces are available, and 
the Green LED lights up when 
spaces are available.
/4
Code 
Implementation
Write code for the microcontroller 
with the following functionalities:
Button Debouncing to prevent 
multiple triggers from a single 
button press.
Buttons respond correctly, and there 
are no multiple triggers for a single 
press.
/2
Display the free spaces and 
parked cars on the LCD.
The LCD displays the correct 
values for free spaces and parked 
cars at all times.
/2
Control the LEDs based on 
parking space availability.
The Red LED turns on when no 
spaces are available, and the Green 
LED turns on when there are 
available spaces.
/2
6
 
Part 2 Arduino physical implementation
Implement the given scenario , by using two push buttons 
One or entrance and other for outgoing , if there is not space available the Red led becomes on. No LCD to 
display the current count , oncly the Red Led Will be on to show that there is no free space available . 
