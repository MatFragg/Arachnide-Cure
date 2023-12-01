#pragma once
#include "iostream"
#include "Personaje.h"

using namespace std;
using namespace System;

class Aliados
{
public:
	Aliados(float px, float py);
	~Aliados();
	virtual void dibujar();
	virtual void mover();
	virtual void borrar();
	virtual void eliminar();
	float x, y, dx, dy;
};

Aliados::Aliados(float px, float py)
{
	this->x = px;
	this->y = py;
	this->dx = 0.2;
	this->dy = 0.2;
}
Aliados::~Aliados()
{
}

void Aliados::dibujar()
{
}
void Aliados::mover()
{
}
void Aliados::borrar()
{
}
void Aliados::eliminar()
{
}

class Aliado1 :public Aliados
{
public:
	Aliado1(float px, float py);
	~Aliado1();
	void dibujar();
	void mover();
	void borrar();
	void eliminar();
};

Aliado1::Aliado1(float px, float py) :Aliados(px, py)
{

}
Aliado1::~Aliado1()
{

}

void Aliado1::dibujar()
{
	asignarColor(11);
	Console::SetCursorPosition(x, y); cout << char(219);
}
void Aliado1::mover()
{
	if (y < 11 || y>13)
	{
		dy *= -1;
	}

	y += dy;
}
void Aliado1::borrar()
{
	Console::SetCursorPosition(x, y); cout << " ";
}
void Aliado1::eliminar()
{
	asignarColor(1);
	this->dy *= 0;
	this->x *= 0;
	this->y *= 0;
}

class Aliado2 :public Aliados
{
public:
	Aliado2(float px, float py);
	~Aliado2();
	void dibujar();
	void mover();
	void borrar();
	void eliminar();
};

Aliado2::Aliado2(float px, float py) :Aliados(px, py)
{

}
Aliado2::~Aliado2()
{

}

void Aliado2::dibujar()
{
	asignarColor(11);
	Console::SetCursorPosition(x, y); cout << char(219);
}
void Aliado2::mover()
{
	if (y < 3 || y>4)
	{
		dy *= -1;
	}

	y += dy;

}
void Aliado2::borrar()
{
	Console::SetCursorPosition(x, y); cout << " ";

}
void Aliado2::eliminar()
{
	asignarColor(1);
	this->dy *= 0;
	this->x *= 0;
	this->y *= 0;

}

class Aliado3 :public Aliados
{
public:
	Aliado3(float px, float py);
	~Aliado3();
	void dibujar();
	void mover();
	void borrar();
	void eliminar();
};

Aliado3::Aliado3(float px, float py) :Aliados(px, py)
{

}
Aliado3::~Aliado3()
{

}

void Aliado3::dibujar()
{
	asignarColor(11);
	Console::SetCursorPosition(x, y); cout << char(219);
}
void Aliado3::mover()
{
	if (y < 13 || y>17)
	{
		dy *= -1;
	}

	y += dy;

}
void Aliado3::borrar()
{
	Console::SetCursorPosition(x, y); cout << " ";

}
void Aliado3::eliminar()
{
	asignarColor(1);
	this->dy *= 0;
	this->x *= 0;
	this->y *= 0;

}
