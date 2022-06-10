#include <RTC.h>
RTC rtc;
String date;
String times;
String temp;
bool success;

void setup() {
  Serial.begin(115200);
  if(rtc.init())
  {
    Serial.println("init ok");
  } else
  {
    Serial.println("init fail");
  }
  
  //void set_rtc(byte date, byte month, byte year, byte hour, byte minute, byte seconds)
  //rtc.set_rtc(8,6,22,15,53,00);

}

void loop() {
  // put your main code here, to run repeatedly:
  rtc.get_rtc(date, times, success);
  if(success)
  {
    Serial.println("success = true");
    Serial.print(date); Serial.print(" ");  Serial.println(times);   
  } 
  else  {
    Serial.println("get rtc fail");
  }
  delay(1000);
}
