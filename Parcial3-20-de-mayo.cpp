#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <array>

using namespace std;

// Function Prototypes
int genRandom();
void juego(bool turno, bool simbolo, string nombre1, string nombre2);
void gotoxy(int x, int y);
void paint(char board[3][3]);
bool verifyWin(char table[3][3]);
array<int, 2> returnCoord();
void resetBoard(char board[3][3]);
bool verifyDraw(char table[3][3]);

// Global Variables
string n1, n2;
bool j1X = true, turno = true;
char board[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };

int main() {
    cout << "Hola usuarios, bienvenidos" << endl;
    cout << "Ingrese el nombre del jugador 1: ";
    getline(cin, n1);
    cout << "Ingrese el nombre del jugador 2: ";
    getline(cin, n2);

    char playAgain;
    do {
        system("pause");
        system("cls");
        int randGenerado = genRandom();
        cout << "El numero elegido es: "<<randGenerado << endl;
        if (randGenerado % 2 == 0) {
            cout << "Se comenzara jugando con la X" << endl;
        }
        else {
            cout << "Se jugara con la O" << endl;
            j1X = false;
        }
        system("pause");
        system("cls");
        resetBoard(board);
        juego(turno, j1X, n1, n2);

        do {
            cout << "¿Quieres jugar de nuevo? (s/n): ";
            cin >> playAgain;
            playAgain = tolower(playAgain);
        } while (playAgain != 's' && playAgain != 'n');

    } while (playAgain == 's');

    return 0;
}

int genRandom() {
    srand(time(NULL));
    return (rand() % 6)+1;
}


void paint(char board[3][3]) {
    system("cls");
    cout << "  1   2   3" << endl;
    for (int i = 0; i < 3; i++) {
        cout << " " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << "  " << i + 1 << endl;
        if (i < 2) cout << "---+---+---" << endl;
    }
}

void juego(bool turno, bool simbolo, string nombre1, string nombre2) {
    int x = 0, y = 0;
    char sim;
    while (true) {
        paint(board);
        sim = (simbolo ? 'X' : 'O');

        cout << "Turno de " << (turno ? nombre1 : nombre2) << " con la ficha " << sim << endl;
        array<int, 2> coord = returnCoord();
        x = coord[0] - 1;
        y = coord[1] - 1;

        if (x >= 0 && x < 3 && y >= 0 && y < 3 && board[y][x] == ' ') {
            board[y][x] = sim;
            if (verifyWin(board)) {
                paint(board);
                cout << "Felicidades " << (turno ? nombre1 : nombre2) << " ha ganado el juego" << endl;
                break;
            }
            turno = !turno;
            simbolo = !simbolo;
            if (verifyDraw(board)) {
                paint(board);
                cout << "Han llegado a un empate ambos jugadores" << endl;
                break;
            }
        }
        else {
            cout << "Movimiento invalido. Intenta de nuevo." << endl;
            system("pause");
        }
    }
}

bool verifyWin(char table[3][3]) {
    for (int i = 0; i < 3; i++) {
        if (table[i][0] != ' ' && table[i][0] == table[i][1] && table[i][1] == table[i][2]) {
            return true;
        }
    }
    for (int i = 0; i < 3; i++) {
        if (table[0][i] != ' ' && table[0][i] == table[1][i] && table[1][i] == table[2][i]) {
            return true;
        }
    }
    if (table[0][0] != ' ' && table[0][0] == table[1][1] && table[1][1] == table[2][2]) {
        return true;
    }
    else if (table[0][2] != ' ' && table[0][2] == table[1][1] && table[1][1] == table[2][0]) {
        return true;
    }

    return false;
}

array<int, 2> returnCoord() {
    int x, y;
    cout << "Seleccione la coordenada en X para su tiro: ";
    cin >> x;
    cout << "Seleccione la coordenada en Y para su tiro: ";
    cin >> y;
    return { x, y };
}

bool verifyDraw(char table[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (table[i][j] == ' ')
                return false;
        }
    }
    return true;
}


void resetBoard(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int c = 0; c < 3; c++) {
            board[i][c] = ' ';
        }
    }
}

