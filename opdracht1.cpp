#include <stdlib.h>
#include <string>
#include <iostream>
#include <wiringPi.h>
#include <array>

#define LED 11
#define Button 13
string MorseWoord
//defineer pins

using namespace std;

void wait(int n) {
    delay(n * 100);


}

void dot() {
    //invullen
digitalwrite(LED,HIGH);
wait(1);
digitalwrite(LED,LOW);
wait(1); 
}

void dash() {
    //invullen
digitalwrite(LED,HIGH);
wait(3);
digitalwrite(LED,LOW);
wait(1);
}

void sendMorse(char character) {
  switch (character) {
    case 'A':
      dot();
      dash();
      break;
    case 'B':
      dash();
      dot();
      dot();
      dot();
      break;
    case 'C':
      dash();
      dot();
      dash();
      dot();
      break;
    case 'D':
      dash();
      dot();
      dot();
      break;
    case 'E':
      dot();
      break;
    case 'F':
      dot();
      dot();
      dash();
      dot();
      break;
    case 'G':
      dash();
      dash();
      dot();
      break;
    case 'H':
      dot();
      dot();
      dot();
      dot();
      break;
    case 'I':
      dot();
      dot();
      break;
    case 'J':
      dot();
      dash();
      dash();
      dash();
      break;
    case 'K':
      dash();
      dot();
      dash();
      break;
    case 'L':
      dot();
      dash();
      dot();
      dot();
      break;
    case 'M':
      dash();
      dash();
      break;
    case 'N':
      dash();
      dot();
      break;
    case 'O':
      dash();
      dash();
      dash();
      break;
    case 'P':
      dot();
      dash();
      dash();
      dot();
      break;
    case 'Q':
      dash();
      dash();
      dot();
      dash();
      break;
    case 'R':
      dot();
      dash();
      dot();
      break;
    case 'S':
      dot();
      dot();
      dot();
      break;
    case 'T':
      dash();
      break;
    case 'U':
      dot();
      dot();
      dash();
      break;
    case 'V':
      dot();
      dot();
      dot();
      dash();
      break;
    case 'W':
      dot();
      dash();
      dash();
      break;
    case 'X':
      dash();
      dot();
      dot();
      dash();
      break;
    case 'Y':
      dash();
      dot();
      dash();
      dash();
      break;
    case 'Z':
      dash();
      dash();
      dot();
      dot();
      break;
    case ' ':
    wait(3)
    default:
      break;
  }
    //invullen

void sendMorseString(){
int i;
cout << "Sending Morse" << endl;
for(i = 0; i<=text.size[i]; i++){
sendMorse(morseWoord[i];
cout << morseWoord[i] << endl;
wait(3)
}
}

int main() {
wiringPiSetup();
pinMode(LED,OUTPUT);
pinMode(Butto, PUD_UP);
wiringPiISR(Button, INT_EDGE_FALLING, &sendMorseString)
cout << "Type here to confert to morse" << endl;
getLine(cin, morseWoord)
    while(1)
}
