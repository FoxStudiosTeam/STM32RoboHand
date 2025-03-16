//
// Created by Endie on 13.02.2025.
//

#ifndef ESP8266_H
#define ESP8266_H

#include <stm32f1xx_hal.h>

typedef struct ESP_8266_GPIO_HELPER_STRUCT{
  GPIO_TypeDef * group;
  uint32_t pin;

} ESP_8266_GPIO_HELPER_STRUCT;

typedef struct ESP_8266{
  char *ssid;
  char *password;
  ESP_8266_GPIO_HELPER_STRUCT* txd;
  ESP_8266_GPIO_HELPER_STRUCT* rxd;
  ESP_8266_GPIO_HELPER_STRUCT* io;

} ESP_8266;

void setup(ESP_8266 *esp8266);

void connect(ESP_8266 *esp8266);

void writeMessage(ESP_8266 *esp8266);

void readMessage(ESP_8266 *esp8266);

void test(char a);

#endif //ESP8266_H
