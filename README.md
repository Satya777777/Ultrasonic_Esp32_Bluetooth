Ultrasonic Sensor with ESP32 and Bluetooth

This project uses an ESP32 with an HC-SR04 Ultrasonic Sensor to measure distance and transmit the readings via Bluetooth. The ESP32 acts as a Bluetooth device, sending live distance data to a paired smartphone or computer.

🚀 Features

Distance measurement using an Ultrasonic Sensor (HC-SR04)

Real-time data transmission over Bluetooth Serial

Compatible with any Bluetooth terminal app

Displays data on both Serial Monitor and Bluetooth client

🛠️ Hardware Required

ESP32 development board

HC-SR04 Ultrasonic sensor

Jumper wires

Breadboard

🔌 Connections
Component	ESP32 Pin
Trig Pin	GPIO 25
Echo Pin	GPIO 26
VCC	5V
GND	GND
📜 Code Explanation

Initializes BluetoothSerial as ESP32_BT

Sets up the Ultrasonic sensor (TRIG & ECHO)

Measures distance using pulseIn()

Prints distance values on the Serial Monitor and sends them over Bluetooth

📲 Usage

Upload the code to your ESP32 using Arduino IDE.

Open Serial Monitor (115200 baud) to check logs.

Pair your phone or PC with the ESP32 (device name: ESP32_BT).

Open a Bluetooth Terminal app and receive live distance readings.

🖼️ Example Output
Distance: 12.34 cm
Distance: 14.56 cm

📌 Applications

Obstacle detection

Smart parking systems

Proximity sensing

Robotics