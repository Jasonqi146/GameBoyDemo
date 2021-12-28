// main2.c

#define REG_DISPCTL *(unsigned short *)0x4000000
#define MODE3 (3)

// set bit 10 in a mask
#define BG2_ENABLE (1<<10)

#define SCREEN_HEIGHT 160
#define SCREEN_WIDTH 240

#define OFFSET(r,c,rowlen) ((r)*(rowlen)+(c))

// the pixel screen array in memory
unsigned short *videobuffer = (unsigned short *)0x6000000;

// function prototypes
void setPixel(int row, int col, unsigned short color);

int main() {

	// set Mode 3 and BG2
	REG_DISPCTL = MODE3 | BG2_ENABLE;

	unsigned short color = 0x7FFF;
	int row = SCREEN_HEIGHT/2;
	int col = SCREEN_WIDTH/2;

	// light up a pixel
	setPixel(row, col, color);

	while(1)	
		;
}

void setPixel(int row, int col, unsigned short color) {
	videobuffer[OFFSET(row,col,SCREEN_WIDTH) ] = color;
}