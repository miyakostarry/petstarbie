CATBIE (STARBIE)

A small digital pet that lives inside a cat-shaped case. It shows a pet on a screen and reacts when you move it, press it's buttons or touch it.

How it works╰(*°▽°*)╯

> An ESP32 board is the brain, It runs the pet program.
> A screen shows the pet.
> A gyro sensor feels when you tilt or shake the cat.
> Two buttons and a touch pad let you interact with it.
> A temperature sensor lets the pet react to the room.
> A rechargeable battery powers it. A charger module charges it over USB, and a power switch turns it on and off.

All the parts plug into sockets on a cat-shaped PCB (designed in KiCad). The board sits inside a 3D-printed cat shell.

 
 Parts  (≧∀≦)ゞ

- ESP32 DevKit V1 (30-pin)
- 1.8" ST7735 SPI TFT display
- MPU6050 (GY-521) gyro
- DHT11 module
- 2 tactile push buttons
- 2 resistors, 100 kΩ
- JST-PH battery connector
- 3.7 V LiPo battery
- TP4056 charger module
- MT3608 boost converter

## Bill of Materials (BOM) (｡•̀ᴗ-)✧

Here's the list of components used for CATBIE, along with their estimated prices and suppliers. Prices may vary depending on availability and shipping.

| Component                                    |   Quantity | Supplier     | Cost per Item (USD) | Total Cost (USD) | Link                                                                                               |
| -------------------------------------------- | ---------: | ------------ | ------------------: | ---------------: | -------------------------------------------------------------------------------------------------- |
| ESP32 DevKit V1 (30-pin)                     |          1 | Amazon India |               $5.60 |            $5.60 | [View product](https://www.amazon.in/SP-ELECTRON-ESP32-Development-ESP32-WROOM-32/dp/B0HD7QC26L/)  |
| MPU6050 (GY-521)                             |          1 | Amazon India |               $3.40 |            $3.40 | [View product](https://www.amazon.in/dp/B07H3XH1TB)                                                |
| 1.8" ST7735 SPI TFT Display                  |          1 | Robu.in      |               $3.50 |            $3.50 | [View product](https://robu.in/product/1-8-inch-spi-128160-tft-lcd-display-module-pcb-arduino/)    |
| DHT11 Temperature and Humidity Sensor Module |          1 | Robu.in      |               $0.56 |            $0.56 | [View product](https://robu.in/product/dht11-digital-relative-humidity-temperature-sensor-module/) |
| Tactile Push Button                          |          1 | Robu.in      |               $0.25 |            $0.25 | [View product](https://robu.in/product/6x6x5-tactile-push-button-switch/)                          |
| 100 kΩ Resistor                              |          2 | Robu.in      |               $0.20 |            $0.40 | [View product](https://robu.in/product/100k-ohm-0-5w-metal-film-resistor-pack-of-50/)              |
| 3.7 V, 500 mAh LiPo Battery with JST-PH      |          1 | Amazon India |   $3.00 (estimated) |            $3.00 | [Search products](https://www.amazon.in/s?k=3.7V+500mAh+lipo+battery+JST+PH)                       |
| TP4056 USB-C Charger Module with Protection  |          1 | Amazon India |               $1.00 |            $1.00 | [View product](https://www.amazon.in/UNIVERSAL-HUB-TP4056-Overcharge-Protection/dp/B0FVLYQBKC/)    |
| MT3608 Boost Converter                       |          1 | Amazon India |               $1.40 |            $1.40 | [View product](https://www.amazon.in/Hexonix-Voltage-Booster-Adjustable-Converter/dp/B0HDP881HN/)  |
| Custom PCB                                   |          1 | JLCPCB       |   $5.20 (estimated) |            $5.20 | [JLCPCB](https://jlcpcb.com/)                                                                      |
| Estimated Shipping                           | 1 shipment | JLCPCB       |                   — |            $9.83 | —                                                                                                  |

### Estimated Project Cost

| Category              | Estimated Cost (USD) |
| --------------------- | -------------------: |
| Electronic components |               $19.11 |
| Custom PCB            |                $5.20 |
| Estimated shipping    |                $9.83 |
| **Estimated Total**   |           **$34.14** |

> **Note:** These are estimated prices, not a confirmed final bill. Shipping, taxes, customs charges, and component prices may change. The battery price is approximate because different sellers offer different options.




AI help is taken to understand how connections and components work and also help taken from people in how to use kiCAD and one of my friend helped me picking up the components to use so yeah he helped alot 
another thing i want to add that my friend created the structure shell for my catbie/neckobie in blender but i'm having trouble opening the fbx file in blender so i couldn't post the image of it 

<img width="943" height="766" alt="image" src="https://github.com/user-attachments/assets/b3e65bef-c7fc-443e-8bfb-dae475dae987" />

<img width="968" height="867" alt="Screenshot 2026-10-11 183441" src="https://github.com/user-attachments/assets/f612e2aa-7574-4bb1-9eba-870210f532d2" />
<img width="567" height="575" alt="Screenshot 2026-10-11 181348" src="https://github.com/user-attachments/assets/5da05f58-78e5-4cb3-b713-7ffbaebaea1e" />
