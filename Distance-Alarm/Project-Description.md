# Distance-Alarm:
  This is a general overview of the Distance-Alarm that I made using Arduino. I would usually challenge my students to make this project at the end of my sessions whenever
I am teaching Arduino Basics. So, I thought of sharing it here with you so that you can also benefit!
## Important Links:
You can find the detailed project in TinkerCad here: [Distance-Alarm](https://www.tinkercad.com/things/iDJrW2kYhvd-distance-alarm).
You will find both the circuit and the code there, and you can copy it and simulate the alarm or customize it yourself!
I have included several comments to the code, to help you understand what each command does.
You can find the code here too in: [Program](Distance-Alarm/Program) and the Circuit in: [Circuit](Distance-Alarm/Circuit).
## Used Material:
-Arduino Uno MicroController x1
-UltraSonic Sensor x1
-LED x1
-Piezzo Buzzer x1
-Resistors x2
-USB 2.0 Cable (Type A/B) x1
-Jumper Wires x10
## How does it work?
  To understand the alarm, we have to understand how UltraSonic sensors work first. These sensors send sound waves through one eye, and then if there is actually an object 
the waves will bounce back and be received through the other eye. The sensor has 4 pins (the one that I used, which is HC-SR04), VCC for power, GND for ground, Trigger which
we use to send the sound waves (Output), and Echo which we use to calculate the duration of the wave (Input). When the wave returns to the sensor, the travel duration will
be recorded in the Echo pin. We can retrieve it in a variable, and then calculate the Distance since we already know the speed of sound (Distance=Time*Speed). After that,
I have made 4 Distance intervals using If conditions, and inside each of them I made the LED blink, and the Piezzo Buzzer make some noise, and gradually increased the speed
of these two operations in accordance to the distance, to make it more realistic. And that's it!
