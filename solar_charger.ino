int ls;
int rs;
int d = 100;
int l = 5;
int r = 6;
int p = 200;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  
  pinMode(l, OUTPUT);
  pinMode(r, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  ls = analogRead(A0);
  rs = analogRead(A1);

  if(ls > rs + d)
  {
    
    digitalWrite(r, p);
    digitalWrite(l, 0);
    delay(1000);
    digitalWrite(r, 0);
    
  }
  else if(rs > ls + d)
  {
    
    digitalWrite(l, p);
    digitalWrite(r, 0);
    delay(1000);
    digitalWrite(l, 0);
    
  }
  else
  {
    
    digitalWrite(l, 0);
    digitalWrite(r, 0);
    
  }

  delay(1500);
  
}
