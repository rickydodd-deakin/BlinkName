// ********************
// Causes the LED located on pin D7 to blink the word "Ricky" (my first name) in morse code.
// Name : Ricky Dodd
// Student ID : 220010849
// Date : 16/03/2021
// ********************

int const DOT_LENGTH = 500; // How long a dot is on for, in milliseconds.
int const DASH_LENGTH = DOT_LENGTH * 3; // A dash is defined as three dots in length.

int led1 = D0; // Instead of referring to the led on pin D7, it'll simply be referred to as 'led'.
int led2 = D7;

// Procedure delays by the length of a dot times three (space between parts of a letter).
void letterGap() {
    delay(DASH_LENGTH);
}

// Procedure delays by the length of a dot times seven (space between words).
void wordGap() {
    delay(DOT_LENGTH * 7);
}

// Procedure makes the led blink for a dot length, and ensure a delay of a dot length to separate letters.
void dot() {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    
    delay(DOT_LENGTH);
    
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    
    delay(DOT_LENGTH); // Separating parts of a letter by one unit.
}

// Procedure makes the led blink for a dash length, and ensure a delay of a dot length to separate letters.
void dash() {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    
    delay(DASH_LENGTH);
    
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    
    delay(DOT_LENGTH); // Separating parts of a letter by one unit.
}

void setup() {
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
}

void loop() {
    // "R"
    dot();
    dash();
    dot();
    letterGap();
    
    // "i"
    dot();
    dot();
    letterGap();
    
    // "c"
    dash();
    dot();
    dash();
    dot();
    letterGap();
    
    // "k"
    dash();
    dot();
    dash();
    letterGap();
    
    // "y"
    dash();
    dot();
    dash();
    dash();
    
    wordGap();
}