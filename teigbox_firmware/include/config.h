#ifndef config
#define config

#include <SimpleDHT.h>
#include "display.hpp"

#define DEBUG_VIA_SERIAL

// PINS
// -----------------------------------------------------------------------------------------
#define HEATBED // pwm possible
#define DHT_PIN 4
#define FAN              // pwm possible
#define BUTTON_UP 2      // interrupt
#define BUTTON_DOWN 3    // interrupt
#define BUTTON_FASTCALL1 // io
#define BUTTON_FASTCALL2 // io
#define BUTTON_FASTCALL3 // io

#define LED_HEATER_ON // io
#define LED_FAN_ON    // io
#define LED_FASTCALL1 // io
#define LED_FASTCALL2 // io
#define LED_FASTCALL3 // io

#define LCD_DATA A4 // i2c data
#define LCD_CLK A5  // i2c clock
// -----------------------------------------------------------------------------------------

// -----------------------------------------------------------------------------------------

#include "constants.h"

// Software Constants
// -----------------------------------------------------------------------------------------
#define loops_to_store 50 // loops until the current preset value is stored to a preset button
#define Kp
#define Ki
#define Kd

// type of button interrupt
#define INTERRUPT_TYPE FALLING

// fonts:
#define FONT_NUMBERS 0 //(u8g2_font_freedoomr10_mu)
#define FONT_TEXT 1    //(u8g2_font_VCR_OSD_tu)
#define FONT_ICONS 2   //(u8g2_font_open_iconic_gui_2x)

// uno full size: 1024 bytes
// EEPROM Address in bytes
#define EEPROM_ADDRESS_PRESET 0            // 2* 32bits (2*float ^= 2* 4byte)
#define EEPROM_ADDRESS_QUICKCALL 0 + 4 + 4 // beginn, 8 bytes for preset

#endif // !config