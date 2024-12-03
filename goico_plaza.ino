#include <Wire.h> 
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x20, 16, 2);


#define ENTRY_BUTTON 1
#define EXIT_BUTTON 2
#define GREEN_LED 4
#define RED_LED 5


int totalSpaces = 10; 
int freeSpaces = 10;  

void setup() {

  pinMode(ENTRY_BUTTON, INPUT_PULLUP);
  pinMode(EXIT_BUTTON, INPUT_PULLUP);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  
  // Green LED ON initially
  digitalWrite(GREEN_LED, HIGH); 

  // Red LED OFF initially
  digitalWrite(RED_LED, LOW);   
  
  // Initialize LCD
  lcd.init();
  lcd.backlight();

  // Display welcome message
  lcd.setCursor(0, 0);

  lcd.print("Welcome to Goico");

  lcd.setCursor(0, 1);

  lcd.print("Parking System");
  delay(2000);
  
  lcd.setCursor(0, 0);

  lcd.print("Wlc to nicole'");
  lcd.setCursor(0, 1);

  lcd.print("s project");

  delay(3000); // Wait for 2 seconds to show the welcome message
  
  // Display the initial number of free spaces
  updateDisplay();

}

void loop() {

  // Entry Button Logic
  if (digitalRead(ENTRY_BUTTON) == LOW) {

    delay(200); // Debouncing

    if (freeSpaces > 0) {

      freeSpaces--;
      updateStatus(); // Update LEDs and display

    }
    
  }

  // Exit Button Logic lor reset button
  if (digitalRead(EXIT_BUTTON) == LOW) {

    delay(200); // Debouncing
    if (freeSpaces < totalSpaces) {
      freeSpaces++;
      updateStatus(); // Update LEDs and display

    }
  }
}

// Function to update LEDs based on free spaces
void updateLEDs() {

  if (freeSpaces == 0) {

    digitalWrite(GREEN_LED, LOW);  // No space available
    digitalWrite(RED_LED, HIGH);  // Red LED ON

  } else {

    digitalWrite(GREEN_LED, HIGH); // Space available
    digitalWrite(RED_LED, LOW);   // Red LED OFF
  }
}

// Function to update the LCD display
void updateDisplay() {

  lcd.clear(); // Clear the LCD screen
  lcd.setCursor(0, 0);
  lcd.print("Spaces Avail: ");
  lcd.print(freeSpaces); // Display the number of free spaces
  
  // Show parking status
  lcd.setCursor(0, 1);
  if (freeSpaces == 0) {
    lcd.print("Status: FULL");
  } else {
    lcd.print("Status: OPEN");
  }
}


// Function to update both LEDs and LCD
void updateStatus() {
  updateLEDs();    // Update LEDs based on free spaces
  updateDisplay(); // Update LCD with the current status
}