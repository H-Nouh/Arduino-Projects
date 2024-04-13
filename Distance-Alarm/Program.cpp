void setup() /*This part is used for initializations,
  and the code inside of it happens only once*/
{
pinMode (9, OUTPUT); /*We use pinMode to define our used pins,
and whether they are inputs or outputs*/
  
pinMode (10, INPUT);
pinMode (11, OUTPUT);
pinMode (12, OUTPUT);
Serial.begin(9600); /*Here we are establishing a communication
between the microcontroller and our computer*/
  
}
void loop() /*This part is where we write our main program,
  and the code inside of it runs infinitely*/
{
digitalWrite(9, HIGH);
delayMicroseconds(10);
digitalWrite(9, LOW); /*The last 3 lines are used to send
a pulse to the Trigger pin of the Ultra-Sonic sensor, which
sends the sound wave and starts the whole process*/
  
float time=pulseIn(10, HIGH); /*Here we are recording the travel
duration of the wave in a variable*/
  
float distance=((0.0343*time)/2);
Serial.println(distance); /*This is just some math to calculate 
the distance, and then we are printing it on the screen*/

if (distance<=200 && distance>100){
  digitalWrite(11, HIGH);
  delay(500);
  tone(12, 600, 300);
  digitalWrite(11, LOW);
  delay(500);
}
/*What we did in the previous condition is basically turning the LED
on and off using digitalWrite High and Low, and also making a sound
through our Piezzo buzzer using tone. Since the condition happens
infinitely, we also need a delay to make it work more than once. We have 
multiple conditions just to have several distance ranges*/
  
if (distance<=100 && distance>50){
  digitalWrite(11, HIGH);
   delay(250);
   tone(12, 750, 200);
  digitalWrite(11, LOW);
   delay(250);
}
if (distance<=50  && distance>25){
  digitalWrite(11, HIGH);
  delay(150);
   tone(12, 900, 100);
  digitalWrite(11, LOW);
  delay(150);
}
if (distance<=25){
  digitalWrite(11, HIGH);
  delay(100);
   tone(12, 1100, 50);
  digitalWrite(11, LOW);
  delay(100);
}
}
