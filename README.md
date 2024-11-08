# Arduino-blink-all-pin
Blink all pins at once (for testing purpose).

To test the functionality of the Arduino board pinouts, I developed a set of basic sketches for models like the Uno and Mega 2560. Despite extensive searches for a straightforward solution, no existing method proved effective. These scripts are intended to provide a simple way to verify pin operability. Additional sketches for other models will follow as time permits. This approach may prove useful for others as well.

The code is implemented in simpliest way, just using loop and basic function. In the other model, just modify the loop depends on the maximum number of digital pin on the board.
```c++
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

```
