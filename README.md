# Paint Bubble End Effector
## Index
  - [Overview](#overview)
  - [Design & Development](#design--development)
  - [Parametric paintings + Vectorial drawings](#parametric-paintings--vectorial-drawings)
  - [Authors](#authors)

## MRAC01(24/25): Hardware_01 - Paint Bubble End Effector
The Hardware-I seminar explores different hardware tools for the purpose of making a custom end effector to be mounted on the robot flange. The objective of this end effector is to spill paint on a canvas.

## Overview
In our project, we aimed to control and precisely calibrate the smallest splash of paint possible by exploring one of the most delicate phenomena in physics: bubbles. Although the fragility of bubbles contrasts with the strength of a robotic arm, achieving delicacy requires precision and steadiness, qualities in which the robotic arm is also excellent.

![abb_endeffector](https://github.com/user-attachments/assets/2e33051b-0bbe-4f10-bc1e-0e9e37691b67)

We designed a device to blow bubbles, meticulously place them onto the canvas and pop them intentionally and with determination, repeating the process over and over until the anatomy of the bubbles emerged through the robot’s precise movements and its communication with the purpose-built end-effector.

![gifbubble1-1-min](https://github.com/user-attachments/assets/ec100f13-d1d7-4637-aefd-d35f38146181)

Lots of bubble tests, several iterations on the tool prototype and constant calibration in the programming, led to visual insights that taught us the physics of blown and popped bubbles.

![inkbubble_drawing3](https://github.com/user-attachments/assets/c70556ed-269e-4bac-9f8e-6f5b8c8dcf11)

## Design & Development

A bubble has mainly two creation requirements: a soapy water mix (in this case ink also added) and blown air.

Our end effector is designed with two electromechanical actuator systems that combined accomplish these requirements. A liquid supply system uses a peristaltic pump to bring one drop of mixture from a liquid tank to the end of an inflation tube. An inflation system uses a mini air pump to slowly inflate the drop an turn it into a bubble. Aswell, the end effector counts with a punch element to pop the bubble once it’s placed on the canvas when touching it from a desired angle. The ovearll device is mounted on the flange of the ABB IRB-140 robot.

![bubblemaker_plans2-2048x1173](https://github.com/user-attachments/assets/04265cbb-1377-43a7-b60f-561efdea2535)

The end effector underwent three iterations:
1. A relay-activated AC aquarium aerator pump is used to generate a low stable airflow. A peristaltic pump + h-bridge is used to pump the soapy ink mix.
2. The aquarium aerator is replaced with a smaller DC mini air pump, also connected to the same h-bridge as the peristaltic pump.
3. The elements are rearranged, reducing the size of the end effector.

![image-6](https://github.com/user-attachments/assets/260e7cf7-5a53-4854-ac22-fb7d278f7990)

Arduino is used together with an H-bridge to control the speed of both the peristaltic pump and the mini air pump, as both incorporate a DC motor. The Arduino communicated with the ABB control box through an optocoupler board.

![unnamed-16](https://github.com/user-attachments/assets/8cb2fb59-06c3-47bb-b267-12ba183ed20e)

The main programming logic of the Arduino is:
1. Peristaltic ON: 50ms (one drop of soapy ink is pumped)
2. Peristaltic OFF: 5s (to let the drop go all the way down to the tip of the inflation tube)
3. Air-pump ON: Xms (the duration defines the size of the bubble)
4. Air-pump OFF


## Parametric paintings + vectorial drawings

We made two paintings with their respective vectorial drawing. The paintings reflect the different anatomies of bubble splashes when popped, The vectorial drawings reflect the anatomy of our machine, showing the required movements and actuations needed to recreate the original painting.

Here in the first painting, bubbles splashes have different sizes and different number of mix drops. The X axis reflects incremental inflation time, while the Y axis shows an increment on the number of drops of mix added in the formation of the bubble.
![inkbubble_drawing1-2-2048x696](https://github.com/user-attachments/assets/ad9443e5-f014-41d5-b777-e7945ed04235)

In the second drawing, all bubbles have same size (same inflation time) and same amount of mix (same number of drops), yet here the painting reflects the angle where the punch tool touches the bubble in order to pop it, creating a directional splash.
![inkbubble_drawing2-2048x696](https://github.com/user-attachments/assets/e9a41471-9f64-4e9e-a9da-a0bdcc201522)

## Authors
  - [Javi Albo](https://github.com/j-albo) 
  - [Santosh](https://github.com/intellection-mrac) 


<!--  DO NOT REMOVE
-->
#### Acknowledgements
