#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <Adafruit_MPU6050.h>
#include <DHT.h>
#include <Adafruit_Sensor.h>

// DISPLAY
const int TFT_CS = 5;
const int TFT_DC = 27;
const int TFT_RST = 4;

// ESP

const int BUTTON1 =32;
const int BUTTON2 =15;
const int DHT_DATA =17;
const int TOUCH =14;
const int BAT_SENSE = 35;
const int MOTOR = 27;


//default one - MISO , CLK ,MOSI


// i2c connect
// SCL = 22 and SDA = 21 are already defined by the ESP32 board package

const bool USE_DHT = true;



Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS,TFT_DC,TFT_RST);

const int TOUCH_LIMIT = 50;
bool happy1=false;
unsigned long happyStart =0;
unsigned long lastBlink =0;




void clearFace(){
  tft.fillRect(0,30,128,100,ST77XX_BLUE);
}
void drawEye(){
  clearFace();
  tft.fillCircle(40,60,10,ST77XX_ORANGE);
  tft.fillCircle(88,60,10,ST77XX_ORANGE);
}

void sleepEye(){
  tft.fillRect(30 , 59,20,3 ,ST77XX_ORANGE);
  tft.fillRect(78 , 59,20,3 ,ST77XX_ORANGE);
}
void happy(){
  tft.drawLine(30,68,40,55,ST77XX_ORANGE);
  tft.drawLine(40,55,50,68,ST77XX_ORANGE);


  tft.drawLine(78,68,88,55,ST77XX_ORANGE);
  tft.drawLine(88,55,98,68,ST77XX_ORANGE);
}

void setup(){
  tft.initR(INITR_BLACKTAB);
  tft.fillScreen(ST77XX_BLUE);
  drawEye();
  lastBlink =millis();
  
}
void loop(){
  bool touched = (touchRead(TOUCH)<TOUCH_LIMIT);
  if (touched && !happy1){
    happy1 = true;
    happyStart = millis();
    happy();
  }
  if (happy1 && millis() - happyStart > 2000){
    happy1 = false;
    drawEye();
    lastBlink = millis();
  }
  if(!happy1 && millis() -lastBlink >3000){
    sleepEye();
    delay(200);
    drawEye();
    lastBlink = millis();
  }

  delay(20);
}