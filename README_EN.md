# AVTOKYO 2026 LED Charm

no drink, no hack

[日本語](README.md)

A DIY PCB charm for AVTOKYO. Solder the basic components to light up two red LEDs. Add an ATtiny402 to program blinking patterns.

**Start with the [assembly guide](docs/ASSEMBLY_EN.md).**

| Topic | File |
|---|---|
| Basic assembly | [Assembly guide](docs/ASSEMBLY_EN.md) |
| Required and optional parts | [Parts list](docs/PARTS_EN.md) |
| Adding a microcontroller | [Modification guide](docs/HACK_EN.md) |
| Programming and example firmware | [Firmware instructions](firmware/README_EN.md) |
| Ordering PCBs | [Manufacturing instructions](manufacturing/README_EN.md) |
| Final manufacturing files | [Rev M Gerber ZIP](manufacturing/AVTOKYO_LED_Charm_RevM_FINAL_JLCPCB.zip) |
| Editable board files | [KiCad PCB](hardware/AVTOKYO_LED_Charm.kicad_pcb) · [Schematic](hardware/AVTOKYO_LED_Charm.kicad_sch) |
| Optional rear cover | [Case instructions and STL](case/README_EN.md) |

These documents cover Rev M. The schematic and PCB files were saved with KiCad 10. Download the complete repository before opening the project in `hardware`.

## Validation status

The manufacturing data passed DRC, including schematic parity checks, and ERC. Reports are included in `validation`. Final results for physical assembly and MCU programming on Rev M have not yet been recorded in this repository.

## Licensing before public release

Before public release, decide on licenses for the hardware files, firmware, and documentation, and the terms for using the AVTOKYO logo.
