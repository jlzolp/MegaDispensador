void Salidas(int nSalida,int nValor){
boolean bHacer;
  if(nValor == 0){bHacer=LOW; }
  if(nValor == 1){bHacer=HIGH;}
  if(nValor >= 2){Serial.println("X");}
  switch (nSalida) {
        case 0:
            Serial.println("X");
            break;
        case 1:
            digitalWrite(nLedVerde,bHacer);
            break;
        case 2:
            digitalWrite(nLedRojo,bHacer);
            break;
        case 3:
            digitalWrite(nLedAmarillo,bHacer);
            break;
        case 4:
            Serial.println("Error");
            break;
        case 5:
            digitalWrite(nBuzzer,bHacer);
            break;
        default:
            Serial.println("X salidas digitales");
            break;
  }
  return;
}
void Buzzer(int nValor){
  Salidas(5,nValor);
  
  return;
}

void BuzzerTimer(int nTimer){
  //Salidas(5,0);
 // delay (nTimer);
  Salidas(5,1);
  delay (nTimer);
  Salidas(5,0);
  return;
}



