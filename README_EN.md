# AVTOKYO 2026 Hackable Board

no drink, no hack

[日本語](README.md)

A PCB inspired by the AVTOKYO pixel-art logo, made for building and experimenting. Wear it as a bare-board charm, add LEDs, or try your own circuits.

The assembly guide shows a simple example with two red LEDs. Add an ATtiny402 to program blinking patterns.

**Want to add LEDs? Start with the [basic assembly guide](docs/ASSEMBLY_EN.md).**

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

The schematic and PCB files were saved with KiCad 10. Download the complete repository before opening the project in `hardware`.

## Validation status

The manufacturing data passed DRC, including schematic parity checks, and ERC. Reports are included in `validation`. Final results for physical assembly and MCU programming on Rev M have not yet been recorded in this repository.

## Licensing and modifications

Building, modifying, redistributing, and selling are allowed under the applicable licenses. See the [license guide](docs/LICENSE_EN.md) and [logo usage terms](LOGO_POLICY.md). With its author’s agreement, the case STL uses CERN-OHL-P-2.0, the same license as the board.

The assembly guide is a minimal example, not a required configuration. Feel free to change LEDs, add components, or program an MCU to create your own patterns.
