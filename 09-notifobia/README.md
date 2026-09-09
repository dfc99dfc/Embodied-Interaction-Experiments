# Notifobia

**Date:** 2024-04-17

## Concept

> To visualize a phobia for ig notification
> CPTSD traced back long time
> Visualizing it as a CBT

An interactive object for visualizing a fear response to notifications.

The project attempts to make an otherwise invisible reaction physical: a notification arrives, the object responds, and the response becomes part of the interaction.

## Interaction

A touch sensor is used as the input signal.

When the sensor is triggered, a servo motor moves to one position. When the signal stops, the servo returns to another position.

The physical movement creates a simple cause-and-effect relationship:

**Trigger → reaction**

The original intention was to use the vibration of the bell itself as the input, but a piezoelectric sensor was not available at the time.

> Should use a Piezoelectric sensor or such to detect the vibration of the bell ringing as the input signal, but ain’t got any at hand, have to compromise with a touch sensor

## Technical Experiment

The project experiments with using physical movement to represent a notification-related reaction.

The intended input was vibration from the ringing bell. In the final prototype, a **TTP223 touch sensor** was used instead as a technical compromise.

The touch signal controls an **MG996R servo motor**, turning the detected input into a large physical movement.

**Input signal → Arduino → servo movement**

## Hardware

* Arduino Uno
* TTP223 touch sensor
* MG996R servo motor
* Broken bike bell
* Broken reflector
* Maissi can
* Hair elastics
* Gummibärchen
* Broken glass shreds
* Fishing wire
* Coca-Cola bottle
* Steel plate
* Plastic sheet
* Angle irons
* Screws and nuts
* Plastic straw
* Breadboard
* Jumper wires
* 9V battery
* One-way perspective window film
* Key chains
* Hair ties

## Location

Ice near the shore of Ounaspaviljongin laavu

## Code

[`notifobia.ino`](./notifobia.ino)

The code is preserved from the original project.

## Original Project

The original project documentation and contextual writing are archived on Cargo:

https://fcd.cargo.site/p10
