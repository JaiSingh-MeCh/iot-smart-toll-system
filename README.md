# 🚗 IoT Smart Toll System with Alcohol Detection

This project presents a smart toll gate system designed to enhance road safety by detecting alcohol consumption using an MQ-3 sensor and controlling gate access accordingly.

The system integrates IoT and embedded hardware to automate decision-making at toll points.

---

## 🔍 Overview

The system checks whether a driver has consumed alcohol before allowing passage through the toll gate. Based on sensor readings, the gate either opens or remains closed.

---

## ⚙️ Key Features

* Alcohol detection using MQ-3 sensor
* Automatic gate control using servo motor
* ESP32-based processing and communication
* Real-time data monitoring
* Safety-focused automation

---

## 🛠️ Components Used

* ESP32
* MQ-3 Alcohol Sensor
* SG90 Servo Motor
* Relay Module
* Power Supply

---

## ⚙️ Working Principle

1. The MQ-3 sensor measures alcohol levels
2. Data is processed by ESP32
3. If alcohol level exceeds threshold → Gate remains closed ❌
4. If safe → Gate opens using servo motor ✅
5. Data can be logged for monitoring

---

## 🚧 Challenges

* Sensor calibration for accurate detection
* Stable power supply for relay and servo
* Reducing false positives

---

## 🔮 Future Scope

* Number plate recognition
* Face detection for identity tracking
* Cloud dashboard for data visualization

---

## 👨‍💻 Author
    
Jai Singh
Mechanical Engineering | IoT & Embedded Systems Enthusiast
