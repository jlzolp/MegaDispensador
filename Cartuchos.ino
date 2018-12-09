void Cartuchos(String sQHacer,String sCart,String sCant){
boolean bCiclo = true;
String sStrI2c="";
String sIdI2c="";
char inCharRc=' ';
String sStrRc="";
int nCount = 0;
int nCartucho = sCart.toInt();
int nCantidad = sCant.toInt();
//String sDts = sQHacer+";"+sCart+";"+sCant+";";
String sDts = sQHacer+";"+sCant+";";
if(sCart == " " or sCant == " " or sCart == "" or sCant == "" ){
    Serial.print(sCart);
    Serial.println(";X");  }
else {
  I2CTX(nCartucho,sDts);
  while(bCiclo){
     
    if(I2Completdo){
        I2Completdo=false;
        sIdI2c   = getValor(sDatI2c,';',0);
        sStrI2c  = getValor(sDatI2c,';',1);
        if(sIdI2c == sCart){
          if(sStrI2c== "X"){
            sStrI2c="";
            //sIdI2c="";
            Serial.print(sIdI2c);
            Serial.print(";");
            Serial.println(nCount);
            bCiclo = false; 
          }      
          if (sStrI2c == "E"){
            BuzzerITwoC("0","500");
            sStrI2c="";
            sDatI2c="";
            nCantidad = nCantidad-1;
            nCount = nCount + 1;
          }
        }
      }
      if (nCantidad <= 0){
          sDatI2c="";
          Serial.print(sIdI2c);
          Serial.print(";");
          Serial.println(nCount);
          bCiclo = false;
      }      
      inCharRc = (char)Serial.read();
      if (inCharRc == 'X'){
          if (sIdI2c ==""){
            Serial.print(sCart);
            Serial.print(";");
            Serial.println(nCount);           
          }else {
            Serial.print(sIdI2c);
            Serial.print(";");
            Serial.println(nCount);        
          }
          I2CTX(nCartucho,"X");
          inCharRc=' ';
          stringComplete = false;
          inputString = "";
          bCiclo = false;
      }
      delay(1);
    }
  }
  return; 
}



