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

///Variables I2C
String sAccI2c= "";
String sCantI2c = "";
String sSopI2c = "";
String sTimI2c= "";

int nAccI2c  = 0;
int nCantI2c = 0;
int nSopI2c  = 0;
int nTimI2c  = 0;

//////////////////*********vairables de control
String sAccion    = "";
String sCartucho  = "";
String sCantidad  = "";
String sID        = "";
String sTool      = "";

int nAccion   = 0;
int nCartucho = 0;
int nCantidad = 0;
int nID       = 0;
int nTool     = 0;

//******************pines de Entradas y Salidas ********----/////////////////////////////
int nLedRojo = 12;
int nLedAmarillo = 12;
int nLedVerde = 12;
int nBuzzer = 12;
//////////*****************************\\\\\\\\\\\\\\\\\\\\

void setup(){
  Wire.begin(0);
  Wire.onReceive(receiveEvent);
  Serial.begin(9600);
  finger.begin(57600);
  Configuracion();
  Serial.println("1234.......");
} 
void loop(){
  if (stringComplete) {
    //Serial.println(inputString);
    stringComplete = false;
    sAccion   = getValor(inputString, ';', 0);
    sCartucho = getValor(inputString, ';', 1); 
    sCantidad = getValor(inputString, ';', 2); 
    
    nAccion   = sAccion.toInt(); 
    nCartucho = sCartucho.toInt();       
    nCantidad = sCantidad.toInt();
    //cancelar no debe llevar salto de linea.
      switch (nAccion) {
        case 0:
                Serial.println("Case 0");        
                break;
        case 1:
                grabar_huella(nCartucho);
                break;
        case 2:
                leer_huella();
                break;
        case 3:  
                Serial.println("Dispensador = 1");
                Cartuchos("1",sCartucho,sCantidad);
                Buzzer(0);
                break;
        case 4:
                Serial.println("Surtir = 2");
                 Cartuchos("2",sCartucho,sCantidad);
                break;
        case 5:       
                Serial.println("nCartucho = 1-VERDE,2-AMARILLO,3-ROJO");
                Serial.println("nCantidad = 0-Apgado 1-Encender");
                Salidas(nCartucho,nCantidad); // 
                break;
        case 6:      
                Serial.println("Sonido nCantidad = Tiempo ");
                BuzzerTimer(nCantidad);
                //digitalWrite(12,LOW);
                break;
        case 7:
                Serial.println("Herramienta ");
                break;   
        case 8:       
                Serial.println("Case 8");
                break; 
        case 9:       
                Serial.println("Case 9 ");
                break;                    
        case 10:
                Serial.println("Reiniciar");
                delay(100);
                asm("jmp 0x0000");
                break;
         default:
                 Serial.println("Error");
                 break;
    }
    sAccion="";
    sCartucho="";
    nCantidad="";
    inputString = "";
  }
}

