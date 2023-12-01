#pragma once
#include "iostream"
#include "conio.h"
#include "Color.h"

using namespace std;
using namespace System;

int Menu()
{
	int opcion;
	bool encender = false;
	bool terminar = false;

	while (!encender && !terminar)
	{
		cout << endl;
		asignarColor(13);
		Console::SetCursorPosition(5, 6); cout << "    /\\                  | |        (_)    | |  / ____|              ";
		Console::SetCursorPosition(5, 7); cout << "   /  \\   _ __ __ _  ___| |__  _ __  _  __| | | |    _   _ _ __ ___   ";
		Console::SetCursorPosition(5, 8); cout << "  / /\\ \\ | '__/ _` |/ __| '_ \| '_ \| |  / _` | | |   | | | | '__/ _ \\ ";
		Console::SetCursorPosition(5, 9); cout << " / ____ \\| | | (_| | (__| | | | | | | | (_| | | |___| |_| | |  | __/ ";
		Console::SetCursorPosition(5, 10); cout << "/_/    \\_\\_|  \\__,_|\\___|_| |_|_| |_|_|\\__,_|  \\_____\\__,_|_|  \\___| ";



		asignarColor(11);
		Console::SetCursorPosition(30, 13); cout << "Trabajo Parcial Grupo 5" << endl;
		Console::SetCursorPosition(30, 14); cout << " 1. INICIAR JUEGO " << endl;
		Console::SetCursorPosition(30, 15); cout << " 2. CREADORES     " << endl;
		Console::SetCursorPosition(30, 16); cout << " 3. CONTROLES     " << endl;
		Console::SetCursorPosition(30, 17); cout << " 4. HISTORIA     " << endl;
		Console::SetCursorPosition(30, 18); cout << " 5. SALIR         " << endl;
		cout << endl;
		asignarColor(15);
		Console::SetCursorPosition(30, 19); cout << "Seleccione una opcion:" << endl;
		Console::SetCursorPosition(30, 20); cin >> opcion;

		if (opcion < 1 || opcion > 5)
		{
			cout << "No existe la opcion..." << endl;
			cout << endl;
		}

		switch (opcion)
		{
		case 2:
			asignarColor(14);
			Console::SetCursorPosition(30, 22); cout << "Integrantes del grupo:" << endl;
			cout << endl;
			Console::SetCursorPosition(30, 24); cout << "- Ethan Matias Aliaga Aguirre    (u202318323)" << endl;
			Console::SetCursorPosition(30, 25); cout << "- Eryan Alexander Moreno Yactayo (u20231a890)" << endl;
			Console::SetCursorPosition(30, 26); cout << "- Piero Tenorio Medina           (u202318731)" << endl;
			break;

		case 3:
			asignarColor(13);
			Console::SetCursorPosition(30, 22); cout << "W= movimiento hacia arriba" << endl;
			Console::SetCursorPosition(30, 23); cout << "S= movimiento hacia abajo" << endl;
			Console::SetCursorPosition(30, 24); cout << "A= movimiento hacia la izquierda" << endl;
			Console::SetCursorPosition(30, 25); cout << "D= movimiento hacia la derecha" << endl;
			asignarColor(11);
			Console::SetCursorPosition(30, 26); cout << "Nota: Se recomienda tener la ventana ajustada a:" << endl;
			Console::SetCursorPosition(30, 27); cout << "Filas: 35" << endl;
			Console::SetCursorPosition(30, 28); cout << "Columnas: 80" << endl;
			break;

		case 4:
			asignarColor(15);
			
			Console::SetCursorPosition(1, 22); cout << "Historia";
			Console::SetCursorPosition(1, 23); cout << "Pedro es un investigador ambiental que esta aportando en la busqueda de una";
			Console::SetCursorPosition(1, 24); cout << "cura para la enfermedad que azotaba su ciudad.El cree firmemente ";
			Console::SetCursorPosition(1, 25); cout << "que las aranas que encontro y el veneno que estas producen pueden ser la clave ";
			Console::SetCursorPosition(1, 26); cout<<"para encontrar esa cura. El enviaria informes en fisico a un laboratorio ";
			Console::SetCursorPosition(1, 27); cout <<"en el extranjero para el avance de esta misma, pero al ingresar a su laboratorio ";
			Console::SetCursorPosition(1, 28); cout<<" se da cuenta que las aranas en las cuales estaba investigando ";
			Console::SetCursorPosition(1, 29); cout << "habian salido de sus recintos respectivos. Pedro tendra que arriesgar su propia";
			Console::SetCursorPosition(1, 30); cout << "vida para encontrar los informes y enviarlos en la computadora de su laboratorio ";
			Console::SetCursorPosition(1, 31); cout << "para asi poder encontrar la cura a la enfermedad que estaba azotando su ciudad." << endl;
			asignarColor(10);
			Console::SetCursorPosition(1, 32); cout << "OBJETIVO:Encontrar los docuemntos del veneno y enviarlos" << endl;
			Console::SetCursorPosition(1, 33); cout << "por su computadora";
			break;


		case 5:

			terminar = opcion == 5;
			encender = opcion == 5;
		}
		encender = opcion == 1;

		getch();
		system("cls");
	}

	return opcion;

}
