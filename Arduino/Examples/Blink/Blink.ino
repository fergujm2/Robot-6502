#define BLINK_TIME 100
#define LED1 51
#define LED2 49
#define LED3 47
#define LED4 45

// the setup function runs once when you press reset or power the board
void setup()
{
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

  randomSeed(analogRead(0));
}

void blinkOneLed(int ledNumber)
{
  long randNumber = random(30, 200);
  digitalWrite(ledNumber, HIGH);
  delay(randNumber);
}

void resetAllLeds()
{
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW); 
  digitalWrite(LED4, LOW);
}

// the loop function runs over and over again forever
void loop() 
{
  resetAllLeds();
  blinkOneLed(LED1);

  resetAllLeds();
  blinkOneLed(LED3);

  resetAllLeds();
  blinkOneLed(LED2);

  resetAllLeds();
  blinkOneLed(LED4);
}
