// Declaración de la variable para el número del pin del LED
int ledPin = 13;

// Función setup() - se ejecuta una vez al inicio
void setup() {
  // Inicializar el pin como una salida
  pinMode(ledPin, OUTPUT);
}

// Función loop() - se ejecuta continuamente
void loop() {
  // Encender el LED
  digitalWrite(ledPin, HIGH);

  // Esperar un segundo
  delay(1000);

  // Apagar el LED
