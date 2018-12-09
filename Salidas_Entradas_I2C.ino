void SalidaITwoC(String sCartaS, String sToolS,String sActivoS,String sVarible){
  int nCartaS = sCartaS.toInt();
  String sDtsS = sVarible+";"+sToolS+";"+sActivoS;
if(sToolS == " " or sActivoS == " " or sToolS == "" or sActivoS == "" or nCartaS < 120 or nCartaS == 0){
    Serial.print(sToolS); 
    Serial.println("X");  }
else {
  I2CTX(nCartaS,sDtsS);
  CicloDato(nCartaS,sVarible+";"+sToolS);  
  }
  return;
}
void EntradaITwoC(String sCartaE, String sToolE){
  int nCartaE = sCartaE.toInt();
  String sDtsE = "EH;"+sCartaE+";"+sToolE;
if(sToolE == " " or sToolE == "" or nCartaE < 120 or nCartaE == 0){
  Serial.print(sToolE); 
  Serial.println(";X");  }
else {
  I2CTX(nCartaE,sDtsE);
  CicloDato(nCartaE,"EH;"+sCartaE);  
  }
  return;
}

void CicloDato(int nComp,String sQs){
  boolean bCicloI2c = true;
  String sStrI2c2="";
  String sStrI2c3="";
  String sIdI2c2="";
  char inCharR = ' ';
  int nIdI2c2 = 0;   
    while(bCicloI2c){
      if(I2Completdo){
        I2Completdo=false;
        sIdI2c2 = getValor(sDatI2c,';',0);
        sStrI2c2 = getValor(sDatI2c,';',1);
        sStrI2c3 = getValor(sDatI2c,';',2);
        nIdI2c2 = sIdI2c2.toInt(); 
        if(nIdI2c2 == nComp){
            Serial.print(sStrI2c2); 
            Serial.print(";"); 
            Serial.println(sStrI2c3);
            sIdI2c2=""; 
            sStrI2c2="";
            sStrI2c3="";
            sDatI2c="";
            bCicloI2c = false;
            break;
        }
      }   
      inCharR = (char)Serial.read();//  cancelar no debe llevar salto de linea
      if (inCharR == 'X'){
            Serial.print(sQs);
            Serial.println(";X");
            I2CTX(nComp,"X");
            inCharR=' ';
            I2Completdo = false;
            sDatI2c = "";
            bCicloI2c = false;        
          }
      delay(1); 
    }
    return;
}
