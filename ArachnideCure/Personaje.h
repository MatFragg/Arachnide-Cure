#pragma once

#include "conio.h"
#include "iostream"
#include "Enemigo.h"
#include "Color.h"
#include "Mapa.h"

using namespace std;
using namespace System;

class Personaje
{
public:
	Personaje();
	~Personaje();
	void mover();
	void borrar();
	void dibujar();
	void colision();
	bool concluir();
	bool concluir2();
	bool cogerAliado();
	bool cogerAliado2();
	bool cogerAliado3();
	int GetX();
	int GetY();


private:
	int x, y, dx, dy;

};

Personaje::Personaje()
{
	this->x = 3;
	this->y = 2;
	this->dx = 0.1;
	this->dy = 0.1;
}

Personaje::~Personaje()
{
}

void Personaje::mover()
{

	if (_kbhit())
	{
		char tecla = getch();

		if (tecla == 'w' || tecla == 'W' )
		{
			y--;
		}
		if (tecla == 's' || tecla == 'S' )
		{
			y++;
		}
		if (tecla == 'a' || tecla == 'A' )
		{
			x--;
		}
		if (tecla == 'd' || tecla == 'D' )
		{
			x++;
		}
	}

}

void Personaje::dibujar()
{
	asignarColor(2);
	Console::SetCursorPosition(x, y); cout << " o ";
	Console::SetCursorPosition(x, y+1); cout << " | ";
	Console::SetCursorPosition(x, y+2); cout << "/ \\";
}

void Personaje::borrar()
{
	Console::SetCursorPosition(x, y); cout << "  ";
	Console::SetCursorPosition(x, y+1); cout << " ";
	Console::SetCursorPosition(x, y+2); cout << "   ";
}

void Personaje::colision()
{
	if (this-> y == 1 )
	{
		this->borrar();
		y = 2;
		Console::SetCursorPosition(x, 1); asignarColor(8),cout<<char(219);
		Console::SetCursorPosition(x+1, 1); asignarColor(8), cout << char(219);
		Console::SetCursorPosition(x+2, 1); asignarColor(8), cout << char(219);
		Console::SetCursorPosition(x+3, 1); asignarColor(8), cout << char(219);
		Console::SetCursorPosition(x+4, 1); asignarColor(8), cout << char(219);
	}
	if (this->y == 21)
	{
		this->borrar();
		y = 20 ;
		Console::SetCursorPosition(x, 23); asignarColor(8), cout << char(219);
		Console::SetCursorPosition(x + 1, 23); asignarColor(8), cout << char(219);
		Console::SetCursorPosition(x + 2, 23); asignarColor(8), cout << char(219);
		Console::SetCursorPosition(x + 3, 23); asignarColor(8), cout << char(219);
		Console::SetCursorPosition(x + 4, 23); asignarColor(8), cout << char(219);
	}
	if (this->x==1)
	{
		this->borrar();
		x = 2;
		Console::SetCursorPosition(1, y); asignarColor(8), cout << char(219);
		Console::SetCursorPosition(1, y+1); asignarColor(8), cout << char(219);
		Console::SetCursorPosition(1, y+2); asignarColor(8), cout << char(219);
		Console::SetCursorPosition(1, y+3); asignarColor(8), cout << char(219);
	}

	if (this->x==76)
	{
		x = 75;
		Console::SetCursorPosition(78, y); asignarColor(8), cout << char(219);
		Console::SetCursorPosition(78, y + 1); asignarColor(8), cout << char(219);
		Console::SetCursorPosition(78, y + 2); asignarColor(8), cout << char(219);
		Console::SetCursorPosition(78, y + 3); asignarColor(8), cout << char(219);
	}
}
bool Personaje::concluir()
{
	bool termina = false;
	if (this->y == 3 && this-> x==43)
	{
		termina = true;
	}
	return termina;
}

bool Personaje::concluir2()
{
	bool termina = false;
	if (this->y == 3 && this->x == 3)
	{
		termina = true;
	}
	return termina;
}



bool Personaje::cogerAliado()
{
	bool cA = false;
	if (this->y==11 && this->x==9)
	{
		cA = true;
	}
	return cA;
}


bool Personaje::cogerAliado2()
{
	bool cA = false;
	if (this->y == 2 && this->x == 20)
	{
		cA = true;
	}
	return cA;
}

bool Personaje::cogerAliado3()
{
	bool cA = false;
	if (this->y == 14 && this->x == 68)
	{
		cA = true;
	}
	return cA;
}


int Personaje::GetX()
{
	return this->x;

}
int Personaje::GetY()
{
	return this->y;
}

