/////////*************\\\\\\\\\\\\\
//aqui se va configurar 
//la Torreta, el buzzer, el Regreso del tubo
void SalidasIc(String sCart2,String sCant2){
boolean bCiclo2 = true;
String sStrI2c2="";
String sIdI2c2="";
char inCharRc2=' ';
String sStrRc2="";
int nCart2 = 121;
String sDts2 = sCart2+";"+sCant2+";1000; ;";

if(sCart2 == " " or sCant2 == " " or sCart2 == "" or sCant2 == "" ){
    Serial.println("X");  }
else {
  //Serial.println(nCartucho);
  I2CTX(nCart2,sDts2);
  while(bCiclo2){
    if(I2Completdo){
        I2Completdo=false;
        sIdI2c2   = getValor(sDatI2c,';',0);
        sStrI2c2  = getValor(sDatI2c,';',1);
        if(sIdI2c2 == sCart2){
          if(sStrI2c2== "X"){
            sStrI2c2="";
            Serial.println("X"); 
            bCiclo2 = false; 
          }      
          if (sStrI2c2 == "E"){
            sStrI2c2="";
          }
        }
        /*else
        {
          Serial.println("no es"); 
        }*/
     }
      if (nCantidad <= 0){
          sDatI2c="";
          Serial.println("E");
          bCiclo2 = false;
      }      
      inCharRc2 = (char)Serial.read();//  cancelar no debe llevar salto de linea
      if (inCharRc2 == 'X'){
          Serial.println("E");
          inCharRc2=' ';
          stringComplete = false;
          inputString = "";
          bCiclo2 = false;
      }
      delay(1); 
    }
  }
  return;
}

