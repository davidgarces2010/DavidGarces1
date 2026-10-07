// AutoComponent - Código BASE de ejemplo (ESP32 + tira de LEDs WS2812)
// Adáptalo a tu montaje real: pin, cantidad de LEDs y red WiFi.
// Librería necesaria: "Adafruit NeoPixel" (Arduino IDE > Gestor de bibliotecas)

#include <WiFi.h>
#include <WebServer.h>
#include <Adafruit_NeoPixel.h>

const char* WIFI_SSID = "TU_RED";
const char* WIFI_PASS = "TU_CLAVE";

#define PIN_LEDS 5      // Pin de datos de la tira
#define NUM_LEDS 25     // Prototipo #1: 25 LEDs

Adafruit_NeoPixel tira(NUM_LEDS, PIN_LEDS, NEO_GRB + NEO_KHZ800);
WebServer servidor(80);

void apagarTodo() { tira.clear(); tira.show(); }

// Ejemplo: http://IP_DE_LA_ESP32/led?n=12  (enciende el LED 12)
void encenderLed() {
  servidor.sendHeader("Access-Control-Allow-Origin", "*"); // permite llamarla desde la app web
  if (!servidor.hasArg("n")) { servidor.send(400, "text/plain", "Falta n"); return; }
  int n = servidor.arg("n").toInt();
  if (n < 0 || n >= NUM_LEDS) { servidor.send(400, "text/plain", "n fuera de rango"); return; }
  tira.clear();
  tira.setPixelColor(n, tira.Color(255, 200, 0));
  tira.show();
  servidor.send(200, "text/plain", "LED encendido");
}

void apagar() {
  servidor.sendHeader("Access-Control-Allow-Origin", "*");
  apagarTodo();
  servidor.send(200, "text/plain", "Apagado");
}

void setup() {
  Serial.begin(115200);
  tira.begin();
  tira.setBrightness(80);
  apagarTodo();
  WiFi.begin(WIFI_SSID, WIFI_PASS);
  while (WiFi.status() != WL_CONNECTED) { delay(500); Serial.print("."); }
  Serial.println("\nIP: " + WiFi.localIP().toString());
  servidor.on("/led", encenderLed);
  servidor.on("/off", apagar);
  servidor.begin();
}

void loop() { servidor.handleClient(); }
