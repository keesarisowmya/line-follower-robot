int lmp = 5;
int lmn = 6;
int rmp = 10;
int rmn = 11;

void setup()
{
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
   
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  Serial.begin(9600);

}

void loop()
{
  
  int le = digitalRead(2);
  int c = digitalRead(3);
  int r = digitalRead(4);
  
  if(le == 1 && c == 0 && r == 1)
  {
    analogWrite(lmp,100);
    analogWrite(lmn,0);
    analogWrite(rmp,100);
    analogWrite(rmn,0);
    Serial.println("forward");
  }
  if(le == 0 && c == 0 && r == 0)
  {
    analogWrite(lmp,0);
    analogWrite(lmn,0);
    analogWrite(rmp,0);
    analogWrite(rmn,0);
    Serial.println("stop");
  }
  
  if(le == 0 && c == 0 && r == 1)
  {
    analogWrite(lmp,0);
    analogWrite(lmn,0);
    analogWrite(rmp,100);
    analogWrite(rmn,0);
    Serial.println("left");
  }
  
  if(le == 1 && c == 0 && r == 0)
  {
    analogWrite(lmp,100);
    analogWrite(lmn,0);
    analogWrite(rmp,0);
    analogWrite(rmn,0);
    Serial.println("right");
  }
}
