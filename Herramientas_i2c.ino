void Herramientas_Pines_Salida(String sHerr,String sEstad){
  int nRef = sHerr.toInt();
  switch (nRef) {
    case 0:
          break;
    case 1:
          SalidaAll(122,sHerr,sEstad);
          break;
    case 2:
          SalidaAll(122,sHerr,sEstad);
          break;
    case 3:
          SalidaAll(122,sHerr,sEstad);
          break;
    case 4:
          SalidaAll(122,sHerr,sEstad);
          break;
    case 5:
          SalidaAll(122,sHerr,sEstad);
          break; 
    case 6:
          SalidaAll(122,sHerr,sEstad);
          break;
    case 7:
          SalidaAll(123,sHerr,sEstad);
          break;
    case 8:
          SalidaAll(123,sHerr,sEstad);
          break;
    case 9:
          SalidaAll(123,sHerr,sEstad);
          break;
    case 10:
          SalidaAll(123,sHerr,sEstad);
          break;
    case 11:
          SalidaAll(123,sHerr,sEstad);
          break; 
    case 12:
          SalidaAll(123,sHerr,sEstad);
          break;
    case 13:
          SalidaAll(124,sHerr,sEstad);
          break;
    case 14:
          SalidaAll(124,sHerr,sEstad);
          break;
    case 15:
          SalidaAll(124,sHerr,sEstad);
          break;
    case 16:
          SalidaAll(124,sHerr,sEstad);
          break;
    case 17:
          SalidaAll(124,sHerr,sEstad);
          break;  
     case 18:
          SalidaAll(124,sHerr,sEstad);
          break; 
    default:
            break;
  }
  return;
}
void Herramientas_Pines_Entrada(String sHert){
  int nRef = sHert.toInt();
  String sDtHer = sHert+";";
  if(sHert == " " or  sHert == "" ){
    Serial.println("X");  }
  else {
    switch (nRef) {
    case 0:
          break;
    case 1:
          I2CTX(122,sDtHer);
          CicloDato(122);
          break;
    case 2:
          //SalidaAll(122,sHert,sEstad);
          I2CTX(122,sDtHer);
          CicloDato(122);
          break;
    case 3:
          //SalidaAll(122,sHerr,sEstad);
          I2CTX(122,sDtHer);
          CicloDato(122);
          break;
    case 4:
          //SalidaAll(122,sHerr,sEstad);
          I2CTX(122,sDtHer);
          CicloDato(122);
          break;
    case 5:
          //SalidaAll(122,sHerr,sEstad);
          I2CTX(122,sDtHer);
          CicloDato(122);
          break; 
    case 6:
          //SalidaAll(122,sHerr,sEstad);
          I2CTX(122,sDtHer);
          CicloDato(122);
          break;
    case 7:
          //SalidaAll(123,sHerr,sEstad);
          I2CTX(123,sDtHer);
          CicloDato(123);
          break;
    case 8:
          //SalidaAll(123,sHerr,sEstad);
          I2CTX(123,sDtHer);
          CicloDato(123);
          break;
    case 9:
          //SalidaAll(123,sHerr,sEstad);
          I2CTX(123,sDtHer);
          CicloDato(123);
          break;
    case 10:
          //SalidaAll(123,sHerr,sEstad);
          I2CTX(123,sDtHer);
          CicloDato(123);
          break;
    case 11:
          //SalidaAll(123,sHerr,sEstad);
          I2CTX(123,sDtHer);
          CicloDato(123);
          break; 
    case 12:
          //SalidaAll(123,sHerr,sEstad);
          I2CTX(123,sDtHer);
          CicloDato(123);
          break;
    case 13:
          //SalidaAll(124,sHerr,sEstad);
          I2CTX(124,sDtHer);
          CicloDato(124);
          break;
    case 14:
          //SalidaAll(124,sHerr,sEstad);
          I2CTX(124,sDtHer);
          CicloDato(124);
          break;
    case 15:
          //SalidaAll(124,sHerr,sEstad);
          I2CTX(124,sDtHer);
          CicloDato(124);
          break;
    case 16:
         // SalidaAll(124,sHerr,sEstad);
          I2CTX(124,sDtHer);
          CicloDato(124);
          break;
    case 17:
          //SalidaAll(124,sHerr,sEstad);
          I2CTX(124,sDtHer);
          CicloDato(124);
          break;  
     case 18:
          //SalidaAll(124,sHerr,sEstad);
          I2CTX(124,sDtHer);
          CicloDato(124);
          break; 
    default:
            break;
  }
  }

  return;
}


