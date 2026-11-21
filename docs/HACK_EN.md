# Adding a microcontroller

[日本語](HACK_JA.md) · [Project overview](../README_EN.md)

Start with a board that works in basic constant-light mode. This modification requires fine soldering, cutting copper links, and checks with a multimeter.

## Program the LEDs to blink

1. Remove the battery and disconnect the programmer.
2. Fit an ATTINY402-SSNR at U1 and a 0.22µF capacitor at C1. Align the pin 1 mark on U1 with the board's pin 1 position.
3. **Cut the thin copper link between pads 1 and 2** on both JP1 and JP2.
4. Use a multimeter to confirm that the direct 1–2 connections have been broken. LEDs going dark alone do not prove that the links are fully cut.
5. **Bridge pads 2 and 3 with solder** on both JP1 and JP2. Check that all three pads are not connected together.
6. Follow the [programming instructions](../firmware/README_EN.md) to upload the firmware.

The original 1–2 link connects the LED to GND for constant illumination. Pad 2 connects to the LED cathode and pad 3 to the MCU output. Joining 1–2–3 connects the MCU output directly to GND.

## Programming connector

| Badge terminal | Connect to |
|---|---|
| G | Programmer GND |
| V | Programmer 3.3V power output |
| U | Programmer UPDI |

Pin order varies between programmers. Match the labels rather than assuming the connectors have the same order. Remove the battery and power the board from the programmer while programming.

## LEDs and GPIO pins

| LED | MCU pin | Physical pin | Output that lights the LED |
|---|---|---:|---|
| D1 | PA1 | 4 | LOW |
| D2 | PA2 | 5 | LOW |
| D3 | PA6 | 2 | LOW |
| D4 | PA7 | 3 | LOW |

Looking at the back with the hook at the top, D3 and D4 have − on the left and + on the right. Fit R3 and R4 as well. The supplied blink example controls D1 and D2 only; add code to control D3 and D4.

The HACK port exposes VCC, GND, PWM1, PWM2, IO1, and IO2. TP1 connects to PA3. Check terminal positions in the schematic before wiring anything to these pads.

## Validation status

The Rev M schematic and PCB have passed consistency checks. Final results for programming and blinking on physical Rev M hardware have not yet been recorded in this repository.
