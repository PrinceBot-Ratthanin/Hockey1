#include "NT_Servo_lib.h"    
#include "NT_Oled_Lib.h"       
#include "NT_Motor_drive4W.h"
#include "Arduino.h"
#define M1A 19
#define M1B 18
#define M2A 5
#define M2B 17
#define M3A 16
#define M3B 4
#define M4A 2
#define M4B 15
#define Knob_pin 33 
/*int M1A=19;
int M1B=18;
int M2A=5;
int M2B=17;*/


void NTRobot4W(){

  Serial.begin(115200);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  pinMode(M1A,OUTPUT);
  pinMode(M1B,OUTPUT);
  pinMode(M2A,OUTPUT);
  pinMode(M2B,OUTPUT);
  pinMode(M3A,OUTPUT);
  pinMode(M3B,OUTPUT);
  pinMode(M4A,OUTPUT);
  pinMode(M4B,OUTPUT);
  pinMode(12,OUTPUT);
  ledcSetup(6, 5000, 8);
  ledcSetup(7, 5000, 8);
  ledcSetup(4, 5000, 8);
  ledcSetup(5, 5000, 8);
  ledcSetup(3, 5000, 8);
  ledcSetup(2, 5000, 8);
  ledcSetup(8, 5000, 8);
  ledcSetup(9, 5000, 8);
  ledcAttachPin(M1A, 6);
  ledcAttachPin(M1B, 7);
  ledcAttachPin(M2A, 4);
  ledcAttachPin(M2B, 5);
  ledcAttachPin(M3A, 3);
  ledcAttachPin(M3B, 2);
  ledcAttachPin(M4A, 8);
  ledcAttachPin(M4B, 9);
  display.setTextSize(1);
  display.setTextColor(WHITE);
}

void SW1(){
	int OK_pin=23;
	pinMode(OK_pin,INPUT);
  display.setTextSize(2);
	while(digitalRead(OK_pin) == 1){
    set_oled(0,0,"press OK ");
    set_oled(0,15,"to start ");
    delay(1);
  }
  set_oled_clear();
  set_oled_show();
  display.setTextSize(1);
}
void Knob(){
	pinMode(Knob_pin,INPUT);
}
