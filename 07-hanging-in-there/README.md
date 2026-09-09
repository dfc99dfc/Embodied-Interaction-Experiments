# Hanging in There

**Date:** 2024-01-21

> “Death is not the opposite of life but an innate part of it.”
> — Haruki Murakami, *Norwegian Wood*
>
> “… things have their origin, … also their destruction happens, … for they give to each other justice and recompense for their injustice”
> — Anaximander

## Concept

> **Hanging in there**

The phrase carries a double meaning.

On the surface, it describes the familiar act of trying to endure: *hanging in there*.

At a deeper level, the work explores depression and suicidal intention, and the proximity between **holding on** and **letting go**.

The object is activated through physical pressure applied by my own body during the performance.

## Performance

The performance takes place in the space where a dishwasher was supposed to be.

I kneel inside the large opening and hold the interactive device above me with both hands. I place my chin on the device and apply pressure to the flex sensor through my body.

When the pressure is released, the object responds.

The physical configuration of the body and the device creates an image resembling **hanging**.

The action therefore moves between two readings:

**holding on / letting go**

**enduring / giving up**

**“Hanging in there” / hanging**

The ambiguity is intentional.

## Interaction

When the flex sensor is bent, the servo motor is triggered to rotate the OLED display.

The display changes from:

**“Hanging in there”**

to:

**“LOADED!”**

The real-time stress value is also mapped to the rotation of the servo.

The physical pressure applied to the object therefore becomes both a measurable value and a visible bodily response.

**Pressure → stress value → display + rotation**

## Technical Experiment

This project explores the **flex sensor** as an input for translating physical deformation into interaction.

The bending of the sensor produces a changing value. That value controls both the OLED display and the rotation of the servo motor.

Rather than treating the sensor only as a technical input, the performance uses the sensor as part of the physical relationship between **body, pressure, object, and response**.

The electronic system becomes part of the gesture.

## Hardware

* Arduino Uno
* Flex sensor ZD10-100
* 10kΩ resistor
* OLED 128×32
* Servo motor SG90
* Heat shrink tape
* Adhesive cloth tape
* Jumper wires
* 9V battery
* Cell phone holder
* One-way perspective window film
* Key chains

## Location

Where suppose to be a dishwasher

## Code

[`hanging_in_there.ino`](./hanging_in_there.ino)

The code is preserved from the original project.

## Original Project

The original project documentation and contextual writing are archived on Cargo:

https://fcd.cargo.site/p8
