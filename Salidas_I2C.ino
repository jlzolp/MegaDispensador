void SalidaAll(int nCarta, String Tool,String Status){
String sDts2 = Tool+";"+Status+";";
if(Tool == " " or Status == " " or Tool == "" or Status == "" or nCarta > 120){
    Serial.println("X");  }
else {
  I2CTX(nCarta,sDts2);
  CicloDato(nCarta);  
  }
  return;
}

void CicloDato(int nComp){
  boolean bCiclo2 = true;
  String sStrI2c2="";
  String sIdI2c2="";
  char inCharRc2=' ';
  String sStrRc2="";
  int nIdI2c2 = 0;
    while(bCiclo2){
    if(I2Completdo){
        I2Completdo=false;
        sIdI2c2   = getValor(sDatI2c,';',0);
        sStrI2c2  = getValor(sDatI2c,';',1);
        nIdI2c2 = sIdI2c2.toInt(); 
        if(nIdI2c2 == nComp){
            Serial.println(sStrI2c2); 
            sStrI2c2="";
            bCiclo2 = false;
        }
     }     
     /* inCharRc2 = (char)Serial.read();//  cancelar no debe llevar salto de linea
      if (inCharRc2 == 'X'){
          Serial.println(inCharRc2);
          inCharRc2=' ';
          stringComplete = false;
          inputString = "";
          bCiclo2 = false;
      }*/
      delay(1); 
    }
    return;
}

void  SalidaTorreta(String sValor,int Statuss){
  String sDts3= sValor+";"+Statuss+";";
  int nValor = sValor.toInt();
    switch (nValor) {
      case 0:
          break;
      case 1:
         I2CTX(121,sDts3);
         CicloDato(121);
         break;
      case 2:
         break;
      case 3:
         break;
      case 4:
         break;
      default:
         break;
    }
    return;
}

