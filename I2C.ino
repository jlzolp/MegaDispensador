void I2CTX(int nNum,String y){
  Wire.beginTransmission(nNum);
  Wire.print(y);
  Wire.write(10);               
  Wire.endTransmission();
}
void receiveEvent(int howMany) {
  while (Wire.available()) { 
    char inChar = (char)Wire.read();
    if (inChar == '\n') {
      //Serial.println("VER"); 
      I2Completdo = true;
    }
    if (inChar != '\n') {
      sDatI2c += inChar;
      I2Completdo = true;
    }
  }
}
