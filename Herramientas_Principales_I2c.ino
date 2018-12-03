void TorretaITwoC(String sNumer,String sActivo){
  int nValor = sNumer.toInt();
  if(sNumer == " " or  sNumer == "" ){
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
       EntradaITwoC(121,sNumr);
  }
  return;
}
