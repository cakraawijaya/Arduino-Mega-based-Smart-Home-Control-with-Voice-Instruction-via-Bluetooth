[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?logo=github&color=%23F7DF1E)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/cakraawijaya/Arduino-Mega-based-Smart-Home-Control-with-Voice-Instruction-via-Bluetooth?logo=Codeforces&logoColor=white&color=%23F7DF1E)
![Project](https://img.shields.io/badge/Project-Arduino-light.svg?style=flat&logo=arduino&logoColor=white&color=%23F7DF1E)
![Type](https://img.shields.io/badge/Type-Personal%20Experiment-light.svg?style=flat&logo=gitbook&logoColor=white&color=%23F7DF1E)

# Arduino-Mega-based-Smart-Home-Control-with-Voice-Instruction-via-Bluetooth
Rumah-rumah yang ada di Indonesia saat ini umumnya belum menerapkan teknologi tingkat tinggi, sehingga untuk mematikan atau menyalakan perangkat itu harus dilakukan secara manual. Hal ini jelas tidak efisien (boros waktu dan tenaga). Oleh karena itu, proyek ini dibuat untuk memudahkan pengguna dalam mengondisikan perangkat (hidup/mati). Proyek ini telah dilaksanakan dan memakan waktu kurang lebih 3 hari. Sistem ini dilengkapi dengan bluetooth, yang memungkinkan pengguna dapat melakukan pengendalian perangkat dengan suara. Dalam hal ini, perangkat yang dimaksud meliputi: alarm, kipas, lampu, dan layar. Protokol komunikasi UART digunakan sebagai media untuk pertukaran data antara Bluetooth dengan board Arduino Mega. Sedangkan jenis UART yang dipakai berupa Hardware Serial. Manfaat dari pembuatan proyek ini tidak lain adalah untuk menambah wawasan. Hasil dari penelitian ini menunjukkan bahwa prototipe smart home dapat berfungsi dengan baik.

<br><br>

## Kebutuhan Proyek
| Bagian | Deskripsi |
| --- | --- |
| Papan Pengembangan | Arduino Mega 2560 |
| Editor Kode | Arduino IDE |
| Dukungan Aplikasi | Bluetooth Voice |
| Driver | CH340 USB Driver |
| Protokol Komunikasi | • Inter Integrated Circuit (I2C)<br>• Universal Asynchronous Receiver-Transmitter (UART) |
| Bahasa Pemrograman | C/C++ |
| Aktuator | • Kipas DC 5V (x1)<br>• LED (x1)<br>• Piezoelektrik (x1) |
| Sensor | JDY-31 SPP-C: Modul Bluetooth (x1) |
| Layar | LCD I2C (x1) |
| Komponen Lainnya | • Kabel USB tipe B - USB tipe A (x1)<br>• Kabel Jumper (1 set)<br>• Adaptor DC 5V (x1)<br>• Breadboard (x1)<br>• Relay elektromekanis 4-channel (x1) |

<br><br>

## Unduh & Instal
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

## Rancangan Proyek
<table>
<tr>
<th width="420">Diagram Blok</th>
<th width="420">Diagram Ilustrasi</th>
</tr>
<tr>
<td><img src="Assets/Documentation/Diagram/Block Diagram.jpg" alt="block-diagram"></td>
<td><img src="Assets/Documentation/Diagram/Pictorial Diagram.jpg" alt="pictorial-diagram"></td>
</tr>
</table>
<table>
<tr>
<th width="840">Pengkabelan</th>
</tr>
<tr>
<td><img width="840" src="Assets/Documentation/Table/Device Wiring.jpg" alt="wiring"></td>
</tr>
</table>

<br><br>

## Pengetahuan Dasar
Pada dasarnya, suatu perangkat itu dapat dikomunikasikan dengan perangkat lain baik secara nirkabel maupun dengan kabel. Komunikasi antar perangkat keras yang umum digunakan salah satunya adalah ``` Komunikasi Serial ```. Dapat diketahui bersama bahwa ``` Komunikasi Serial ``` ini ada tiga jenis, yaitu meliputi: ``` UART (Universal Asynchronous Receiver-Transmitter) ```, ``` SPI (Serial Peripheral Interface) ```, dan ``` I2C (Inter Integrated Circuit) ```. Ada dua macam ``` Komunikasi Serial UART ```, yaitu ``` Hardware Serial ``` dan ``` Software Serial ```.  ``` Komunikasi Hardware Serial ``` dapat dilakukan dengan cara menghubungkan pin ``` TX ``` dan pin ``` RX ``` secara ``` menyilang ``` pada masing-masing papan pengembangan, misalnya: ``` RX-TX ```, kemudian ``` TX-RX ```. Pin ``` TX ``` yaitu untuk ``` mengirim data ```, sedangkan pin ``` RX ``` yaitu untuk ``` menerima data ```. ``` Komunikasi Software Serial ``` ini kurang lebih sama dengan ``` Komunikasi Hardware Serial ``` dalam segi pengkabelan, namun ada perbedaan dalam segi pengkodean. Dengan menggunakan ``` Software Serial ``` inilah anda dapat mengatasi masalah keterbatasan pin ``` RX ``` dan ``` TX ``` yang ada di papan pengembangan. Untuk berkomunikasi dengan ``` Software Serial ``` ini cukup mudah, yaitu dengan menggunakan ``` Pin Digital ``` tertentu sebagai ``` pengganti pin TX dan pin RX ```.

<br><br>

## Pengaturan Arduino IDE
1. Buka ``` Arduino IDE ``` terlebih dahulu, kemudian buka proyek ini dengan cara klik ``` File ``` -> ``` Open ``` : 

   <table><tr><td width="810">
   
      ``` arduinoMega_btvoice.ino ```

   </td></tr></table><br>
   
2. ``` Pengaturan Board ``` di Arduino IDE

   <table>
      <tr><th width="810">

      Cara mengatur board ``` Arduino Mega 2560 ```
            
      </th></tr>
      <tr><td>
      
      Pilih papan dengan mengklik: ``` Tools ``` -> ``` Board ``` -> ``` Arduino AVR Boards ``` -> ``` Arduino Mega or Mega 2560 ```

      </td></tr>
   </table><br>
   
3. ``` Pengaturan Port ``` di Arduino IDE

   <table><tr><td width="810">
      
      Klik ``` Port ``` -> Pilih sesuai dengan port perangkat anda ``` (anda dapat melihatnya di Device Manager) ```

   </td></tr></table><br>

4. Sebelum mengunggah program, silakan klik: ``` Verify ```.<br><br>

5. Jika tidak ada kesalahan dalam kode program, silakan klik: ``` Upload ```.<br><br>

6. Jika masih ada masalah saat unggah program, maka coba periksa pada bagian ``` driver ``` / ``` port ``` / ``` yang lainnya ```.

<br><br>

## Pengaturan Bluetooth Voice
1. Buka ponsel cerdas anda, lalu pada ``` Google Play Store ``` cari aplikasi ``` Bluetooth Voice ``` buatan ``` yashx ```, kemudian lakukan instalasi.<br><br>

2. Hidupkan ``` bluetooth ```.<br><br>

3. Cari nama device bluetooth anda -> ``` sandingkan perangkat ``` dengan memasukkan kata sandi: ``` 0000 ``` atau ``` 1234 ```.<br><br>

4. Buka aplikasi ``` Bluetooth Voice ``` -> pilih ``` JDY-31-SPP ```.<br><br>

5. Hapus semua perintah bawaan yang ada.<br><br>

6. Buat perintah baru seperti yang terlihat di bawah ini :
   
   <table>
      <tr>
         <th width="420">Say</th>
         <th width="420">Get</th>
      </tr>
      <tr>
         <td><p>Nyalakan Alarm</p></td>
         <td><p>1</p></td>
      </tr>
      <tr>
         <td><p>Matikan Alarm</p></td>
         <td><p>2</p></td>
      </tr>
      <tr>
         <td><p>Nyalakan Kipas</p></td>
         <td><p>3</p></td>
      </tr>
      <tr>
         <td><p>Matikan Kipas</p></td>
         <td><p>4</p></td>
      </tr>
      
      <tr>
         <td><p>Nyalakan Lampu</p></td>
         <td><p>5</p></td>
      </tr>
      <tr>
         <td><p>Matikan Lampu</p></td>
         <td><p>6</p></td>
      </tr>
      
      <tr>
         <td><p>Nyalakan Layar</p></td>
         <td><p>7</p></td>
      </tr>
      <tr>
         <td><p>Matikan Layar</p></td>
         <td><p>8</p></td>
      </tr>
      <tr>
         <td><p>Matikan Semua Perangkat</p></td>
         <td><p>9</p></td>
      </tr>
   </table>

<br><br>

## Memulai
1. Unduh dan ekstrak repositori ini.<br><br>
   
2. Pastikan anda memiliki komponen elektronik yang diperlukan.<br><br>
   
3. Pastikan komponen anda telah dirancang sesuai dengan diagram.<br><br>
    
4. Konfigurasikan perangkat anda menurut pengaturan di atas.<br><br>

5. Selamat menikmati [Selesai].

<br><br>

## Sorotan
<img src="Assets/Documentation/Experiment/Device.jpg" alt="smart_home_btvoice">

<br><br>

## Apresiasi
Jika karya ini bermanfaat bagi anda, maka dukunglah karya ini sebagai bentuk apresiasi kepada penulis dengan mengklik tombol ``` ⭐Bintang ``` di bagian atas repositori.

<br><br>

## LISENSI
LISENSI MIT - Hak Cipta © 2024 - Devan C. M. Wijaya, S.Kom

Dengan ini diberikan izin tanpa biaya kepada siapa pun yang mendapatkan salinan perangkat lunak ini dan file dokumentasi terkait perangkat lunak untuk menggunakannya tanpa batasan, termasuk namun tidak terbatas pada hak untuk menggunakan, menyalin, memodifikasi, menggabungkan, mempublikasikan, mendistribusikan, mensublisensikan, dan/atau menjual salinan Perangkat Lunak ini, dan mengizinkan orang yang menerima Perangkat Lunak ini untuk dilengkapi dengan persyaratan berikut:

Pemberitahuan hak cipta di atas dan pemberitahuan izin ini harus menyertai semua salinan atau bagian penting dari Perangkat Lunak.

DALAM HAL APAPUN, PENULIS ATAU PEMEGANG HAK CIPTA DI SINI TETAP MEMILIKI HAK KEPEMILIKAN PENUH. PERANGKAT LUNAK INI DISEDIAKAN SEBAGAIMANA ADANYA, TANPA JAMINAN APAPUN, BAIK TERSURAT MAUPUN TERSIRAT, OLEH KARENA ITU JIKA TERJADI KERUSAKAN, KEHILANGAN, ATAU LAINNYA YANG TIMBUL DARI PENGGUNAAN ATAU URUSAN LAIN DALAM PERANGKAT LUNAK INI, PENULIS ATAU PEMEGANG HAK CIPTA TIDAK BERTANGGUNG JAWAB, KARENA PENGGUNAAN PERANGKAT LUNAK INI TIDAK DIPAKSAKAN SAMA SEKALI, SEHINGGA RISIKO ADALAH MILIK ANDA SENDIRI.
