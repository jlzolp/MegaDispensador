void Herramientas_Pines_Salida(String sHerr,String sActivo){ //1 activo o 0 Desactivado
  int nRef  = sHerr.toInt();
  int nActv = sActivo.toInt();
  
  if(sHerr == " " or  sHerr == "" or nActv >= 3){
    Serial.print(sHerr);  // un error Enviar que 
    Serial.println(";X");  }
  else {
  switch (nRef) {
    case 0:
          break;
    case 1:
          SalidaITwoC(122,sHerr,sActivo);
          break;
    case 2:
          SalidaITwoC(122,sHerr,sActivo);
          break;
    case 3:
          SalidaITwoC(122,sHerr,sActivo);
          break;
    case 4:
          SalidaITwoC(122,sHerr,sActivo);
          break;
    case 5:
          SalidaITwoC(122,sHerr,sActivo);
          break; 
    case 6:
          SalidaITwoC(122,sHerr,sActivo);
          break;
    case 7:
          SalidaITwoC(123,sHerr,sActivo);
          break;
    case 8:
          SalidaITwoC(123,sHerr,sActivo);
          break;
    case 9:
          SalidaITwoC(123,sHerr,sActivo);
          break;
    case 10:
          SalidaITwoC(123,sHerr,sActivo);
          break;
    case 11:
          SalidaITwoC(123,sHerr,sActivo);
          break; 
    case 12:
          SalidaITwoC(123,sHerr,sActivo);
          break;
    case 13:
          SalidaITwoC(124,sHerr,sActivo);
          break;
    case 14:
          SalidaITwoC(124,sHerr,sActivo);
          break;
    case 15:
          SalidaITwoC(124,sHerr,sActivo);
          break;
    case 16:
          SalidaITwoC(124,sHerr,sActivo);
          break;
    case 17:
          SalidaITwoC(124,sHerr,sActivo);
          break;  
     case 18:
          SalidaITwoC(124,sHerr,sActivo);
          break; 
    default:
          Serial.print(sHerr);
          Serial.println(";X");
          break;
    }
  }
  return;
}
void Herramientas_Entrada(String sCual,String sToolPe){
  int nRef  = sToolPe.toInt();
  int nCual =   sCual.toInt();
  if(sToolPe == " " or  sToolPe == "" or nCual >= 3 ){
    Serial.print(sToolPe);    
    Serial.println(";X");  }
  else {
    if (sCual == "1" ){
        Herramientas_Principal_Entrada(sToolPe);
    }
    if (sCual == "2" ){
      switch (nRef) {
        case 0:
            break;
        case 1:
            EntradaITwoC(122,sToolPe);
            break;
        case 2:
            EntradaITwoC(122,sToolPe);
            break;
        case 3:
            EntradaITwoC(122,sToolPe);
          break;
        case 4:
            EntradaITwoC(122,sToolPe);
            break;
        case 5:
            EntradaITwoC(122,sToolPe);
            break; 
        case 6:
            EntradaITwoC(122,sToolPe);
            break;
        case 7:
            EntradaITwoC(123,sToolPe);
            break;
        case 8:
            EntradaITwoC(123,sToolPe);
            break;
        case 9:
            EntradaITwoC(123,sToolPe);
            break;
        case 10:
            EntradaITwoC(123,sToolPe);
            break;
        case 11:
            EntradaITwoC(123,sToolPe);
            break; 
        case 12:
            EntradaITwoC(123,sToolPe);
            break;
        case 13:
            EntradaITwoC(124,sToolPe);
            break;
        case 14:
            EntradaITwoC(124,sToolPe);
            break;
        case 15:
            EntradaITwoC(124,sToolPe);
            break;
        case 16:
            EntradaITwoC(124,sToolPe);
            break;
        case 17:
            EntradaITwoC(124,sToolPe);
            break;  
        case 18:
            EntradaITwoC(124,sToolPe);
            break; 
        default:
            Serial.print(sToolPe);
            Serial.println(";X");
            break;
      }
    }
  }
  return;
}
