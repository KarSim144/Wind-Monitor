#include <Arduino.h>
#include <WiFi.h>
#include <esp_wifi.h>

void setup() {
  Serial.begin(115200);
  delay(500);

  WiFi.mode(WIFI_STA);
  delay(100);

  uint8_t mac[6];

  if (esp_wifi_get_mac(WIFI_IF_STA, mac) != ESP_OK) {
    Serial.println("ERROR: Could not read STA MAC.");
    return;
  }

  Serial.printf(
      "STA MAC: %02X:%02X:%02X:%02X:%02X:%02X\n",
      mac[0], mac[1], mac[2],
      mac[3], mac[4], mac[5]);
}

void loop() {
  delay(1000);
}