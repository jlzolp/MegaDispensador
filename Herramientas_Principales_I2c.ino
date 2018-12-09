void TorretaITwoC(String sNumer,String sActiv){
  int nValor = sNumer.toInt();
  int nActv =  sActiv.toInt();
  String  sDtsT = "T;"+sNumer+";"+sActiv;
  if(sNumer == " " or  sNumer == "" or nActv >= 3){
    Serial.print("T"); 
    Serial.println(";X");  }
  else {
      I2CTX(121,sDtsT); 
      CicloDato(121,"T"+sNumer); 
    }
  return;
}
void BuzzerITwoC(String sBzz,String sTempo){
    String sDtsB;
    int nBzz = sBzz.toInt();
    int nTempo = sTempo.toInt();
    if(sTempo == "" or sTempo == " "){
      Serial.print(sTempo); 
      Serial.println(";X");  }
    else {
    switch (nBzz) {
      case 0:
          sDtsB = "B;1;"+sTempo;
          I2CTX(121,sDtsB);
          break;
      case 1:
          sDtsB = "B;1;"+sTempo;
          I2CTX(121,sDtsB);
          CicloDato(121,"B1"); 
          break;
      default:
          Serial.print(nBzz); 
          Serial.println("X");  
          break;
      }
    }
  return;
}

void Herramientas_Principales_Salida(String sNum,String sActi){ //1 activo o 0 Desactivado
  int nNum = sNum.toInt();
  int nActi = sActi.toInt();
  String sVlr = "SM";
  if (nActi >= 2){
    nNum=0;
    Serial.print(sVlr); 
    Serial.println(";X"); 
  }
    switch(nNum){
      case 0:
          break;
      case 1:
          SalidaITwoC(122,"1",sActi,sVlr);
          break;
      case 2:
          SalidaITwoC(123,"1",sActi,sVlr);
          break;
      case 3:
          SalidaITwoC(124,"1",sActi,sVlr);
          break;
      default:
          Serial.print(sVlr);
          Serial.println(";X"); 
          break;
      
    }

  return;
}

void Herramientas_principal_entradas(String sCarta,String sToolPx){
      String sDtsEnx = "EM;"+sToolPx;
      int nCarta = sCarta.toInt();
      I2CTX(nCarta,sDtsEnx);
      CicloDato(nCarta,"EM;"+sToolPx);
   return;
}
  
