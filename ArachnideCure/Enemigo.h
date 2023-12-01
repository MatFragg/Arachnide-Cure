#pragma once
#include "iostream"
#include "Color.h"

using namespace std;
using namespace System;

class Enemigo
{
public:
	Enemigo(float px, float py);
	~Enemigo();
	virtual void mover();
	virtual void dibujar();
	virtual void borrar();
	virtual int getX();
	virtual int getY();


protected:
	float x, y, dx, dy;
};

Enemigo::Enemigo(float px, float py)
{
	this->x = px;
	this->y = py;
	this->dx = 0.3;
	this->dy = 0.3;
}

Enemigo::~Enemigo()
{

}
void Enemigo::mover()
{


}
void Enemigo::dibujar()
{


}
void Enemigo::borrar()
{

}
int Enemigo::getX()
{
	return x;
}

int Enemigo::getY()
{
	return y;
}

class Enemigo1 :public Enemigo
{
public:
	Enemigo1(float px, float py);
	~Enemigo1();
	void borrar();
	void mover();
	void dibujar();
	int getY();
	int getX();

};

Enemigo1::Enemigo1(float px, float py) :Enemigo(px, py)
{

}

Enemigo1::~Enemigo1()
{

}

void Enemigo1::mover()
{
	if (y < 11 || y> 20)
	{
		dy *= -1;
	}

	y += dy;


}

void Enemigo1::dibujar()
{
	asignarColor(12);
	Console::SetCursorPosition(x, y); cout << "\\()/";
	Console::SetCursorPosition(x, y + 1); cout << "-()-";
	Console::SetCursorPosition(x, y + 2); cout << "/()\\";


}
void Enemigo1::borrar()
{
	Console::SetCursorPosition(x, y); cout << "     ";
	Console::SetCursorPosition(x, y + 1); cout << "     ";
	Console::SetCursorPosition(x, y + 2); cout << "     ";
}
int Enemigo1::getY()
{
	return y;

}
int Enemigo1::getX()
{
	return x;

}

class Enemigo2 :public Enemigo
{
public:
	Enemigo2(float px, float py);
	~Enemigo2();
	void borrar();
	void mover();
	void dibujar();
	int getY();
	int getX();

};

Enemigo2::Enemigo2(float px, float py) :Enemigo(px, py)
{

}

Enemigo2::~Enemigo2()
{

}

void Enemigo2::mover()
{
	if (x < 53 || x> 72)
	{
		dx *= -1;
	}

	x += dx;


}

void Enemigo2::dibujar()
{
	asignarColor(12);
	Console::SetCursorPosition(x, y); cout << "\\()/";
	Console::SetCursorPosition(x, y + 1); cout << "-()-";
	Console::SetCursorPosition(x, y + 2); cout << "/()\\";


}
void Enemigo2::borrar()
{
	Console::SetCursorPosition(x, y); cout << "     ";
	Console::SetCursorPosition(x, y + 1); cout << "     ";
	Console::SetCursorPosition(x, y + 2); cout << "     ";
}

int Enemigo2::getY()
{
	return y;

}
int Enemigo2::getX()
{
	return x;

}

class Enemigo3 :public Enemigo
{
public:
	Enemigo3(float px, float py);
	~Enemigo3();
	void borrar();
	void mover();
	void dibujar();
	int getY();
	int getX();
};

Enemigo3::Enemigo3(float px, float py) :Enemigo(px, py)
{

}

Enemigo3::~Enemigo3()
{

}

void Enemigo3::mover()
{
	if (y < 8 || y> 20)
	{
		dy *= -1;
	}

	y += dy;

}

void Enemigo3::dibujar()
{
	asignarColor(12);
	Console::SetCursorPosition(x, y); cout << "\\()/";
	Console::SetCursorPosition(x, y + 1); cout << "-()-";
	Console::SetCursorPosition(x, y + 2); cout << "/()\\";


}
void Enemigo3::borrar()
{
	Console::SetCursorPosition(x, y); cout << "     ";
	Console::SetCursorPosition(x, y + 1); cout << "     ";
	Console::SetCursorPosition(x, y + 2); cout << "     ";
}
int Enemigo3::getY()
{
	return y;

}
int Enemigo3::getX()
{
	return x;

}

class Enemigo4 :public Enemigo
{
public:
	Enemigo4(float px, float py);
	~Enemigo4();
	void borrar();
	void mover();
	void dibujar();
	int getY();
	int getX();
};

Enemigo4::Enemigo4(float px, float py) :Enemigo(px, py)
{

}

Enemigo4::~Enemigo4()
{

}

void Enemigo4::mover()
{

}

void Enemigo4::dibujar()
{
	asignarColor(12);
	Console::SetCursorPosition(x, y); cout << "\\()/";
	Console::SetCursorPosition(x, y + 1); cout << "-()-";
	Console::SetCursorPosition(x, y + 2); cout << "/()\\";


}
void Enemigo4::borrar()
{
	Console::SetCursorPosition(x, y); cout << "     ";
	Console::SetCursorPosition(x, y + 1); cout << "     ";
	Console::SetCursorPosition(x, y + 2); cout << "     ";
}
int Enemigo4::getY()
{
	return y;

}
int Enemigo4::getX()
{
	return x;

}