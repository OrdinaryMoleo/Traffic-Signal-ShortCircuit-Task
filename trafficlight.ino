// C++ code
//

int green = 8;
int yellow = 9;
int red = 10;

int pushButton = 7;
int read = 0;

void setup()
{
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(pushButton, INPUT);
  
  Serial.begin(9600);
}

void pedestrianisalwaysright(){  
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    delay(2000);
}

void loop()
{
  int read = digitalRead(pushButton);
  Serial.println(read);
  
  if(read==0){
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    for (int i = 0; i < 500; i++) { 
      if (digitalRead(pushButton) == HIGH) {
        pedestrianisalwaysright();
        return;
      }
      delay(10);
    }
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    for (int i = 0; i < 100; i++) { 
      if (digitalRead(pushButton) == HIGH) {
        pedestrianisalwaysright();
        return;
      }
      delay(10);
    }
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    for (int i = 0; i < 450; i++) { 
      if (digitalRead(pushButton) == HIGH) {
        pedestrianisalwaysright();
        return;
      }
      delay(10);
    }
  }
}
  
  
