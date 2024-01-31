#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>

// connecting to Firebase
#define FIREBASE_HOST "ahcontrol-8744d-default-rtdb.firebaseio.com"
#define FIREBASE_AUTH "che5SQgowVDd47JRCwHsdSITWMNVxRnsqlcLW2Yp"

#define WIFI_SSID "cheema"
#define WIFI_PASSWORD "cheema4310cck"



int fan = 5;    // D1
int bulb = 14;  // D5
int board = 2;  // D4
//
//int inputBoard = 16; // D0 wake (INPUT) button
//int inputBulb = 15;  // input blub
//int inputFan = 13;   // input fan

//int boardStatusM = Firebase.getInt("alert/boardStatusM");
//int bulbStatusM = Firebase.getInt("alert/bulbStatusM");
//int fanStatusM = Firebase.getInt("alert/fanStatusM");

//int alertFan = 0;
//int alertBoard = 0;
//int alertBulb = 0;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);


  // connecting to Wifi

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("Connecting");

  while(WiFi.status() != WL_CONNECTED){
    Serial.print(".");
   delay(500);
  }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());


  // linking Firebase 
 
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);

  // pinMode listed
  
 pinMode(fan, OUTPUT);
 pinMode(bulb, OUTPUT);
 pinMode(board, OUTPUT);

// pinMode(inputBoard, INPUT);
// pinMode(inputBulb, INPUT);
// pinMode(inputFan, INPUT);
 
  }
 



void loop() {
   int fanStatus = Firebase.getInt("fan/fanStatus");
   
   // only if couldn't connect to firebase
     if (Firebase.failed()) {
      Serial.print("setting number failed:");
      Serial.println(Firebase.error());  
      return;
  }
  
  delay(1000);
   
  if(fanStatus == 1){

    digitalWrite(fan, HIGH);
    Serial.print("fan is on");
    delay(1000);   
    
  } else {
    digitalWrite(fan, LOW);
    
  }

  
  int bulbStatus = Firebase.getInt("bulb/bulbStatus");

   // only if couldn't connect to firebase
  if (Firebase.failed()) {
      Serial.print("setting number failed:");
      Serial.println(Firebase.error());  
      return;
  }
  delay(1000);
  
  if(bulbStatus == 1){
    digitalWrite(bulb, HIGH);
    Serial.print("bulb is on");
    delay(1000);
  } else {
    digitalWrite(bulb, LOW);
  }

  // boardStatus check

  int boardStatus = Firebase.getInt("board/boardStatus");
   
   // only if couldn't connect to firebase
     if (Firebase.failed()) {
      Serial.print("setting number failed:");
      Serial.println(Firebase.error());  
      return;
  }
  delay(1000);
   
  if(boardStatus == 1){

    digitalWrite(board, HIGH);
    Serial.print("board is on");
    delay(1000);   
    
  } else {
    digitalWrite(board, LOW);
    
  }


}
