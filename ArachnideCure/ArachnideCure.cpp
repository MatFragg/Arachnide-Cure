#include "pch.h"
#include "Juego.h"

using namespace System;

int main()
{
    srand(time(nullptr));
    Console::CursorVisible = false;
    Juego* objJuego;
    objJuego = new Juego();
    objJuego->iniciarJuego();
        
    return 0;
}
