# The Bottle Phone

**2023-12-24**

> 科技以人为本

An interactive object inspired by my first mobile phone, the Nokia 6300.

## Concept

This work is a personal memory of my first cell phone, the **Nokia 6300**, combined with references from some of my favorite things, including Tetris and the experience of social interaction.

The familiar form and sound of a phone are reconstructed into an unexpected object made from a softener bottle.

The work also plays with the relationship between technology and social behavior: a device designed to connect people can also become something that produces anxiety around interaction.

## Interaction

A microwave radar sensor detects movement around the object.

When motion is detected:

* the Nokia-inspired melody is played
* the green LED flashes

The interaction creates the familiar expectation of receiving a phone notification, but places it in an unfamiliar physical object.

```text id="8o2v2p"
Human movement
       ↓
Microwave radar sensor
       ↓
Motion detected
       ↓
Nokia-inspired sound
       +
LED flashing
```

## Technical Experiment

This project followed an earlier experiment using a PIR motion sensor.

The **RCWL-0516 microwave radar sensor** has an important advantage: it can detect movement through a non-metallic container without requiring direct exposure of the sensor.

Compared with the PIR sensor, it also has higher sensitivity and is not affected by sunlight in the same way.

This made it possible to completely enclose the sensing mechanism inside the recycled container.

## An Accidental Finnish Connection

While testing the sound, I initially used the wrong frequencies.

The resulting distorted version of the Nokia ringtone unexpectedly sounded like **“Maamme,” the Finnish national anthem**.

I found the accident interesting enough to keep as part of the story of the work.

## Hardware

* Arduino Uno
* RCWL-0516 microwave radar sensor
* Piezo buzzer 12mm
* Green 5mm LED
* Softener bottle
* Cell phone holder
* 9V battery and battery clip
* Jumper wires
* 22 AWG wires
* Electrical tape
* One-way perspective window film
* Key chains

## Location

A small track somewhere southwest of Korkalovaaran pallokenttä (Ball Field), Rovaniemi.

## Code

The Arduino source code is available here:

[`bottle_phone.ino`](./bottle_phone.ino)

The project uses the `toneAC` library for sound generation.

## Original Project

The original project documentation, images, and contextual writing are available on my portfolio:

https://fcd.cargo.site/p5
