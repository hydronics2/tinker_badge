/*

 */
 

int pin0 = 0; //pwm
int pin1 = 1; //pwm
int pin2 = 2; //marked D3/R3 on board, SCK, pin-7 on chip
int pin3 = 3; //marked D4/R4 on board, PB3, pin-2 on chip,  Green LED
int pin4 = 4;

// the setup routine runs once when you press reset:
void setup() {                
  pinMode(pin0, OUTPUT);
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);     
}

int delay1 = 100;

// the loop routine runs over and over again forever:
void loop() {

  digitalWrite(pin0, HIGH);
  delay(delay1);
  digitalWrite(pin0, LOW);
  digitalWrite(pin1, HIGH);
  delay(delay1);
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, HIGH);   
  delay(delay1);              
  digitalWrite(pin2, LOW);    
  digitalWrite(pin3, HIGH);
  delay(delay1);               
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, HIGH);
  delay(delay1);
  digitalWrite(pin4, LOW);

  delay(2000);
  
}
