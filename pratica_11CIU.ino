// C++ code
//

float f = 0;
float aux = 0;
float frecmax = 1./500.;
float frecmin = 1./2000.;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  aux = sin(millis()/5000);
  aux = (aux + 1)/2;
  f = (frecmax-frecmin) * aux + frecmin;
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1./f);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1./f);
}


