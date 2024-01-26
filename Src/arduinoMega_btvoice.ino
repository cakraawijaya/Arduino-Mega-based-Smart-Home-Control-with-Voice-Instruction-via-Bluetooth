#include <SoftwareSerial.h> 
#include <LiquidCrystal_I2C.h>

SoftwareSerial BT(0,1);
LiquidCrystal_I2C lcd(0x27, 16, 2);

#define alarm_relay 11
#define fan_relay 10
#define lamp_relay 9
#define monitor_relay 8

char bluetooth_data;  
int relayON = HIGH;
int relayOFF = LOW;
      
void setup(){
  Serial.begin(9600);
  BT.begin(9600);
  lcd.init();
  pinMode(alarm_relay, OUTPUT);
  pinMode(fan_relay, OUTPUT);
  pinMode(lamp_relay, OUTPUT);
  pinMode(monitor_relay, OUTPUT);
  digitalWrite(alarm_relay, relayOFF);
  digitalWrite(fan_relay, relayOFF);
  digitalWrite(lamp_relay, relayOFF);
  digitalWrite(monitor_relay, relayOFF); 
}

void loop(){
  if(Serial.available() > 0){
    bluetooth_data = Serial.read();
    if(bluetooth_data == '1'){
      digitalWrite(alarm_relay, relayON);
    }
    else if(bluetooth_data == '2'){
      digitalWrite(alarm_relay, relayOFF);
    }
    else if(bluetooth_data == '3'){
      digitalWrite(fan_relay, relayON);
    }
    else if(bluetooth_data == '4'){      
      digitalWrite(fan_relay, relayOFF);
    }
    else if(bluetooth_data == '5'){
      digitalWrite(lamp_relay, relayON);
    }
    else if(bluetooth_data == '6'){      
      digitalWrite(lamp_relay, relayOFF);
    }
    else if(bluetooth_data == '7'){
      digitalWrite(monitor_relay, relayON);
      lcd.backlight(); 
    }
    else if(bluetooth_data == '8'){      
      digitalWrite(monitor_relay, relayOFF);
    }
    else if(bluetooth_data == '9'){
      digitalWrite(alarm_relay, relayOFF);
      digitalWrite(fan_relay, relayOFF);
      digitalWrite(lamp_relay, relayOFF);
      digitalWrite(monitor_relay, relayOFF);
    }
  }
}