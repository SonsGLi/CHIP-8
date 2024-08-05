

#include"chip8.h"



chip8 Chip8;


int main(){

setupCraphics();
setupInput();

Chip8.initialize();
Chip8.LoadGame();


//emulateLoop
for(;;){

Chip8.emulateCycle();


drawGraphics();


Chip8.setKeys();

}



  return 0;
}



