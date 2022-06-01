char val;
int tissores = 3 ;
int pedra = 4 ;
int paper = 5 ;

void setup() { 
Serial.begin(9600); 
pinMode(tissores, OUTPUT); 
pinMode(pedra, OUTPUT); 
pinMode(paper, OUTPUT);
}

void loop() { 
if( Serial.available() ) {
val = Serial.read();

if( val == '1' )
{ 
digitalWrite(tissores, HIGH);
digitalWrite(pedra, LOW);
digitalWrite(paper, LOW);
}

if( val == '2' )
{ 
digitalWrite(tissores, LOW);
digitalWrite(pedra, HIGH);
digitalWrite(paper, LOW);
} 
if( val == '3' )
{ 
digitalWrite(tissores, LOW);
digitalWrite(pedra, LOW);
digitalWrite(paper, HIGH);

}
delay(100); 
}
}
