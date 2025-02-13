//
// Created by Endie on 13.02.2025.
//

#include "esp8266.h"

void setup(ESP_8266 *esp8266) {

  ESP_8266_GPIO_HELPER_STRUCT b12 = {
      .group = GPIOB,
      .pin = GPIO_PIN_12,
  };
  ESP_8266_GPIO_HELPER_STRUCT b13 = {
      .group = GPIOB,
      .pin = GPIO_PIN_13,
  };

  ESP_8266_GPIO_HELPER_STRUCT b15 = {
       .group = GPIOB,
       .pin = GPIO_PIN_13,
   };

  ESP_8266 local = {
      .txd = &b12,
      .rxd = &b13,
      .io = &b15,
  };

  esp8266 = &local;
}

void connect(ESP_8266 *esp8266) {

}

void writeMessage(ESP_8266 *esp8266) {

}

void readMessage(ESP_8266 *esp8266) {

}

void test(char a){

}