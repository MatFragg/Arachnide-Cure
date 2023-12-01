#pragma once
#include "iostream"
#include "Color.h"

using namespace std;
using namespace System;

class Bala
{
public:
	Bala(float px,float py);
	~Bala();
	virtual void mover();
	virtual void borrar();
	virtual void dibujar();
	virtual	int getY();
	virtual int getX();

protected: 

	float x, y, dx, dy;
};

Bala::Bala(float px, float py)
{
	this->x = px;
	this->y = py;
	this->dx = 0.3;
	this->dy = 0.3;
}
Bala::~Bala()
{
}

void Bala::mover()
{
 }
void Bala::borrar()
{
 }
void Bala::dibujar()
{
 }
int Bala::getY()
{
	return y;
 }
int Bala::getX()
{
	return x;
 }

class Balas1 :public Bala
{
public:
	Balas1(float px, float py);
	~Balas1();
	void borrar();
	void mover();
	void dibujar();
	int getY();
	int getX();
};

Balas1::Balas1(float px, float py) :Bala(px, py)
{

}

Balas1::~Balas1()
{

}
void Balas1::borrar()
{
	Console::SetCursorPosition(x, y); cout << "  ";
}
void Balas1::mover()
{
	if (y < 3 || y> 19)
	{
		dy *= -1;
	}

	y += dy;

}
void Balas1::dibujar()
{

	Console::SetCursorPosition(x, y); cout << " *";

}
int Balas1::getY()
{
	return y;

}
int Balas1::getX()
{
	return x;

}

class Balas2 :public Bala
{
public:
	Balas2(float px, float py);
	~Balas2();
	void borrar();
	void mover();
	void dibujar();
	int getY();
	int getX();
};

Balas2::Balas2(float px, float py) :Bala(px, py)
{

}

Balas2::~Balas2()
{

}
void Balas2::borrar()
{
	Console::SetCursorPosition(x, y); cout << "  ";
}
void Balas2::mover()
{
	if (x < 48 || x> 65)
	{
		dx *= -1;
	}

	x += dx;

}
void Balas2::dibujar()
{

	Console::SetCursorPosition(x, y); cout << " *";

}
int Balas2::getY()
{
	return y;

}
int Balas2::getX()
{
	return x;

}

class Balas3 :public Bala
{
public:
	Balas3(float px, float py);
	~Balas3();
	void borrar();
	void mover();
	void dibujar();
	int getY();
	int getX();
};

Balas3::Balas3(float px, float py) :Bala(px, py)
{

}

Balas3::~Balas3()
{

}
void Balas3::borrar()
{
	Console::SetCursorPosition(x, y); cout << "  ";
}
void Balas3::mover()
{
	if (x < 53 || x> 76)
	{
		dx *= -1;
	}

	x += dx;

}
void Balas3::dibujar()
{

	Console::SetCursorPosition(x, y); cout << " *";

}
int Balas3::getY()
{
	return y;

}
int Balas3::getX()
{
	return x;

}

class Balas4 :public Bala
{
public:
	Balas4(float px, float py);
	~Balas4();
	void borrar();
	void mover();
	void dibujar();
	int getY();
	int getX();
};

Balas4::Balas4(float px, float py) :Bala(px, py)
{

}

Balas4::~Balas4()
{

}
void Balas4::borrar()
{
	Console::SetCursorPosition(x, y); cout << "  ";
}
void Balas4::mover()
{
	if (x < 53 || x> 76)
	{
		dx *= -1;
	}

	x += dx;

}
void Balas4::dibujar()
{

	Console::SetCursorPosition(x, y); cout << " *";

}
int Balas4::getY()
{
	return y;

}
int Balas4::getX()
{
	return x;

}

class Balas5 :public Bala
{
public:
	Balas5(float px, float py);
	~Balas5();
	void borrar();
	void mover();
	void dibujar();
	int getY();
	int getX();
};

Balas5::Balas5(float px, float py) :Bala(px, py)
{

}

Balas5::~Balas5()
{

}
void Balas5::borrar()
{
	Console::SetCursorPosition(x, y); cout << "  ";
}
void Balas5::mover()
{
	if (y < 14 || y> 22)
	{
		dy *= -1;
	}

	y += dy;

}
void Balas5::dibujar()
{

	Console::SetCursorPosition(x, y); cout << " *";

}
int Balas5::getY()
{
	return y;

}
int Balas5::getX()
{
	return x;

}

class Balas6 :public Bala
{
public:
	Balas6(float px, float py);
	~Balas6();
	void borrar();
	void mover();
	void dibujar();
	int getY();
	int getX();
};

Balas6::Balas6(float px, float py) :Bala(px, py)
{

}

Balas6::~Balas6()
{

}
void Balas6::borrar()
{
	Console::SetCursorPosition(x, y); cout << "  ";
}
void Balas6::mover()
{
	if (y < 8 || y> 21)
	{
		dy *= -1;
	}

	y += dy;

}
void Balas6::dibujar()
{

	Console::SetCursorPosition(x, y); cout << " *";

}
int Balas6::getY()
{
	return y;

}
int Balas6::getX()
{
	return x;

}

class Balas7 :public Bala
{
public:
	Balas7(float px, float py);
	~Balas7();
	void borrar();
	void mover();
	void dibujar();
	int getY();
	int getX();
};

Balas7::Balas7(float px, float py) :Bala(px, py)
{

}

Balas7::~Balas7()
{

}
void Balas7::borrar()
{
	Console::SetCursorPosition(x, y); cout << "  ";
}
void Balas7::mover()
{
	if (x < 9 || x> 29)
	{
		dx *= -1;
	}

	x += dx;

}
void Balas7::dibujar()
{

	Console::SetCursorPosition(x, y); cout << " *";

}
int Balas7::getY()
{
	return y;

}
int Balas7::getX()
{
	return x;

}

class Balas8 :public Bala
{
public:
	Balas8(float px, float py);
	~Balas8();
	void borrar();
	void mover();
	void dibujar();
	int getY();
	int getX();
};

Balas8::Balas8(float px, float py) :Bala(px, py)
{

}

Balas8::~Balas8()
{

}
void Balas8::borrar()
{
	Console::SetCursorPosition(x, y); cout << "  ";
}
void Balas8::mover()
{
	if (y < 3 || y> 22)
	{
		dy *= -1;
	}

	y += dy;

}
void Balas8::dibujar()
{

	Console::SetCursorPosition(x, y); cout << " *";

}
int Balas8::getY()
{
	return y;

}
int Balas8::getX()
{
	return x;

}

class Balas9 :public Bala
{
public:
	Balas9(float px, float py);
	~Balas9();
	void borrar();
	void mover();
	void dibujar();
	int getY();
	int getX();
};

Balas9::Balas9(float px, float py) :Bala(px, py)
{

}

Balas9::~Balas9()
{

}
void Balas9::borrar()
{
	Console::SetCursorPosition(x, y); cout << "  ";
}
void Balas9::mover()
{
	if (y < 11 || y> 20)
	{
		dy *= -1;
	}

	y += dy;

}
void Balas9::dibujar()
{

	Console::SetCursorPosition(x, y); cout << " *";

}
int Balas9::getY()
{
	return y;

}
int Balas9::getX()
{
	return x;

}