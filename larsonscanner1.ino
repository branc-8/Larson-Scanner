int LEDPins[6] = {2,4,7,8,12,13};
void setup()
{
  for(int i=0; i <6; i++)
  {
    pinMode(LEDPins[i], OUTPUT);
    
  }
}

void loop()
{
  for(int i = 0; i<6 ; i++)
  {
    digitalWrite(LEDPins[i], HIGH);
    delay(50);
    digitalWrite(LEDPins[i], LOW);
    if(LEDPins[i]==13)
    {
    	for(int l = 4; l > 0; l--)
    	{
    		digitalWrite(LEDPins[l], HIGH);
   	 		delay(100);
    		digitalWrite(LEDPins[l], LOW);
    	}
    }
  }
}