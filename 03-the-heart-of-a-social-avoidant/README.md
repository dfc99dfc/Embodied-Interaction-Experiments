# The Heart of a Social Avoidant

**2023-12-18**

An interactive installation visualizing the physical feeling of social avoidance.

> 你数过天上的星星吗？它们和小鸟一样，总在我胸口跳伞。
>
> ——毕赣

## Concept

This work visualizes the feeling that whenever I have to talk to people, my heart clenches.

Although the object may look more like a stomach, that also felt appropriate: social interaction can produce strange physical sensations throughout the body.

Rather than representing the feeling through an image alone, the installation translates the presence of another person into physical movement and light.

## Interaction

A PIR motion sensor detects movement around the installation.

When motion is detected:

* the servo motor moves
* the red LED turns on

When no motion is detected:

* the servo returns to its opposite position
* the LED turns off

```text id="k0xk7a"
Human movement
       ↓
PIR motion sensor
       ↓
Motion detected?
   ↙           ↘
 YES            NO
 ↓              ↓
Servo + LED     Servo + LED
```

## Technical Experiment

This project was also an experiment comparing different sensing methods.

Previous works used an **HC-SR04 ultrasonic sensor** to detect the presence or distance of people. Here, a **PIR (passive infrared) sensor** was used instead to explore whether a simpler motion-based input would be more suitable for this type of interaction.

The system therefore reduces the interaction from measuring distance to detecting movement itself:

**movement → detection → physical response**

## Hardware

* Arduino Uno
* PIR motion sensor AM312
* SG90 servo motor
* Red 5mm LED
* Jumper wires
* 9V battery and battery clip
* Red threads
* Snap fasteners
* Kinesiotherapy tape
* One-way perspective window film
* Cell phone holder

## Installation

**Location:** Small track southwest of Ruokolammen päiväkoti (Daycare Center), Rovaniemi

## Code

The Arduino source code is available here:

[`heart_of_a_social_avoidant.ino`](./heart_of_a_social_avoidant.ino)

## Original Project

The original project documentation, images, and contextual writing are available on my portfolio:

https://fcd.cargo.site/p4
