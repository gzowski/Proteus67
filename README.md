# Proteus67 - Ortholinear mechanical keyboard

* 67 Key ortholinear design, inspiration taken from the split design of the Sofle/Lily58 and Planck
* 33 keys per hand
* 1 Rotary encoder in the middle (Green)
* Additional column positioned each side down the centre. (Orange)
* Single microcontroller design while retaining characteristics of a split layout
* 133mm finger spacing while hands are at home positions (F/J keys) in a QWERTY layout. (Blue)
* More to add...

* Known Issue: Silkscreen (cosmetic) for K00 and K01 incorrect named K01, K02. (Key placements)

### [Parts](#Parts) || [Assembly Guide](#Assembly-Guide)

![PCB](https://github.com/gzowski/Proteus67/blob/main/Images/TopPlate.png?raw=true)

## Parts

| Part | Quantity     | Description                | 
| :-------- | :------- | :------------------------- |
| PCB Top Plate | 1 | Top plate for mounting MX switches |
| PCB Middle Plate | 1 | PCB with all solder points |
| Diodes| 67  | Through-hole 1N4148 or SMD 1N4148W |
| Microcontroller | 1 | 24 IO Pins required, Elite-C/Elite-Pi/Frood or similar |
| MX Switches | 66 | Cherry MX compatible switches |
| EC11 | 1 | Rotary Encoder for centre |
| MJTP1117 | 1 | Angled reset switch, (legs need cutting off) |
| Keycaps | 66 | 64x1u switches and 2x2u switches |
| Stabalizers | 2 | 2u plate mounted |

(Optional):
| Part | Quantity     | Description                |
| :-------- | :------- | :------------------------- |
| LED Strip | 1 | WS2812 Compatible (30cm) |
| 3D printed case | 1 | [3D printed case, STL/gcode](https://github.com/gzowski/Proteus67/tree/main/3D%20printed%20case) |
| PCB Base Plate | 1 | Bottom of case, covers underside |

## Assembly Guide

* Place both stabalizers into the top plate
* Insert all switches into the top plate and put to the side
* Diode installation: Must be on the rear of the board due to lack of clearance from stabalisers.
  * SMD mounting: Use smaller diode points marked below, ensure diodes are facing the correct orientation
  * Through-Hole mounting: Use the wider spacing through-holes, ensuring diodes are facing the correct orrientation.
    * Snip off excess on top side.
* Reset switch: snip off legs before positioning on board.
  *  Place switch on top side of PCB and solder from underside
* Microcontroller needs to be positioned with the top of the board facing upwards (Test controller beforehand and flash firmware using QMK)
* Place the rotary encoder on the top side and solder all points ensuring it stays flush to the board.
* Press down the top plate with switches and stabalisers down on the middle plate ensuring that all the switches sit flush against the middle plate.
* Turn board over and proceed to solder switches



