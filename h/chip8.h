


//CHIP-8
class chip8 {
private:

  // CPU
  // cpu --- 35 instructions
  unsigned short opcode;

  // cpu registers -- 15 * 8bit(1byte)
  unsigned char V[16];

  // Index register & program counter
  unsigned short I;
  unsigned short pc;  


  // TIMER
  // timer registers
  unsigned char delay_timer;
  unsigned char sound_timer;



  // MEMEROY - 4k in total / 1 b 
  unsigned char memory[4096];

  // STACK
  unsigned short stack[16];
  unsigned short sp;

 
  // GRAPHICS AND SOUND
  // Graphics --- 64 * 32 = 2048 pixels
  unsigned char gfx[64 * 32];


  // INPUT
  unsigned char kay[16];

public:
  void initialize() {};

  void emulateCycle() {};

  void LoadGame() {};

  void setKeys() {};



};

void chip8::initialize() {

    pc        = 0x200; //program counter start at 0x200 (512)
    opcode    = 0;  
    I         = 0; 
    p         = 0;

	//load font set


}

void chip8::emulateCycle() {

	//fetch opcode
	memory[pc] == 0xA2;
	memory[pc + 1] == 0xF0;

	opcode = memory[pc] << 8 | memory[pc + 1];

	
	
	//decode opcode











}
