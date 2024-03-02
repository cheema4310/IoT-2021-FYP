# Smart Home Control System with ESP8266 and Firebase

## Overview

This project implements a smart home control system using an ESP8266 microcontroller and Firebase as the backend platform. It allows users to remotely control various home appliances such as fans, bulbs, and boards through a mobile or web interface.

This project was developed as a final year project for a Computer Science student client.

## Dependencies

- [ESP8266WiFi](https://arduino-esp8266.readthedocs.io/en/latest/esp8266wifi/readme.html)
- [FirebaseArduino](https://github.com/FirebaseExtended/firebase-arduino)

## Installation

1. Connect the ESP8266 microcontroller to your development environment.
2. Install the required libraries using the Arduino Library Manager.
3. Set up your Firebase project and obtain the Firebase database URL and authentication token.
4. Update the `FIREBASE_HOST` and `FIREBASE_AUTH` constants in the code with your Firebase credentials.
5. Upload the code to your ESP8266 board.

## Usage

1. Connect the ESP8266 to your local Wi-Fi network by providing the SSID and password in the code.
2. Open the Firebase console and update the database values to control the appliances remotely.
3. The ESP8266 will continuously monitor the Firebase database for changes and adjust the appliance states accordingly.

## Configuration

- Modify the `FIREBASE_HOST`, `FIREBASE_AUTH`,  `WIFI_SSID` and `WIFI_PASSWORD` constants in the code with your Wi-Fi network credentials.
- Update the Firebase database structure according to your needs, ensuring the correct paths for controlling the appliances.

## Troubleshooting

- If the ESP8266 fails to connect to Wi-Fi or Firebase, double-check the network credentials and Firebase authentication token.
- Ensure that the Firebase database structure matches the expected format in the code.

## Contributing

Contributions to this project are welcome! Feel free to submit bug reports, feature requests, or pull requests through GitHub.

## Acknowledgements

- Special thanks to [Firebase](https://firebase.google.com/) for providing a robust backend platform for IoT applications.
- Thanks to the developers of the ESP8266WiFi and FirebaseArduino libraries for their contributions to the Arduino community.

## Contact

For any inquiries or support related to this project, please contact [Muhammad Zubair Cheema](mailto:cheema4310@gmail.com).
