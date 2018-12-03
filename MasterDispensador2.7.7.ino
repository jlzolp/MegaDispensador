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
                Cartuchos("1",sCartucho,sCantidad);
                //Buzzer(0);
                BuzzerITwoC("0","0"); //Activacion y Tiempo
                break;
        case 4:
                //Serial.println("Surtir = 1 a 120");
                Cartuchos("2",sCartucho,sCantidad);
                break;
        case 5:       
                //Serial.println("nCartucho = 1-VERDE,2-AMARILLO,3-ROJO");
                //Serial.println("nCantidad = 0-Apgado 1-Encender");
                TorretaITwoC(sCartucho,sCantidad);
                break;
        case 6: 
                //Serial.println("nCartucho = ACtivo");     
                //Serial.println("Sonido nCantidad = Tiempo ");
                BuzzerITwoC(sCartucho,sCantidad);
                break;
        case 7:
                //Serial.println("Herramientas = 1 ... 18,Abrir 1 Cerrar 0 ");
                Herramientas_Pines_Salida(sCartucho,sCantidad);
                break;   
        case 8:       
                //Serial.println("Herramientas = 1 ... 18,Estado Regresa"  );
                //Serial.println("Envia un String por serial que es X o E "  );
                Herramientas_Pines_Entrada(sCartucho);
                break; 
        case 9:       
                //Serial.println("Herramientas de  ");
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

