void Cartuchos(String sQHacer,String sCart,String sCant){
boolean bCiclo = true;
String sStrI2c="";
String sIdI2c="";
char inCharRc=' ';
String sStrRc="";
int nCount = 0;
int nCartucho = sCart.toInt();
int nCantidad = sCant.toInt();
String sDts = sQHacer+";"+sCart+";"+sCant+";";

if(sCart == " " or sCant == " " or sCart == "" or sCant == "" ){
    Serial.println("X");  }
else {
  //Serial.println(nCartucho);
  I2CTX(nCartucho,sDts);
  //Salidas(5,0);
  while(bCiclo){
    if(I2Completdo){
        I2Completdo=false;
        sIdI2c   = getValor(sDatI2c,';',0);
        sStrI2c  = getValor(sDatI2c,';',1);
        if(sIdI2c == sCart){
          if(sStrI2c== "X"){
            sStrI2c="";
            Serial.println(nCount); 
            bCiclo = false; 
          }      
          if (sStrI2c == "E"){
            BuzzerITwoC("1","0");
            //Buzzer(1);
            sStrI2c="";
            nCantidad = nCantidad-1;
            nCount = nCount + 1;
            delay(500);
          }
        }
        /*else
        {
          Serial.println("no es"); 
        }*/
    }
      if (nCantidad <= 0){
          sDatI2c="";
          Serial.println(nCount);
          bCiclo = false;
      }      
      inCharRc = (char)Serial.read();//  cancelar no debe llevar salto de linea
      if (inCharRc == 'X'){
          Serial.println(nCount);
          I2CTX(nCartucho,"X");
          inCharRc=' ';
          stringComplete = false;
          inputString = "";
          bCiclo = false;
      }
      delay(1); 
      //Buzzer(0);
      BuzzerITwoC("0","0"); 
    }
  }
  return; 
}



