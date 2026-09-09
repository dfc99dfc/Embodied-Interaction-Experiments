# Extinguish

**Date:** 2024-01-04

## Concept

> extract warm to bury in cold
> the best way to deal with emotions
> all kinds

An interactive object about extracting warmth and burying it in cold.

Temperature becomes the input for a sequence of changing light responses.

## Interaction

The object uses a temperature sensor to detect the surrounding temperature.

The measured temperature is mapped to LED brightness and timing:

**Temperature → brightness → interval → light sequence**

As the temperature value changes, the LEDs respond with different brightness levels and delays.

## Technical Experiment

This project explores the **DS18B20 temperature sensor** as an input for physical interaction.

Instead of simply displaying a temperature value, the sensor data is translated into the behavior of the object.

The measured temperature is mapped to a brightness range and then used to control the timing between sequential LED responses.

This creates a physical translation from an environmental value into light and movement-like rhythm.

## Hardware

* Arduino Uno
* DS18B20 temperature sensor
* 4.7kΩ resistor
* 5 × LEDs
* Old hand shower (partly)
* Plastic bottle plate
* Breadboard
* Jumper wires
* 22 AWG wires
* 9V battery
* Battery clip
* One-way perspective window film
* Key chains

## Location

DAS V

## Code

[`extinguish.ino`](./extinguish.ino)

The code is preserved from the original project.

## Original Project

The original project documentation and context are archived on Cargo:

https://fcd.cargo.site/p7
