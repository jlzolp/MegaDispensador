void Configuracion(){ 
    inputString.reserve(200); //reservar 
    sDatI2c.reserve(200);
    finger.getTemplateCount();  //funcion de la huella
    
    if (finger.verifyPassword()) {
        Serial.println("C");
    } else {
        delay(1);
    } 
  }
  
