void Herramientas_Pines_Salida(String sHerr,String sActivo){ //1 activo o 0 Desactivado
  int nRef  = sHerr.toInt();
  int nActv = sActivo.toInt();
  String sHLt = "ST";
  if (nActv >=2){
    nRef = 0;
    Serial.print("ST");
    Serial.println(";X");
  }
  switch (nRef) {
    case 0:
          break;
    case 1:
          SalidaITwoC(125,sHerr,sActivo,sHLt);
          break;
    case 2:
          SalidaITwoC(125,sHerr,sActivo,sHLt,sHLt);
          break;
    case 3:
          SalidaITwoC(125,sHerr,sActivo,sHLt);
          break;
    case 4:
          SalidaITwoC(125,sHerr,sActivo,sHLt);
          break;
    case 5:
          SalidaITwoC(125,sHerr,sActivo,sHLt);
          break; 
    case 6:
          SalidaITwoC(125,sHerr,sActivo,sHLt);
          break;
    case 7:
          SalidaITwoC(126,sHerr,sActivo,sHLt);
          break;
    case 8:
          SalidaITwoC(126,sHerr,sActivo,sHLt);
          break;
    case 9:
          SalidaITwoC(126,sHerr,sActivo,sHLt);
          break;
    case 10:
          SalidaITwoC(126,sHerr,sActivo,sHLt);
          break;
    case 11:
          SalidaITwoC(126,sHerr,sActivo,sHLt);
          break; 
    case 12:
          SalidaITwoC(126,sHerr,sActivo,sHLt);
          break;
    case 13:
          SalidaITwoC(127,sHerr,sActivo,sHLt);
          break;
    case 14:
          SalidaITwoC(127,sHerr,sActivo,sHLt);
          break;
    case 15:
          SalidaITwoC(127,sHerr,sActivo,sHLt);
          break;
    case 16:
          SalidaITwoC(127,sHerr,sActivo,sHLt);
          break;
    case 17:
          SalidaITwoC(127,sHerr,sActivo,sHLt);
          break;  
     case 18:
          SalidaITwoC(127,sHerr,sActivo,sHLt);
          break; 
    default:
          Serial.print("ST"); 
          Serial.println(";X"); 
          break;
    }
  return;
}
void Herramientas_Entrada(String sCual,String sToolPe){
  int nRef  = sToolPe.toInt();
  int nCual =   sCual.toInt();
  String sDtsEn="";
  switch (nCual) {
    case 0:
        break;
    case 1:
        switch (nRef) {
          case 0:
            break;
          case 1:
            Herramientas_principal_entradas(122,sToolPe);
            break;
          case 2:
            Herramientas_principal_entradas(123,sToolPe);
            break;
          case 3:
            Herramientas_principal_entradas(124,sToolPe);
            break;
          default :
            Serial.print("EM");
            Serial.println(";X");
            break;
          }
    case 2:
      switch (nRef) {
        case 0:
            break;
        case 1:
            EntradaITwoC(125,sToolPe);
            break;
        case 2:
            EntradaITwoC(125,sToolPe);
            break;
        case 3:
            EntradaITwoC(125,sToolPe);
          break;
        case 4:
            EntradaITwoC(125,sToolPe);
            break;
        case 5:
            EntradaITwoC(125,sToolPe);
            break; 
        case 6:
            EntradaITwoC(125,sToolPe);
            break;
        case 7:
            EntradaITwoC(126,sToolPe);
            break;
        case 8:
            EntradaITwoC(126,sToolPe);
            break;
        case 9:
            EntradaITwoC(126,sToolPe);
            break;
        case 10:
            EntradaITwoC(126,sToolPe);
            break;
        case 11:
            EntradaITwoC(126,sToolPe);
            break; 
        case 12:
            EntradaITwoC(126,sToolPe);
            break;
        case 13:
            EntradaITwoC(127,sToolPe);
            break;
        case 14:
            EntradaITwoC(127,sToolPe);
            break;
        case 15:
            EntradaITwoC(127,sToolPe);
            break;
        case 16:
            EntradaITwoC(127,sToolPe);
            break;
        case 17:
            EntradaITwoC(127,sToolPe);
            break;  
        case 18:
            EntradaITwoC(127,sToolPe);
            break; 
        default:
            Serial.print("EH");
            Serial.println(";X");
            break;
      }
    default:
            Serial.print("E");
            Serial.println(";X");
        break;
  }
  return;
}
