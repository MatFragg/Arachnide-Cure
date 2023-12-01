#pragma once
#include "Color.h"
#include "iostream" 

using namespace std;
using namespace System;

class Resultados
{
public:
	Resultados();
	~Resultados();
	void ganar();
	void perder();

private:
	int x;
};

Resultados::Resultados()
{
	this->x=0;
}

Resultados::~Resultados()
{
}
void Resultados::ganar()
{
	asignarColor(9);

	Console::SetCursorPosition(15, 12); cout << " __       __                               ";
	Console::SetCursorPosition(15, 13); cout << " \\ \\   / /                               ";
	Console::SetCursorPosition(15, 14);	cout << "  \\ \\_/ /__  _   _  __      _____  _  __  ";
	Console::SetCursorPosition(15, 15); cout << "   \\   / _ \\| | | | \\ \\ /\\ / / _ \\| '_ \\ ";
	Console::SetCursorPosition(15, 16); cout << "    | | (_) | |_| |  \\ V  V / (_)  | || |";
	Console::SetCursorPosition(15, 17);	cout << "    |_|\\___/ \\__,_|   \\_/\\_/ \\___/|_| |_|";
	Console::SetCursorPosition(15, 19);	cout << "Pedro salió de su hogar y encontraron una cura a la enferemdad";

}
void Resultados::perder()
{
	
		asignarColor(4);
	Console::SetCursorPosition(15, 13); cout << "__    __            _                ";
	Console::SetCursorPosition(15, 14);	cout << "\\ \\   / /          | |               ";
	Console::SetCursorPosition(15, 15); cout << " \\ \\_/ /__  _   _  | | ___   ___  ___ ";
	Console::SetCursorPosition(15, 16); cout << "  \\   / _ \\| | | | | |/ _ \\/ __|/ _ \\";
	Console::SetCursorPosition(15, 17);	cout << "   | | (_) | |_| | | | (_) \\__ \\  __/ ";
	Console::SetCursorPosition(15, 18);	cout << "   |_|\\___/ \\__,_| |_|\\___/|___/\___|";
	asignarColor(4);
	Console::SetCursorPosition(15, 19); cout << "Pedro no llegó a salir de su casa con vida..." << endl;
	
}