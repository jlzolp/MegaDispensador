void Herramientas_Pines_Salida(String sHerr,String sActivo){ //1 activo o 0 Desactivado
  int nRef = sHerr.toInt();
  if(sHerr == " " or  sHerr == "" ){
    Serial.println("X");  }
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
            break;
    }
  }
  return;
}
void Herramientas_Entrada(String sCual,String sToolPe){
  int nRef = sToolPe.toInt();
  if(sToolPe == " " or  sToolPe == "" ){
    Serial.println("X");  }
  else {
    if (sCual == "1" ){
        Herramientas_Principal_Entrada(sToolPe);
    }
    if (sCual == "1" ){
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
          //SalidaAll(122,sHerr,sEstad);
            EntradaITwoC(122,sToolPe);
          //CicloDato(122);
          break;
        case 4:
          //SalidaAll(122,sHerr,sEstad);
            EntradaITwoC(122,sToolPe);
          //CicloDato(122);
            break;
        case 5:
          //SalidaAll(122,sHerr,sEstad);
            EntradaITwoC(122,sToolPe);
          //CicloDato(122);
            break; 
        case 6:
          //SalidaAll(122,sHerr,sEstad);
            EntradaITwoC(122,sToolPe);
            break;
        case 7:
          //SalidaAll(123,sHerr,sEstad);
            EntradaITwoC(123,sToolPe);
          //CicloDato(123);
            break;
        case 8:
          //SalidaAll(123,sHerr,sEstad);
            EntradaITwoC(123,sToolPe);
          //CicloDato(123);
            break;
        case 9:
          //SalidaAll(123,sHerr,sEstad);
            EntradaITwoC(123,sToolPe);
          //CicloDato(123);
            break;
        case 10:
          //SalidaAll(123,sHerr,sEstad);
            EntradaITwoC(123,sToolPe);
          //CicloDato(123);
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
            break;
    }
    }else{
        Serial.println("X");
    }
  }
  return;
}
