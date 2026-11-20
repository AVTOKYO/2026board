# Manufacturing files — Rev M

[日本語](README.md) · [Project overview](../README_EN.md)

Upload [AVTOKYO_LED_Charm_RevM_FINAL_JLCPCB.zip](AVTOKYO_LED_Charm_RevM_FINAL_JLCPCB.zip) to JLCPCB. It contains seven Gerber files for copper, solder mask, silkscreen, and board outline, plus two drill files for plated and non-plated holes.

## Order specifications

| Item | Setting |
|---|---|
| Material and layers | FR-4, 2 layers |
| Maximum outline dimensions | 70 × 78.5mm |
| Thickness | 1.6mm |
| Solder mask and silkscreen | Black and white |
| Surface finish | Lead-free HASL |
| Outer copper weight | 1oz |
| Delivery format | Individual boards, no panelization |
| Via treatment | Tented vias |
| Outline tolerance | Standard ±0.2mm |
| Electrical test | Flying probe, full test |

## Serial numbers

The 10 × 2mm solid white area at the lower right on the back is reserved for numbers added during manufacturing.

The project's recorded order settings are:

- Under PCB marking, select `2D Barcode (Serial Number)`.
- Select `Number only` and `Specify Position`.
- Set the starting number to `0001`, set `Unique Number` to `Remove`, and leave the prefix blank.
- Enable production-file confirmation and check that the number is placed at the lower right on the back.

Manufacturing may result in gaps in the numbering. Check the starting number when reordering. If the numbering service is not selected, the reserved white area may be printed as-is. Check the supplier's current options against its [PCB marking instructions](https://jlcpcb.com/help/article/how-to-mark-on-pcb).

## Changes and checks

Rev M has a 0.8mm gap between jumper pads 1 and 2, connected by a 0.2mm-wide copper link. The gap between pads 2 and 3 is 0.3mm. Right-angle outline corners are rounded with a 0.5mm radius.

R1/R2 labels, D3/D4 polarity, and `no drink, no hack` are printed on the back.

The manufacturing ZIP was generated on 2026-11-05. Use [SHA256SUMS](SHA256SUMS) to verify the file. DRC and ERC reports are in [validation](../validation/).
