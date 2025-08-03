#include <HomeSpan.h>
#include <service.h>
const int ledPin = 2; // Pin for the LED

void setup() {
  Serial.begin(115200);
  homeSpan.begin(Category::Lighting, "Home Control");
  new SpanAccessory();
  new Service::AccessoryInformation();
  new Characteristic::Identify();
  new LED(ledPin);
}

void loop() {
  homeSpan.poll();
}
