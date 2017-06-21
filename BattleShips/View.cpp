#include "View.h"

View::View() {
	SMALL_RECT wSize = { 0, 0, X_SIZE, Y_SIZE };
	COORD wBufSize = { X_SIZE, Y_SIZE };
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleScreenBufferSize(hConsole, wBufSize);
	SetConsoleWindowInfo(hConsole, TRUE, &wSize);
	CONSOLE_CURSOR_INFO cursorInfo;
	GetConsoleCursorInfo(hConsole, &cursorInfo);
	cursorInfo.bVisible = FALSE;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(hConsole, &cursorInfo);
	//generatePositions
}

void View::SetChar(int x, int y, int color, char symbol) {
	COORD point;
	point.X = x;
	point.Y = y;
	SetConsoleTextAttribute(hConsole, color);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), point);
	cout << symbol;
}