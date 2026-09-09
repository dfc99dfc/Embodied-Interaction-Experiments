# The Grip

**Date:** 2024-01-01

> 把手握紧，里面什么也没有
>
> 把手松开，你拥有的是一切
>
> ——《卧虎藏龙》
>
> Grip your hand, you got nothing inside
>
> Release your grip, everything is in your hand
>
> – Crouching Tiger, Hidden Dragon

## Concept

An interactive object about holding and letting go.

The physical form combines candle wax, a softener bottle, sensors, and light to create a soft, semi-transparent material.

> Made some SSS (subsurface scattering) material in real life🤣

## Interaction

The object responds to two types of input:

* **Touch** — touching the object turns on the blue LED.
* **Movement / presence** — the microwave sensor triggers a short light pattern when movement is detected nearby.

The interaction connects physical contact with the idea of grip, while the surrounding movement produces another layer of response.

## Technical Experiment

This project continued my exploration of different sensing methods.

The **TTP223 touch sensor** detects direct physical contact, while the **RCWL-0516 microwave radar sensor** detects movement without requiring physical contact.

The project therefore combines:

**Touch → direct physical response**

**Movement → indirect physical response**

The same object can react both when it is touched and when someone moves around it.

## Hardware

* Arduino Uno
* TTP223 touch sensor
* RCWL-0516 microwave radar sensor
* Blue 5mm LED
* Candle wax
* Softener bottle
* 22 AWG wires
* Wire connectors
* Jumper wires
* 9V battery
* Battery clip

## Location

Tievapuiston leikkipaikka, back of DAS I

## Code

[`the_grip.ino`](./the_grip.ino)

The code is preserved from the original project.

## Original Project

The original project documentation and context are archived on Cargo:

https://fcd.cargo.site/p6
