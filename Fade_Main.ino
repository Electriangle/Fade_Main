#include "FastLED.h"

#define NUM_LEDS  150    // Enter the total number of LEDs on the strip
#define PIN       7      // The pin connected to Din to control the LEDs

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, PIN, GRB>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.setMaxPowerInVoltsAndMilliamps(5, 1500);    // Set power limit of LED strip to 5V, 1500mA
  FastLED.clear();                                    // Initialize all LEDs to "OFF"
}

void loop() {
  fadeAnimation(255, 255, 255);   // White
  fadeAnimation(255, 0, 0);       // Red
  fadeAnimation(255, 128, 0);     // Orange
  fadeAnimation(255, 255, 0);     // Yellow
  fadeAnimation(0, 255, 0);       // Green
  fadeAnimation(0, 0, 255);       // Blue
  fadeAnimation(128, 0, 255);     // Purple
  fadeAnimation(255, 128, 128);   // Pink
}
