
int ledArray[] = {8, 9, 10, 11, 12};
int count = 0;
int timer = 200;

void setup () {
  for (count = 0; count < 5; count++){
    pinMode(ledArray[count],OUTPUT);
    }
   }

void loop (){
  
  for(count = 5; count >=0; count = count -1){
    
    digitalWrite(ledArray[count],HIGH);
    delay(timer/4);
    digitalWrite(ledArray[count],LOW);
    delay(timer/4);
  }
    for(count = 0; count <5; count++){
    
    digitalWrite(ledArray[count],HIGH);
    delay(timer*2);
    digitalWrite(ledArray[count],LOW);
    delay(timer*2);
  }
}
  
