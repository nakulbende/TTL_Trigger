/*
  TTL switch

  This code when uploaded to an Arduino circuit, will write ON to a digital pin for a certain duration.
  Additionaly, you can add a momentary switch to the reset button, to run the circuit again and again.

  modified 09/15/2015
  by Nakul Bende
*/

const int TTL_pin = 8; //Use anything other than 13 - because that one has a LED, it has a non zero resistance
const int LED_pin = 13; //Just for a visual indication when the TTL has a HIGH signal
const float Duration = 2000; //Indicate the time period for which the TTL should be on HIGH (in ms)

// the setup function runs once when you press reset or power the board
void setup() {
  //Initialize the serial port just in case you want to monitor it
  Serial.begin(9600);
  // initialize digital pins as outputs.
  pinMode(LED_pin, OUTPUT);
  pinMode(TTL_pin, OUTPUT);
  digitalWrite(TTL_pin, LOW);
  digitalWrite(LED_pin, LOW);
  Serial.print('TTL trigger is: ON');

  // write the TTL pin for a certain duration
  digitalWrite(TTL_pin, HIGH);   // turn the TTL on (HIGH is 5V)
  digitalWrite(LED_pin, HIGH);    // turn the LED on
  Serial.print('TTL trigger is: ON');

  delay(Duration);              // wait for tthe defined period

  digitalWrite(TTL_pin, LOW);   // turn the TTL off (LOW is 0V)
  digitalWrite(LED_pin, LOW);    // turn the LED off
  Serial.print('TTL trigger is: OFF');
}

// the loop function runs over and over again forever
void loop() {
}
