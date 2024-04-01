#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <ctime>

#define ESPACIO 32
using namespace std;

//Prototipos de funciones
void gotoxy(int x, int y);
void ocultarCursor();
void pintarLimites();

class Nave {
	int x;
	int y;
	int corazones;
	
public:
	Nave(int _x, int _y, int _corazones) : x(_x), y(_y), corazones(_corazones){}
	void paint();
	void erase();
	void mover();
	void pintarCorazones();
	void disparar();
	void spawnAsteroides();
};

int main(int argc, char *argv[]) {
	srand(time(NULL));
	ocultarCursor();
	bool game_over=false;
	pintarLimites();
	Nave nave(10,10,3);
	nave.paint();
	nave.pintarCorazones();
	nave.spawnAsteroides();
	while(!game_over) {
		nave.mover();
		Sleep(30);
	}
	return 0;
}

void gotoxy(int x, int y) {
	HANDLE hCon;
	hCon=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	
	SetConsoleCursorPosition(hCon, dwPos);
	
}
void ocultarCursor(){
	HANDLE hCon;
	hCon=GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize=50;
	cci.bVisible=FALSE;
	
	SetConsoleCursorInfo(hCon,&cci);
}
	
void pintarLimites() {
	for(int i=2; i<113; i++) {
		gotoxy(i,1);
		printf("%c", 205);
		gotoxy(i,27);
		printf("%c", 205);
	}
	for(int i=2; i<28; i++) {
		gotoxy(2, i);
		printf("%c",186);
		gotoxy(113, i);
		printf("%c",186);
	}
}

void Nave::paint() {
	gotoxy(x,y);
	printf(" %c",94);
	gotoxy(x,y+1);
	printf("%c%c%c", 94, 206, 94);
	gotoxy(x,y+2);
	printf("%c%c %c%c", 30,220,220,30);
}
void Nave::erase() {
	gotoxy(x,y);
	printf("  ");
	gotoxy(x,y+1);
	printf("   ");
	gotoxy(x,y+2);
	printf("     ");
	
}
void Nave::mover() {
	if(kbhit()) {
		char tecla= getch();
		erase();
		if(tecla=='w' && y>=3)
			y--;
		if(tecla=='s' && y<=23)
			y++;
		if(tecla=='a' && x>=5)
			x--;
		if(tecla=='d' && x<=107)
			x++;
		paint();
		pintarCorazones();
		disparar();
	}
}
void Nave::pintarCorazones() {
	gotoxy(10, 0);
	printf("Salud: ");
	for(int i=0;i<corazones;i++){
		gotoxy(16+i,0);
		printf("O");
	}
}
void Nave::disparar(){
	if(kbhit){
		char tecla=getch();
		if(tecla==ESPACIO) {
			gotoxy(x,y-1);
			printf("'");
			for(int i=y-1;i>2;i--) {
				gotoxy(x,i);
				printf("'");
				gotoxy(x,i+1);
				printf(" ");
				Sleep(30);
				if(i==3) {
					gotoxy(x,i);
					printf(" ");
				}
			}
		}
	}
	Sleep(30);
}
void Nave::spawnAsteroides() {
	int cantidadSpawn=rand() %20;
	for(int i=1; i<=cantidadSpawn; i++) {
		int randomX=rand() % 105 + 5;
		int randomY=rand() % 18 + 5;
		gotoxy(randomX, randomY);
		printf("o");
	}
}
