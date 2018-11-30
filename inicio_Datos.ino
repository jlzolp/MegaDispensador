void Configuracion(){ 

    inputString.reserve(200); //reservar 
    sDatI2c.reserve(200);
    finger.getTemplateCount();  //funcion de la huella
    //Tool.setPWMFreq(60); //Frecuecia PWM de 60Hz o T=16,66ms
    
    if (finger.verifyPassword()) {
        Serial.println("correcto");
    } else {
        delay(1);
    } 
  ///***********salidas para la torreta y el sonido
    pinMode(nLedRojo,OUTPUT);
    pinMode(nLedAmarillo,OUTPUT);
    pinMode(nLedVerde,OUTPUT);
    pinMode(nBuzzer,OUTPUT);

    
  ////*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*
  digitalWrite(nLedRojo,LOW);
  digitalWrite(nLedAmarillo,LOW);
  digitalWrite(nLedVerde,LOW);
  digitalWrite(nBuzzer,LOW);

    //digitalWrite(nLedRojo, HIGH);
    //thrBlink.enabled = true;
    //thrBlink.setInterval(1000);
    //thrBlink.onRun(BufferTimer);
  }
  
