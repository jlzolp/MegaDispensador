void TorretaITwoC(String sNumer,String sActivo){
  int nValor = sNumer.toInt();
  int nActv =  sActivo.toInt();
  if(sNumer == " " or  sNumer == "" or nActv >= 3){
    Serial.print(sNumer); 
    Serial.println("X");  }
  else {
     SalidaITwoC(121,sNumer,sActivo);
    }
  return;
}
void BuzzerITwoC(String sActivo,String sTempo){
    SalidaITwoC(121,sTempo,sActivo);
}

void Herramientas_Principales_Salida(String sNum,String sActivo){ //1 activo o 0 Desactivado
  if(sNum == " " or  sNum == "" ){
    Serial.println("X");  }
  else {
       SalidaITwoC(121,sNum,sActivo);
  }
  return;
}
void Herramientas_Principal_Entrada(String sNumr){
  if(sNumr == " " or  sNumr == "" ){
    Serial.println("X");  }
  else {
    if(sNumr == 1 or sNumr == 2 or sNumr == 3){
            EntradaITwoC(121,sNumr); 
    }
  }
  return;
}
