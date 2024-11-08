void setup() {
    // Set all digital pins to OUTPUT
    for (int pin = 0; pin <= 53; pin++) {
        pinMode(pin, OUTPUT);
    }

    // Set all digital pins to LOW 
    for (int pin = 0; pin <= 53; pin++) {
        digitalWrite(pin, LOW);
    }
}

void loop() {
    // Turn all digital pins on
    for (int pin = 0; pin <= 53; pin++) {
        digitalWrite(pin, HIGH);
    }

    // Delay for 1 second
    delay(1000);

    // Turn all digital pins off
    for (int pin = 0; pin <= 53; pin++) {
        digitalWrite(pin, LOW);
    }

    // Delay for 1 second
    delay(1000);


}