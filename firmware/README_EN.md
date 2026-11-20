# ATtiny402 slow blink — initial operation check

[日本語](README_JA.md) · [Project overview](../README_EN.md)

Open [AVTOKYO_SlowBlink.ino](AVTOKYO_SlowBlink/AVTOKYO_SlowBlink.ino) in Arduino IDE.

Both LEDs turn on for one second, then off for two seconds. Change `ON_MS` and `OFF_MS` to adjust the timing. This example provides a clear ON/OFF test; fading and low-power sleep are not implemented.

The LEDs are active LOW: D1 = PA1 (physical pin 4), D2 = PA2 (physical pin 5). Rev M uses these same connections.

## Preparation

- Fit the ATtiny402, C1 (0.22µF), two LEDs, and a 1kΩ resistor for each LED.
- Remove the battery. Cut the 1–2 links on JP1 and JP2, verify the cuts with a multimeter, and bridge 2–3.
- LEDs going dark alone do not prove the links are cut. Also check for solder bridges between adjacent U1 pins.
- Use a USB-UPDI programmer that supports 3.3V target power and signal levels.
- The SWD interface of an STM32 ST-LINK is not UPDI-compatible. Do not connect it directly to G/V/U.
- A USB-to-serial adapter can be used with a suitable SerialUPDI circuit. Do not connect its TX/RX directly to G/V/U.

## Connections

Remove the battery and set SW1 to OFF. Supply power only from the programmer.

| Badge terminal | Programmer connection |
|---|---|
| G | GND |
| V | 3.3V target power **output**, not a VTref input |
| U | UPDI |

Verify the programmer's voltage; do not assume a 5V output is 3.3V. V connects to the supply after the switch, so the programmer powers the MCU and LEDs even with SW1 OFF. Power capabilities and terminal order depend on the programmer; check its labels.

## Arduino IDE and megaTinyCore

These instructions describe the project's existing Arduino IDE/megaTinyCore setup. Menu wording may differ between versions.

1. Add this URL to **Additional Boards Manager URLs** in Preferences:

   ```text
   https://raw.githubusercontent.com/SpenceKonde/ReleaseScripts/refs/heads/master/package_drazzy.com_index.json
   ```

2. Install **megaTinyCore** using Boards Manager.
3. Choose the board family containing ATtiny402, such as **ATtiny412/402/212/202**, then set **Chip** to **ATtiny402**.
4. Select the **5MHz internal clock**, leave `millis()/micros()` enabled (default), and keep the UPDI pin configured as UPDI. BOD is Disabled for this battery-powered prototype setup. Do not use Optiboot.
5. For a SerialUPDI-compatible programmer, select the slow **SerialUPDI** setting and its serial port. For other UPDI programmers, select the matching programmer entry.
6. On first use, run **Burn Bootloader** to apply the fuse settings. This setup does not use a bootloader program; the command is used to configure the fuses. Do not change UPDI to GPIO or RESET.
7. Run **Verify** to compile, then **Upload Using Programmer**.
8. After successful programming and verification, disconnect the programmer, insert the CR2032, and turn SW1 ON. Both eyes should turn on for one second and off for two seconds.

## Validation status

The connections have been checked against the project circuit and megaTinyCore pin definitions. Final results for programming and blinking on physical Rev M hardware have not yet been recorded. The manufacturing Gerbers have not been changed.

## References

- [megaTinyCore](https://github.com/SpenceKonde/megaTinyCore)
- [ATtiny x02 family](https://github.com/SpenceKonde/megaTinyCore/blob/master/megaavr/extras/ATtiny_x02.md)
- [Pin definitions](https://github.com/SpenceKonde/megaTinyCore/blob/master/megaavr/variants/txy2/pins_arduino.h)
- [UPDI guidance](https://github.com/SpenceKonde/AVR-Guidance/blob/master/UPDI/jtag2updi.md)
