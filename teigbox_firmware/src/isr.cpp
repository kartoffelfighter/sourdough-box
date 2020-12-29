#include "isr.hpp"

void button_up_isr(void){
    Serial.println("button_up_isr() triggered");
}
void button_down_isr(void){
    Serial.println("button_down_isr() triggered");
}
