int counter;

void setup() {

  Serial.begin(9600);
  
}

void loop() {

  counter ++;

  if (counter % 2 != 0) { 

    Serial.print("O ");
    Serial.println(counter);

    delay(1000);
    
  } else {

    Serial.print("E ");
    Serial.println(counter);

    delay(1000);
    
  }
  
}
