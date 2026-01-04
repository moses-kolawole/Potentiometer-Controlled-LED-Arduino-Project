
int ledpin = 11;
int potpin = A0;
int delay_time = 500;

float pot_value;
float led_value;

void setup() {
  // put your setup code here, to run once:
pinMode(ledpin, OUTPUT);
pinMode(potpin, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
pot_value = analogRead(potpin);


led_value = (255. / 1023.) * pot_value;

analogWrite(ledpin, led_value);
Serial.print("The current voltage level of the led is: ");
Serial.print(" ");
Serial.println(pot_value);
delay(delay_time);


}
