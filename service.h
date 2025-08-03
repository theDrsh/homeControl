struct LED : Service::LightBulb {
  int lightPin;
  SpanCharacteristic *power;
  LED(int pin) : Service::LightBulb() {
    power = new Characteristic::On();
    this->lightPin = pin;
    pinMode(lightPin, OUTPUT);
  }

  boolean update() {
    digitalWrite(lightPin, power->getNewVal() ? HIGH : LOW);
    return true;
  }
};
