#include <Wire.h>
#include <String.h>
#include <SPI.h>
//#include <SD.h>                           //desconocido no se esta usando
#include <Adafruit_Fingerprint.h>
#include <SoftwareSerial.h>                   
#define DEBUG(a) Serial.println(a);

SoftwareSerial mySerial(2, 3);
Adafruit_Fingerprint finger = Adafruit_Fingerprint(&mySerial);
uint8_t id;


//////////////******** variables de entrada de datos String
boolean stringComplete = false;
String inputString = "";

boolean I2Completdo = false;
String sDatI2c = "";


//////////////////*********vairables de control
String sAccion    = "";
String sCartucho  = "";
String sCantidad  = "";
//String sID        = "";
//String sTool      = "";

int nAccion   = 0;

//////////*****************************\\\\\\\\\\\\\\\\\\\\

void setup(){
  Wire.begin(0);
  Wire.onReceive(receiveEvent);
  Serial.begin(9600);
  finger.begin(57600);
  Configuracion();
  Serial.println("1");
} 
void loop(){
  if (stringComplete) {
    //Serial.println(inputString);
    stringComplete = false;
    sAccion   = getValor(inputString, ';', 0);
    sCartucho = getValor(inputString, ';', 1); 
    sCantidad = getValor(inputString, ';', 2); 
    
    nAccion   = sAccion.toInt(); 
    //cancelar no debe llevar salto de linea.
      switch (nAccion) {
        case 0:
                //Serial.println("0");        
                break;
        case 1:
                grabar_huella(sCartucho);
                break;
        case 2:
                leer_huella();
                break;
        case 3:  
                //Serial.println("Dispensador =  1 a 120");
                //Serial.println("Regresa datos por 3 condiciones ");
                //Serial.println("1.- Cancelado por cartucho Regresa # CArtucho,Catidad DIspensada");
                //Serial.println("2.- Cuando ES correcto Envia # CArtucho,Cantidad Dispensada ");
                //Serial.println("3.- Cancelado pro el usuario Envia # CArtucho, CAtidad Dispensada ");
                Cartuchos("1",sCartucho,sCantidad);// le dices que Cartucho va usarse y la cantidad que se va dispensar
                break;
        case 4:
                //Serial.println("Surtir = 1 a 120");
                //Serial.println("Regresa datos por 3 condiciones ");
                //Serial.println("1.- Cancelado por cartucho Regresa # CArtucho;Catidad Almacenar");
                //Serial.println("2.- Cuando es correcto Envia # CArtucho;Cantidad Almacenar ");
                //Serial.println("3.- Cancelado por el usuario Envia # CArtucho, CAtidad Almacenar ");
                Cartuchos("2",sCartucho,sCantidad);
                break;
        case 5:       
                //Serial.println("sCartucho = 1-VERDE,2-AMARILLO,3-ROJO, 4- ");
                //Serial.println("sCantidad = 0-Apgado 1-Encender");
                //Serial.println("Regresa Este Le regresa T de #;encendida o Apagada");
                //Serial.println("si el usuario cancela entonces el regresa T de #;X  Recuerda que para cancelar solo debes enviar X sin "/n" ");
                TorretaITwoC(sCartucho,sCantidad);
                break;
        case 6: 
                //Serial.println("Sonido nCantidad = Tiempo ");
                //Serial.println("Regresa Este Le regresa B1;1");
                //Serial.println("si el usuario cancela entonces el regresa B1;X  Recuerda que para cancelar solo debes enviar X sin "/n" ");
                BuzzerITwoC("1",sCantidad);
                break;
        case 7:     
                //Serial.println("nCartucho = cual de las dos herramientas son primncipal o secundaria");   
                //Serial.println("Mediciones 1 al 3 ,Herramientas = 1 ... 18"  );
                //Serial.println("va regresar una cadenas "  );
                Herramientas_Entrada(sCartucho,sCantidad);
                break; 
        case 8:
                //Serial.println("Herramientas de  ");
                Herramientas_Principales_Salida(sCartucho,sCantidad);
                break; 
        case 9:       
                //Serial.println("Herramientas = 1 ... 18,Abrir 1 Cerrar 0 ");
                Herramientas_Pines_Salida(sCartucho,sCantidad);
                break;                    
        case 10:
                //Serial.println("Reiniciar");
                delay(100);
                asm("jmp 0x0000");
                break;
         default:
                 Serial.println("Error");
                 break;
    }
    sAccion="";
    sCartucho="";
    sCantidad="";
    inputString = "";
    sDatI2c = ""; 
  }
}

