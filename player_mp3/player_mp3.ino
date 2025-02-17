#include <SoftwareSerial.h>
#include <DFRobotDFPlayerMini.h>

SoftwareSerial mySerial(10, 11);  // TX, RX
DFRobotDFPlayerMini myDFPlayer;

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  
  if (!myDFPlayer.begin(mySerial)) {
    Serial.println("Error al inicializar DFPlayer Mini");
    while (true);
  }
  
  myDFPlayer.volume(20);  // Ajustar volumen (0-30)
  myDFPlayer.play(1);     // Reproducir primer archivo
  delay(2000);
}

void loop() {

  
  myDFPlayer.play(1);     // Reproducir primer archivo
  delay(2000);

  
  myDFPlayer.play(2);     // Reproducir primer archivo
  delay(2000);
  
  myDFPlayer.play(3);     // Reproducir primer archivo
  delay(2000);
  
  myDFPlayer.play(4);     // Reproducir primer archivo
  delay(2000);

  // Puedes agregar controles aquí, como botones para cambiar de pista
}
