void Cartuchos(String sQHacer,String sCart,String sCant){
boolean bCiclo = true;
String sStrI2c="";
char inCharRc=' ';
String sStrRc="";
int nCount = 0;
String sDts = sQHacer+";"+sCart+";"+sCant+";1000; ;";
if(sCartucho == " " or sCantidad == " " or sCartucho == "" or sCantidad == "" ){
    Serial.println("X");  }
else {
  I2CTX(nCartucho,sDts);
  Salidas(nBuzzer,0);
  while(bCiclo){
    if(I2Completdo){
        I2Completdo=false;
        sStrI2c   = getValor(sDatI2c, ';', 0);
        if (sStrI2c== "X"){
          sStrI2c="";
          Serial.println(nCount); 
          bCiclo = false; 
        }
        
        if (sStrI2c == "E"){
          Buffer(1);
          //Salidas(nBuzzer,1);
          sStrI2c="";
          nCantidad = nCantidad-1;
          nCount = nCount + 1;
          delay(500);
        }
    }
      if (nCantidad <= 0){
          //stringComplete = false;
          //inputString = "";
          sDatI2c="";
          Serial.println(nCount);
          bCiclo = false;
      }      
      inCharRc = (char)Serial.read();//  cancelar no debe llevar salto de linea
      if (inCharRc == 'X'){
          Serial.println(nCount);
          inCharRc=' ';
          //bCancelar=false;
          stringComplete = false;
          inputString = "";
          bCiclo = false;
      }
      //if(stringComplete){
      //   stringComplete=false;
      //   sStrRc=getValor(inputString, ';', 0);
      //  if (sStrRc== "X"){
      //      sStrRc="";
      //      inputString="";
      //      Serial.println(nCount); 
      //      bCiclo = true; 
      //  }
      //}
      delay(1); 
      Buffer(0);
    }
  }
  return; 
}



