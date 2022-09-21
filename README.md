# **Rover Controller Module**

The Rover Controller Module is an electronic control module (ECM) for a Mars rover prototype being developed by the AI Rover team from the Space Technologies At Cal (STAC). The PCB is a four-layer board consisting of an ESP32-WROOM32 module, BMI088 IMU breakout board, RFM69HCW transceiver module, UART header pin interface for three Roboclaw 2x7A motor controllers, and a SPI header pin interface for an external microprocessor such as an NVIDIA Jetson or Raspberry Pi. There’s also decoupling capacitors to suppress power supply noise and TVS diodes for safety and component protection. The PCB was designed using KiCAD and manufactured by JLCPCB. Top and bottom layers are signal planes. First middle layer is the ground plane and the second middle layer is the power plane. I've also placed three test points at the UART, I2C, and SPI serial buses respectively, mounting holes, and logos for aesthetics. Here’s the Rover Controller Module v1.

|||
|:-:|:-:|
|![](images/rcu0.png?h=750&w=1260)|![](images/rcu1.png?h=750&w=1260)|


