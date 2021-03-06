
void grabar_huella(String sID)
{
  int iD = sID.toInt();
  id = iD;
  if (id == 0) {
     return;
  }
  
getFingerprintEnroll(sID);
}

uint8_t getFingerprintEnroll(String sIds) {
 // uint8_t  x;
  int p = -1;
  
  while (p != FINGERPRINT_OK) {
        p = finger.getImage();
        }

  p = finger.image2Tz(1);   //  
  delay(2000);
  
  p = 0;
  while (p != FINGERPRINT_NOFINGER) {
    p = finger.getImage();
  }
  p = -1;
  while (p != FINGERPRINT_OK) {
    p = finger.getImage();
  }

  p = finger.image2Tz(2);
  
  p = finger.createModel();
  
  p = finger.storeModel(id);
  
  if (p == FINGERPRINT_OK) {
    Serial.print(sIds);
    Serial.println("E");
    return p;
    } else {
    return p;
  }   
}
