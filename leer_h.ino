void leer_huella()                     // run over and over again
{
  int bits=0;
  int a;
  int cuen;
  while (bits==0)
  {
  a=getFingerprintIDez();
  if(a!=-1){
    break;
    }
  delay(50);
  cuen++;
  }
}


int getFingerprintIDez() {
  uint8_t p = finger.getImage();
  if (p != FINGERPRINT_OK)  return -1;

  p = finger.image2Tz();
  if (p != FINGERPRINT_OK)  return -1;

  p = finger.fingerFastSearch();
  if (p != FINGERPRINT_OK)  return -1;
  
  // found a match!
//  String w= (String)finger.fingerID;
  Serial.println(finger.fingerID); 

  return finger.fingerID;
}
