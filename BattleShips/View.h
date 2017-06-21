#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

class View {
private:
	HANDLE hConsole;
	const short X_SIZE = 30;
	const short Y_SIZE = 15;
	void SetChar(int x, int y, int color, char symbol);
public:
	View();
};