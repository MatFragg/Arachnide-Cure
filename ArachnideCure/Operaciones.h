#pragma once
#include "conio.h"
#include "ctime"
#include "iostream"

using namespace std;
using namespace System;


class Operaciones
{
public:
    Operaciones();
    ~Operaciones();
    int numero1();
    int numero2();
    int operarSuma();
    int operarSuma2();
    float operarResta();
    int operarMultipicacion();

private:
    int suma, resta, multiplicacion;

};

Operaciones::Operaciones()
{
    this->resta = 0;
    this->multiplicacion = 0;

}
Operaciones::~Operaciones()
{

}
int Operaciones::numero1()
{
    int numero1;

    numero1 = rand() % 10 - 1 + 1;

    return numero1;

}

int Operaciones::numero2()
{
    int numero2;

    numero2 = rand() % 20 - 1 + 1;

    return numero2;
}

int Operaciones::operarSuma()
{

    int sumaV;

    sumaV = numero1() + numero2();

    return sumaV;
}

float Operaciones::operarResta() {
    int resta1;
    resta1 = numero2() - numero1();


    return resta1;
}

int Operaciones::operarMultipicacion()
{
    int multiplicacion;
    int resultadoM = numero1() * numero2();

    return resultadoM;
}