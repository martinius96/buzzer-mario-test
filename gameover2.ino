
// Credit:
// Midi to Arduino Converter
//     - Andy Tran (extramaster), 2015
// https://www.extramaster.net/tools/midiToArduino/
//
// Process:
// Midi -> Midi tracks -> Note mappings -> Frequency
//
// CC0

// Set this to be the pin that your buzzer resides in. (Note that you can only have one buzzer actively using the PWM signal at a time).
int tonePin = 11;
void setup() {

}

void midi() {

    tone(tonePin, 195, 95.2380952381);
    delay(95.2380952381);
    tone(tonePin, 329, 23.8095238095);
    delay(23.8095238095);
    delay(261.904761905);
    delay(23.8095238095);
    delay(47.619047619);
    tone(tonePin, 164, 95.2380952381);
    delay(95.2380952381);
    tone(tonePin, 261, 23.8095238095);
    delay(23.8095238095);
    delay(285.714285714);
    delay(23.8095238095);
    delay(23.8095238095);
    tone(tonePin, 130, 238.095238095);
    delay(238.095238095);
    delay(23.8095238095);
    tone(tonePin, 329, 23.8095238095);
    delay(23.8095238095);
    delay(23.8095238095);
    delay(142.857142857);
    tone(tonePin, 440, 23.8095238095);
    delay(23.8095238095);
    tone(tonePin, 523, 95.2380952381);
    delay(95.2380952381);
    delay(23.8095238095);
    delay(71.4285714286);
    delay(47.619047619);
    delay(166.666666667);
    delay(23.8095238095);
    delay(285.714285714);
    delay(47.619047619);
    tone(tonePin, 1760, 238.095238095);
    delay(238.095238095);
    delay(23.8095238095);
    tone(tonePin, 466, 23.8095238095);
    delay(23.8095238095);
    tone(tonePin, 349, 23.8095238095);
    delay(23.8095238095);
    delay(238.095238095);
    delay(23.8095238095);
    delay(47.619047619);
    delay(95.2380952381);
    tone(tonePin, 329, 23.8095238095);
    delay(23.8095238095);
    delay(23.8095238095);
    delay(95.2380952381);
    tone(tonePin, 293, 23.8095238095);
    delay(23.8095238095);
    delay(47.619047619);
    tone(tonePin, 391, 285.714285714);
    delay(285.714285714);
    delay(23.8095238095);
    tone(tonePin, 1661, 214.285714286);
    delay(214.285714286);
    tone(tonePin, 391, 23.8095238095);
    delay(23.8095238095);
    tone(tonePin, 130, 23.8095238095);
    delay(23.8095238095);

}

void loop() {
    // Play midi
    midi();
}
