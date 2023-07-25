// C++ code
//
int count=0;
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
}

void loop()
{
  if(digitalRead(3)==1&&count<255){
    count+=50;
  }
  if(digitalRead(4)==1&&count>0){
    count-=50;
  }
   analogWrite(5,count);
  while(digitalRead(3)==1||digitalRead(4)==1);
}