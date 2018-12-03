void SalidaITwoC(String sCartaS, String sToolS,String sActivoS){
  int nCartaS = sCartaS.toInt();
  String sDtsS = "S;"+sToolS+";"+sActivoS+";";
if(sToolS == " " or sActivoS == " " or sToolS == "" or sActivoS == "" or nCartaS < 120){
    Serial.println("X");  }
else {
  I2CTX(nCartaS,sDtsS);
  CicloDato(nCartaS);  
  }
  return;
}
void EntradaITwoC(String sCartaE, String sToolE){
  int nCartaE = sCartaE.toInt();
  String sDtsE = "E;"+sToolE+";";
if(sToolE == " " or sToolE == "" or nCartaE < 120){
    Serial.println("X");  }
else {
  I2CTX(nCartaE,sDtsE);
  CicloDato(nCartaE);  
  }
  return;
}

void CicloDato(int nComp){
  boolean bCicloI2c = true;
  String sStrI2c2="";
  String sIdI2c2="";
  char inCharRc2=' ';
  String sStrRc2="";
  int nIdI2c2 = 0;
    while(bCicloI2c){
    if(I2Completdo){
        I2Completdo=false;
        sIdI2c2   = getValor(sDatI2c,';',0);
        sStrI2c2  = getValor(sDatI2c,';',1);
        nIdI2c2 = sIdI2c2.toInt(); 
        if(nIdI2c2 == nComp){
            Serial.println(sStrI2c2); 
            sStrI2c2="";
            bCicloI2c = false;
        }
     }     
      delay(1); 
    }
    return;
}


