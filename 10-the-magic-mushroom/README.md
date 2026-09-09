# The Magic Mushroom

**Date:** 2024-05-12

## Concept

An interactive felt “mushroom” that can make random beats.

For improvising performance.

The four keys can change tone from the coding by rewriting the frequency and duration.

The object turns a soft, handmade form into a small musical interface.

## Interaction

The mushroom has four touch-sensitive keys.

Touching each key triggers a different sound through a piezo buzzer.

Each key is assigned a different frequency and duration in the Arduino code, allowing the performer to change the sound by modifying the code itself.

The four keys can therefore be used as a simple interface for improvisation.

**Touch → sound → rhythm**

## Technical Experiment

This project explores **touch sensors as a musical input interface**.

Four touch sensors are connected to four separate piezo buzzers, with four LEDs providing visual feedback.

Each input has its own frequency and duration parameters in the code.

The physical object provides the interface, while the code determines the musical behavior.

## Hardware

* Arduino Uno
* 4 × touch sensors
* 4 × piezo buzzers
* 4 × LEDs
* Felt
* Wool
* Runebergintorttu cake box
* Wires
* Wire connectors
* Breadboard
* 9V battery

## Location

Woods near the lake, back of F-talo, University of Lapland

## Code

[`magic_mushroom.ino`](./magic_mushroom.ino)

The code is preserved from the original project.

## Original Project

The original project documentation and contextual writing are archived on Cargo:

https://fcd.cargo.site/p11
