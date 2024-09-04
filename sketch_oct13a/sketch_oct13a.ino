int level;
const int analog_0=0;
int l1=13;
int l2=12;
int l3=11;
int l4=10; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(l1,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(l3,OUTPUT);
  pinMode(l4,OUTPUT);
  pinMode(8,OUTPUT); // This is for the buzzer
}

void loop() {
  level=analogRead(analog_0);
  Serial.println(level);

  if(level>300 && level<400) { 
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, HIGH);
    digitalWrite(8, LOW); // Turn off buzzer
  }
  else if(level>400 && level<500) {
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, LOW);
    digitalWrite(8, LOW); // Turn off buzzer
  }
  else if(level>500 && level<600) {
    digitalWrite(l1, LOW);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
    digitalWrite(8, LOW); // Turn off buzzer
  }
  else if(level>600 && level<650) {
    digitalWrite(l1, HIGH);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
    digitalWrite(8, HIGH); // Turn on buzzer only in this range
  }
}