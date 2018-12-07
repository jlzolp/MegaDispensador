void TorretaITwoC(String sNumer,String sActiv){
  int nValor = sNumer.toInt();
  int nActv =  sActiv.toInt();
  String  sDtsT = "T;"+sNumer+";"+sActiv+";";
  if(sNumer == " " or  sNumer == "" or nActv >= 3){
    Serial.print(sNumer); 
    Serial.println(";X");  }
  else {
      I2CTX(121,sDtsT); 
      CicloDato(121); 
    }
  return;
}
void BuzzerITwoC(String sActivo,String sTempo){
    //SalidaITwoC(121,sTempo,sActivo);
    String sDtsB;
    int nTempo = sTempo.toInt();
if(sActivo == " " or sTempo == " " or sActivo == "" or sTempo == ""){
    Serial.print("B;"); 
    Serial.println("X");  }
else {
      sDtsB = "B;"+sActivo+";"+sTempo+";";
      I2CTX(121,sDtsB); 
  }
  return;
}

void Herramientas_Principales_Salida(String sNum,String sActi){ //1 activo o 0 Desactivado
  int nNum = sNum.toInt();
  int nActi = sActi.toInt();
  if (nActi >= 2){
    nNum=0;
    Serial.print("P;");
    Serial.print(sNum); 
    Serial.println(";X"); 
  }
    switch(nNum){
      case 0:
          break;
      case 1:
          SalidaITwoC(125,"1",sActi);
          break;
      case 2:
          SalidaITwoC(126,"1",sActi);
          break;
      case 3:
          SalidaITwoC(127,"1",sActi);
          break;
      default:
          Serial.print("P;");
          Serial.print(sNum); 
          Serial.println(";X"); 
          break;
      
    }

  return;
}

void Herramientas_principal_entradas(String sCarta,String sToolPx){
      String sDtsEnx = "E;"+sToolPx+";";
      int nCarta = sCarta.toInt();
      I2CTX(nCarta,sDtsEnx);
      CicloDato(nCarta);
   return;
}
  
