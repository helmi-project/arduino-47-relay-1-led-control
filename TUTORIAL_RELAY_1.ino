/*
   TUTORIAL RELAY 1 PADA ARDUINO
   D4 -> Led Merah
   VCC relay -> VCC
   GND relay -> GND
   IN RELAY -> SDA (atau sama dengan A4)    

*/

#define pinLed 4 //led merah pada D4
#define pinRelay A4

void setup() {
  pinMode(pinLed, OUTPUT); //set menjadi output
  pinMode(pinRelay, OUTPUT); //set menjadi output
}

void loop() {
  digitalWrite(pinLed, HIGH); //menyalakan led (memberi tegangan 5V)
  digitalWrite(pinRelay, LOW); //menyalakan relay (memberi tegangan 0V, karena modul relay berjenis Active Low, sehingga aktif saat diberi LOW)
  delay(3000); //jeda waktu 3 detik
  digitalWrite(pinLed, LOW); //mematikan led (memberi tegangan 0V)
  digitalWrite(pinRelay, HIGH); //mematikan relay (memberi tegangan 5V, karena modul relay berjenis Active Low, sehingga mati saat diberi HIGH)
  delay(3000); //jeda waktu 3 detik
}
