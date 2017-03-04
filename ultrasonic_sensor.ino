 int trigpin1=3;
int echopin1=2;
 int trigpin2=5;
int echopin2=4;
 int trigpin3=7;
int echopin3=6;
 int trigpin4=9;
int echopin4=8;
int ledpin=13;
float duration,duration1,duration2,duration3,duration4,durationintm1,durationintm2;

float distance,distance1,distance2,distance3,distance4;
void setup() {
  Serial.begin(9600);
  pinMode(trigpin1,OUTPUT);
  pinMode(echopin1,INPUT);
    pinMode(trigpin2,OUTPUT);
  pinMode(echopin2,INPUT);
    pinMode(trigpin3,OUTPUT);
  pinMode(echopin3,INPUT);
    pinMode(trigpin4,OUTPUT);
  pinMode(echopin4,INPUT);
  pinMode(ledpin,OUTPUT);
  
  
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(ledpin,LOW); 
  digitalWrite(trigpin1,LOW);
  delay(2);
  digitalWrite(trigpin1,HIGH);
  delay(10);
  digitalWrite(trigpin1,LOW);
  duration1=pulseIn(echopin1,HIGH);
  digitalWrite(trigpin2,LOW);
  delay(2);
  digitalWrite(trigpin2,HIGH);
  delay(10);
  digitalWrite(trigpin2,LOW);
  duration2=pulseIn(echopin2,HIGH);
  digitalWrite(trigpin3,LOW);
  delay(2);
  digitalWrite(trigpin3,HIGH);
  delay(10);
  digitalWrite(trigpin3,LOW);
  duration3=pulseIn(echopin3,HIGH);
  digitalWrite(trigpin4,LOW);
  delay(2);
  digitalWrite(trigpin4,HIGH);
  delay(10);
  digitalWrite(trigpin4,LOW);
  duration4=pulseIn(echopin4,HIGH);
  durationintm1=min(duration1,duration2);
  durationintm2=min(duration3,duration4);
  duration=min(durationintm1,durationintm2);
  distance=duration*.034/2;
  distance1=duration1*.034/2;
  distance2=duration2*.034/2;
  distance3=duration3*.034/2;
  distance4=duration4*.034/2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.print("    ");
  Serial.print(distance1);
  Serial.print("    ");
  Serial.print(distance2);
  Serial.print("    ");
  Serial.print(distance3);
  Serial.print("    ");
  Serial.print(distance4);
  Serial.println(" ");
  delay(400); 
  if(distance>=30)
  {digitalWrite(ledpin,LOW);
    }
    delay(50);
  if(distance<30)
  {digitalWrite(ledpin,HIGH);
    }
  
  delay(50);
  // put your main code here, to run repeatedly:

}
