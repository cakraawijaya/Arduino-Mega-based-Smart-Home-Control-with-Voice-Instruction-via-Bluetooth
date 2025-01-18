[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?logo=github&color=%23F7DF1E)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/cakraawijaya/Arduino-Mega-based-Smart-Home-Control-with-Voice-Instruction-via-Bluetooth?logo=Codeforces&logoColor=white&color=%23F7DF1E)
![Project](https://img.shields.io/badge/Project-Arduino-light.svg?style=flat&logo=arduino&logoColor=white&color=%23F7DF1E)
![Type](https://img.shields.io/badge/Type-Personal%20Experiment-light.svg?style=flat&logo=gitbook&logoColor=white&color=%23F7DF1E)

# Arduino-Mega-based-Smart-Home-Control-with-Voice-Instruction-via-Bluetooth
Houses in Indonesia today generally have not implemented high-level technology, so to turn off or turn on the device it must be done manually. This is clearly inefficient (waste of time and energy). Therefore, this project was created to make it easier for users to condition the device (on/off). This project has been implemented and took approximately 3 days. This system is equipped with bluetooth, which allows users to control devices by voice. In this case, the devices include: alarms, fans, lights, and screens. UART communication protocol is used as a medium for data exchange between Bluetooth and Arduino Mega board. While the type of UART used is Hardware Serial. The benefit of making this project is none other than to add insight. The results of this research show that the smart home prototype can function properly.

<br><br>

## Project Requirements
| Part | Description |
| --- | --- |
| Development Board | Arduino Mega 2560 |
| Code Editor | Arduino IDE |
| Application Support | Bluetooth Voice |
| Driver | CH340 USB Driver |
| Communications Protocol | • Inter Integrated Circuit (I2C)<br>• Universal Asynchronous Receiver-Transmitter (UART) |
| Programming Language | C/C++ |
| Actuators | • Fan DC 5V (x1)<br>• LED (x1)<br>• Piezoelectric (x1) |
| Sensor | JDY-31 SPP-C: Bluetooth Module (x1) |
| Display | LCD I2C (x1) |
| Other Components | • USB type B cable - USB type A (x1)<br>• Jumper cable (1 set)<br>• Adaptor DC 5V (x1)<br>• Breadboard (x1) |

<br><br>

## Download & Install
1. Arduino IDE

   <table><tr><td width="810">

   ```
   https://bit.ly/ArduinoIDE_Installer
   ```

   </td></tr></table><br>
   
2. CH340 USB Driver

   <table><tr><td width="810">

   ```
   https://bit.ly/CH340_USBdriver
   ```

   </td></tr></table>
   
<br><br>

## Project Designs
<table>
<tr>
<th width="420">Block Diagram</th>
<th width="420">Pictorial Diagram</th>
</tr>
<tr>
<td><img src="Assets/Documentation/Diagram/Block Diagram.jpg" alt="block-diagram"></td>
<td><img src="Assets/Documentation/Diagram/Pictorial Diagram.jpg" alt="pictorial-diagram"></td>
</tr>
</table>
<table>
<tr>
<th width="840">Wiring</th>
</tr>
<tr>
<td><img width="840" src="Assets/Documentation/Table/Device Wiring.jpg" alt="wiring"></td>
</tr>
</table>

<br><br>

## Basic Knowledge
Basically, a device can be communicated with other devices either wirelessly or by cable. Communication between commonly used hardware is ``` Serial Communication ```. It can be known that there are three types of ``` Serial Communication ```, which include: ``` UART (Universal Asynchronous Receiver-Transmitter) ```, ``` SPI (Serial Peripheral Interface) ```, and ``` I2C (Inter Integrated Circuit) ```. There are two kinds of ``` UART Serial Communication ```, namely ``` Hardware Serial ``` and ``` Software Serial ```. ``` Hardware serial communication ``` can be done by connecting the ``` TX ``` and ``` RX ``` pins ``` crosswise ``` on each development board, for example: ``` RX-TX ```, then ``` TX-RX ```. The ``` TX ``` pin is for ``` sending data ```, while the ``` RX ``` pin is for ``` receiving data ```. ``` Serial Software Communication ``` is more or less the same as ``` Serial Hardware Communication ``` in terms of cabling, but there are differences in terms of coding. By using this ``` Serial Software ``` you can overcome the constraints of the limitations of ``` RX ``` and ``` TX ``` pins on the development board. To communicate with this ``` Serial Software ``` is quite easy, namely by using certain ``` Digital Pins ``` as a ``` substitute for TX pins and RX pins ```.

<br><br>

## Arduino IDE Setup
1. Open the ``` Arduino IDE ``` first, then open this project by clicking ``` File ``` -> ``` Open ``` : 

   <table><tr><td width="810">
      
      ``` arduinoMega_btvoice.ino ```

   </td></tr></table><br>
   
2. ``` Board Setup ``` in Arduino IDE

   <table>
      <tr><th width="810">

      How to setup the ``` Arduino Mega 2560 ``` board
            
      </th></tr>
      <tr><td>
         
      Click ``` Tools ``` -> ``` Board ``` -> ``` Arduino AVR Boards ``` -> ``` Arduino Mega or Mega 2560 ```

      </td></tr>
   </table><br>
   
3. ``` Port Setup ``` in Arduino IDE

   <table><tr><td width="810">
         
      Click ``` Port ``` -> Choose according to your device port ``` (you can see in device manager) ```

   </td></tr></table><br>

4. Before uploading the program please click: ``` Verify ```.<br><br>

5. If there is no error in the program code, then please click: ``` Upload ```.<br><br>

6. If there is still a problem when uploading the program, then try to check the ``` driver ``` / ``` port ``` / ``` others ``` section.

<br><br>

## Bluetooth Voice Setup
1. Open your smartphone, then in the ``` Google Play Store ``` search for the ``` Bluetooth Voice ``` application made by ``` yashx ```, then install it.<br><br>

2. Turn on ``` bluetooth ```.<br><br>

3. Search for your bluetooth device name -> ``` pairing device ``` by entering the password: ``` 0000 ``` or ``` 1234 ```.<br><br>

4. Open ``` Bluetooth Voice ``` app -> select ``` JDY-31-SPP ```.<br><br>

5. Remove all existing built-in commands.<br><br>

6. Create a new command as seen below :
   
   <table>
      <tr>
         <th width="420">Say</th>
         <th width="420">Get</th>
      </tr>
      <tr>
         <td><p>Turn on the Alarm</p></td>
         <td><p>1</p></td>
      </tr>
      <tr>
         <td><p>Turn off the Alarm</p></td>
         <td><p>2</p></td>
      </tr>
      <tr>
         <td><p>Turn on the Fan</p></td>
         <td><p>3</p></td>
      </tr>
      <tr>
         <td><p>Turn off the Fan</p></td>
         <td><p>4</p></td>
      </tr>
      
      <tr>
         <td><p>Turn on the Lamp</p></td>
         <td><p>5</p></td>
      </tr>
      <tr>
         <td><p>Turn off the Lamp</p></td>
         <td><p>6</p></td>
      </tr>
      
      <tr>
         <td><p>Turn on the Screen</p></td>
         <td><p>7</p></td>
      </tr>
      <tr>
         <td><p>Turn off the Screen</p></td>
         <td><p>8</p></td>
      </tr>
      <tr>
         <td><p>Turn off All Devices</p></td>
         <td><p>9</p></td>
      </tr>
   </table>

<br><br>

## Get Started
1. Download and extract this repository.<br><br>
   
2. Make sure you have the necessary electronic components.<br><br>
   
3. Make sure your components are designed according to the diagram.<br><br>
   
4. Configure your device according to the settings above.<br><br>

5. Please enjoy [Done].

<br><br>

## Highlights
<img width="840" src="Assets/Documentation/Experiment/Device.jpg" alt="smart_home_btvoice">

<br><br>

## Appreciation
If this work is useful to you, then support this work as a form of appreciation to the author by clicking the ``` ⭐Star ``` button at the top of the repository.

<br><br>

## LICENSE
MIT License - Copyright © 2024 - Devan C. M. Wijaya, S.Kom

Permission is hereby granted without charge to any person obtaining a copy of this software and the software-related documentation files to deal in them without restriction, including without limitation the right to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons receiving the Software to be furnished therewith on the following terms:

The above copyright notice and this permission notice must accompany all copies or substantial portions of the Software.

IN ANY EVENT, THE AUTHOR OR COPYRIGHT HOLDER HEREIN RETAINS FULL OWNERSHIP RIGHTS. THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, THEREFORE IF ANY DAMAGE, LOSS, OR OTHERWISE ARISES FROM THE USE OR OTHER DEALINGS IN THE SOFTWARE, THE AUTHOR OR COPYRIGHT HOLDER SHALL NOT BE LIABLE, AS THE USE OF THE SOFTWARE IS NOT COMPELLED AT ALL, SO THE RISK IS YOUR OWN.
