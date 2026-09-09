# The Traffic Light / Encounter

**2023-12-03**

An interactive installation exploring boundaries, crossing, distance, and reconnection.

## Concept

The installation was developed around the idea of reaching toward what is unreachable, crossing a boundary, becoming separated, and reconnecting.

A traffic light normally regulates movement through a shared physical space. Here, the traffic light responds directly to the movement of a person crossing between two sides of a boundary.

The installation was placed outside the Third Cemetery of Rovaniemi, creating a physical and conceptual relationship between the entrance, the surrounding space, and the idea of crossing between different states.

## Interaction

Two ultrasonic sensors detect movement on either side of the entrance.

* When entering from outside, the **green light** is triggered.
* When leaving from inside, the **red light** is triggered.

The installation therefore turns a person's movement across the entrance into a visible change of state.

```text
Outside
   ↓
Sensor 1 detects presence
   ↓
GREEN

        Boundary
   ────────────────
        ↓

Sensor 2 detects presence
   ↓
RED
   ↓
Inside
```

## Technical Experiment

This project uses two ultrasonic sensors to distinguish movement on opposite sides of a physical boundary.

The experiment explores how a simple sensing system can turn spatial relationships into an interactive rule:

**position → detection → state → signal**

The two sensors also create the possibility of treating an entrance not simply as a physical opening, but as an interactive threshold.

## Hardware

* Arduino Uno
* 2 × HC-SR04 ultrasonic distance sensors
* 2 × LEDs
* Jumper wires
* 9V battery and battery clip

## Installation

**Date:** 2023-11-30
**Location:** Outside the Third Cemetery of Rovaniemi (Rovaniemen III-hautausmaa)
**Format:** One-day pop-up installation

## Code

The Arduino source code is available here:

[`traffic_light.ino`](./traffic_light.ino)

## Original Project

The original project documentation, images, and contextual writing are available on my portfolio:

https://fcd.cargo.site/p3
