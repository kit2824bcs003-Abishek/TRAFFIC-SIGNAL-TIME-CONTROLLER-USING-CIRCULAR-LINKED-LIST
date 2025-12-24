Traffic Signal Controller (Circular Linked List)
This project demonstrates a traffic signal controller simulation using a circular linked list in C++. The controller cycles through four directions (North, East, South, West) with specified durations for each signal.

Features
Uses a circular linked list to manage traffic signals.

Each signal has a direction and a time duration.

Simulates the continuous cycling of traffic lights.

Easily extensible for more directions or variable durations.

How to Run
Save the code in a file named traffic_signal_controller.cpp.

Compile the code using a C++ compiler:

text
g++ traffic_signal_controller.cpp -o traffic_signal_controller
Run the executable:

text
./traffic_signal_controller
The program will display each signal direction and its duration in sequence, simulating a real traffic light cycle.

Sample Output
text
Signal for North is GREEN for 30 seconds.
Signal for East is GREEN for 20 seconds.
Signal for South is GREEN for 30 seconds.
Signal for West is GREEN for 20 seconds.
Customization
Add more directions by calling addSignal("Direction", duration) in the main function.

Modify the duration for each direction as needed.

Notes
For a real-world application, you can integrate actual delays using sleep functions or hardware timers.

This is a console-based simulation and does not control physical signals.
