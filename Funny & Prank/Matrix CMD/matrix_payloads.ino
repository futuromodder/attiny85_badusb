
//This DigiSpark script opens up the powershell and makes your computer speak out a message.
#include "DigiKeyboard.h"


void setup() {
  pinMode(1, OUTPUT); //LED on Model A 
}

void loop(){
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("Set/WinUserLanguageList en/US /Force"); //IMPOSTA LAYOUT TASTIERA IN INGLESE
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1500);
  DigiKeyboard.print("exit"); //esci da powershell
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("notepad");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("@echo off ");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("color 2");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print(":start");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("echo %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random%");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("goto start");
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_S, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1500);
  DigiKeyboard.print("%userprofile%\\Desktop\\matrix.bat");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("cmd");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print(" cd %userprofile%\\Desktop\\ ");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("matrix.bat");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100000);
    for (;;) {
    /*Stops the digispark from running the scipt again*/
  }
}
