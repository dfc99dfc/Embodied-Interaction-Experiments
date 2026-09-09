# The Sponge Face

**2023-10-28**

An interactive object exploring the uncertainty of encountering strangers.

## Concept

After experiencing several unfriendly reactions from strangers on the street after moving to Finland, I became interested in the uncertainty of how one person may react to another.

When I talked about these experiences with others, the reactions were often either denial or sympathy. Neither response felt quite right to me. I was more interested in the uncertainty itself: when two strangers encounter each other, there is no way to know in advance how the other person will respond.

The prototype turns this uncertainty into a simple probabilistic interaction.

## Interaction

When someone approaches within **100 cm**, the system generates one of two possible reactions:

* **80% chance** → calm face, constant light, horizontal eyebrows
* **20% chance** → angry face, flashing light, raised eyebrows

The outcome remains unchanged while the detected distance stays relatively stable. A new outcome is generated when the detected distance changes significantly.

```text
Person approaches
       ↓
Ultrasonic distance sensing
       ↓
Distance < 100 cm?
       ↓
Generate probability
   ↙           ↘
80%             20%
Calm            Angry
↓               ↓
Servo + LED     Servo + LED
```

## Technical Experiment

The project uses an ultrasonic sensor to detect proximity and servo motors to physically change the expression of the object.

The interaction also introduces randomness into the system rather than making the response deterministic. This was intended to represent the uncertainty of social encounters.

## Hardware

* Arduino Uno
* HC-SR04 ultrasonic distance sensor
* 2 × SG90 servo motors
* 2 × LEDs
* Jumper wires
* 9V battery and battery clip

## Code

The Arduino source code is available here:

[`the_sponge_face.ino`](./the_sponge_face.ino)

## Original Project

The original project documentation, images, and contextual writing are available on my portfolio:

https://fcd.cargo.site/p2
