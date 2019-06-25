
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
int tonePin = 8;
void setup() {

}

void midi() {

    tone(tonePin, 195, 71.4285714286);
    delay(79.3650793651);
    tone(tonePin, 329, 17.8571428571);
    delay(19.8412698413);
    delay(218.253968254);
    delay(19.8412698413);
    delay(39.6825396825);
    tone(tonePin, 164, 71.4285714286);
    delay(79.3650793651);
    tone(tonePin, 261, 17.8571428571);
    delay(19.8412698413);
    delay(238.095238095);
    delay(19.8412698413);
    delay(19.8412698413);
    tone(tonePin, 130, 178.571428571);
    delay(198.412698413);
    delay(19.8412698413);
    tone(tonePin, 329, 17.8571428571);
    delay(19.8412698413);
    delay(19.8412698413);
    delay(119.047619048);
    tone(tonePin, 440, 17.8571428571);
    delay(19.8412698413);
    tone(tonePin, 523, 71.4285714286);
    delay(79.3650793651);
    delay(19.8412698413);
    delay(59.5238095238);
    delay(39.6825396825);
    delay(138.888888889);
    delay(19.8412698413);
    delay(238.095238095);
    delay(39.6825396825);
    tone(tonePin, 1760, 178.571428571);
    delay(198.412698413);
    delay(19.8412698413);
    tone(tonePin, 466, 17.8571428571);
    delay(19.8412698413);
    tone(tonePin, 349, 17.8571428571);
    delay(19.8412698413);
    delay(198.412698413);
    delay(19.8412698413);
    delay(39.6825396825);
    delay(79.3650793651);
    tone(tonePin, 329, 17.8571428571);
    delay(19.8412698413);
    delay(19.8412698413);
    delay(79.3650793651);
    tone(tonePin, 293, 17.8571428571);
    delay(19.8412698413);
    delay(39.6825396825);
    tone(tonePin, 391, 214.285714286);
    delay(238.095238095);
    delay(19.8412698413);
    tone(tonePin, 1661, 160.714285714);
    delay(178.571428571);
    tone(tonePin, 391, 17.8571428571);
    delay(19.8412698413);
    tone(tonePin, 130, 17.8571428571);
    delay(19.8412698413);

}

void loop() {
    // Play midi
    midi();
}

