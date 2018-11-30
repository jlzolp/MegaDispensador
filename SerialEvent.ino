void serialEvent() {
 while (Serial.available()) {
    char inChar = (char)Serial.read();
    //Serial.println(inChar);
    if (inChar == '\n') {
      stringComplete = true;
      //Serial.println(inputString); 
    }
    if (inChar != '\n') {
      inputString += inChar;
      //Serial.println(inputString); 
    }
  }
}
