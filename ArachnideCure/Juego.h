#pragma once
#include "conio.h"
#include "Personaje.h"
#include "Aliado.h"
#include "Enemigo.h"
#include "Bala.h"
#include "Mapa.h"
#include "Menu.h"
#include "Operaciones.h"
#include "Resultado.h"


class Juego
{
public:
	Juego();
	~Juego();
    void iniciarJuego();

private:
    Personaje* objPersonaje;
    Enemigo1* objEnemigo;
    Enemigo2* objEnemigo2;
    Enemigo3* objEnemigo3;
    Enemigo4* objEnemigo4;
    Operaciones* objOperacion;
    Aliado1* objAliado;
    Aliado2* objAliado2;
    Aliado3* objAliado3;
    Resultados* objResultado;
    Balas1* objbala;
    Balas2* objbala2;
    Balas3* objbala3;
    Balas4* objbala4;
    Balas5* objbala5;
    Balas6* objbala6;
    Balas7* objbala7;
    Balas8* objbala8;
    Balas9* objbala9;
};

Juego::Juego()
{

	objPersonaje = new Personaje();
	objEnemigo = new Enemigo1(20, 15);
    objEnemigo2 = new Enemigo2(53, 8);
    objEnemigo3 = new Enemigo3(41, 11);
    objEnemigo4 = new Enemigo4(33, 20);
    objOperacion = new Operaciones();
    objAliado = new Aliado1(9,12);
    objAliado2 = new Aliado2(21,4);
    objAliado3 = new Aliado3(69,14);
    objResultado = new Resultados();
    objbala = new Balas1(34,19);
    objbala2 = new Balas2(50, 17);
    objbala3 = new Balas3(54, 10);
    objbala4 = new Balas4(54, 7);
    objbala5 = new Balas5(60, 15);
    objbala6 = new Balas6(41, 20);
    objbala7 = new Balas7(10, 7);
    objbala8 = new Balas8(33,18);
    objbala9 = new Balas9(20,15);
}

Juego::~Juego()
{
    delete[]objPersonaje;
    delete[]objEnemigo;
    delete[]objEnemigo2;
    delete[]objEnemigo3;
    delete[]objEnemigo4;
    delete[]objOperacion;
    delete[]objAliado;
    delete[]objAliado2;
    delete[]objAliado3;
    delete[]objResultado;
    delete[]objbala;
    delete[]objbala2;
    delete[]objbala3;
    delete[]objbala4;
    delete[]objbala5;
    delete[]objbala6;
    delete[]objbala7;
    delete[]objbala8;
    delete[]objbala9;
}

void Juego::iniciarJuego()
{
  
    bool primero = false;
    bool medio = false;
    bool segundo = false;
    bool juego1 = false;
    int opc;
    int score=0;
    int vidas=3;
    opc = Menu();

    if (opc == 1)
    {
        int suma;

        dibujar_mapa(mapa);

      
        while (!primero)
        {
            //Activar las funciones de las diferentes entidades
            objPersonaje->borrar();
            objPersonaje->mover();
            objPersonaje->dibujar();
            objPersonaje->colision();

            objEnemigo->borrar();
            objEnemigo->mover();
            objEnemigo->dibujar();
            
            objEnemigo2->borrar();
            objEnemigo2->mover();
            objEnemigo2->dibujar();

            objEnemigo3->borrar();
            objEnemigo3->mover();
            objEnemigo3->dibujar();

            objEnemigo4->borrar();
            objEnemigo4->mover();
            objEnemigo4->dibujar();

            asignarColor(10);
            objAliado->borrar();
            objAliado->mover();
            objAliado->dibujar();

            objAliado2->borrar();
            objAliado2->mover();
            objAliado2->dibujar();

            objAliado3->borrar();
            objAliado3->mover();
            objAliado3->dibujar();

            asignarColor(4);
            objbala->borrar();
            objbala->mover();
            objbala->dibujar();

            objbala2->borrar();
            objbala2->mover();
            objbala2->dibujar();

            Console::SetCursorPosition(0, 0); cout << "   ";
            Console::SetCursorPosition(43, 3); asignarColor(9), cout << char(219);

            //Colision con los Aliados7Documentos
            if (objPersonaje->cogerAliado() == true)
            {
               objAliado->eliminar();
               score = score+100;
               Console::SetCursorPosition(0, 0); cout << "   ";
               _sleep(500);
            }

            if (objPersonaje->cogerAliado2()==true)
            {
                objAliado2->eliminar();
                score = score + 100;
                Console::SetCursorPosition(0, 0); cout << "   ";
                _sleep(500);
            }

            if (objPersonaje->cogerAliado3() == true)
            {
                objAliado3->eliminar();
                score = score + 100;
                Console::SetCursorPosition(0, 0); cout << "   ";
                _sleep(500);
            }
             
            //Colision de los Enemigos con el Personaje
            if (objPersonaje->GetX() == objEnemigo->getX() && objPersonaje->GetY() == objEnemigo->getY())
            {
                vidas--;
                _sleep(500);

            }
            if (objPersonaje->GetX() == objEnemigo2->getX() && objPersonaje->GetY() == objEnemigo2->getY())
            {
                vidas--;
                _sleep(500);

            }
            if (objPersonaje->GetX() == objEnemigo3->getX() && objPersonaje->GetY() == objEnemigo3->getY())
            {
                vidas--;
                _sleep(500);

            }
            if (objPersonaje->GetX() == objEnemigo4->getX() && objPersonaje->GetY() == objEnemigo4->getY())
            {
                vidas--;
                _sleep(500);

            }

            
            //Colision de las Balas con el Personaje
            if (objPersonaje->GetX() == objbala->getX() && objPersonaje->GetY() == objbala->getY())
            {
                vidas--;
                _sleep(500);

            }

            if (objPersonaje->GetX() == objbala2->getX() && objPersonaje->GetY() == objbala2->getY())
            {
                vidas--;
                _sleep(500);

            }

            //Contador de Vidas
            if (vidas==0)
            {
                Console::Clear();
                objResultado->perder();
                Console::SetCursorPosition(15, 20);	cout << "Puntuacion:" << score << endl;
                Console::Clear();
                break;
            }

            Console::SetCursorPosition(1, 25); asignarColor(14), cout << "Objetivo: Recolectar los documentos de investigacion y llevarlos a su ordenador"  << endl;
            Console::SetCursorPosition(3, 26); asignarColor(11), cout << "Puntuacion: "<< score << endl;
            Console::SetCursorPosition(3, 27); asignarColor(11), cout << "Vidas: " << vidas << endl;

            //Cierre del programa
            if (objPersonaje->concluir() == true)
            {
                primero = 1;
                break;

            }

            _sleep(40);
        }

         //Segunda parte del Juego
        while (!medio && primero == 1)
        {
            Console::Clear();

            int sumaIngresada, multiplicacionIngresada;
            float restaIngresada;
            int resultadoSuma = objOperacion->operarSuma();
            float resultadoResta = objOperacion->operarResta();
            int resultadoMultiplicacion = objOperacion->operarMultipicacion();
            bool todosLosResultados = (sumaIngresada == resultadoSuma) && (restaIngresada == resultadoResta) && (multiplicacionIngresada == resultadoMultiplicacion);
            
            asignarColor(9);
            Console::SetCursorPosition(1, 1); cout << "Ingresando al Sistema..." << endl;
            Console::SetCursorPosition(1, 2); cout << "Ingrese la claves correspondientes..." << endl;
            _getch();
            asignarColor(11);
            Console::SetCursorPosition(30, 13); cout << "Clave 1: Encuentre la suma de " << objOperacion->numero1() << " + " << objOperacion->numero2() << ":" << endl;
            Console::SetCursorPosition(30, 14); cin >> sumaIngresada;
            Console::SetCursorPosition(30, 15); cout << "Clave 2:Encuentre la resta de " << objOperacion->numero2() << " - " << objOperacion->numero1() << ":" << endl;
            Console::SetCursorPosition(30, 16); cin >> restaIngresada;
            Console::SetCursorPosition(30, 17); cout << "Clave 3:Encuentre la resta de " << objOperacion->numero1() << " x " << objOperacion->numero2() << ":" << endl;
            Console::SetCursorPosition(30, 18); cin >> multiplicacionIngresada;

           Console::SetCursorPosition(30, 19); cout << "Acceso concedido...Ingresando a sistema...";
           Console::SetCursorPosition(30, 20); cout << "Archivos subidos...";
           _getch();
            if (sumaIngresada = resultadoSuma)
            {
                score = 100 + score;
            }
            if (restaIngresada == resultadoResta)
            {
                score = 200 + score;
            }
            if (multiplicacionIngresada == resultadoMultiplicacion)
            {
                score = 500 + score;
            }
            
            if (!todosLosResultados)
            {
                medio = 1;
                Console::Clear();
            }
            
        }

        if (medio = 1)
        {
            dibujar_mapa(mapa);
          

            while (1)
            {
                //Personaje
                objPersonaje->borrar();
                objPersonaje->mover();
                objPersonaje->dibujar();
                objPersonaje->colision();

                //Balas
                asignarColor(6);
                objbala3->borrar();
                objbala3->mover();
                objbala3->dibujar();

                objbala4->borrar();
                objbala4->mover();
                objbala4->dibujar();

                objbala5->borrar();
                objbala5->mover();
                objbala5->dibujar();

                objbala6->borrar();
                objbala6->mover();
                objbala6->dibujar();

                objbala7->borrar();
                objbala7->mover();
                objbala7->dibujar();

                objbala8->borrar();
                objbala8->mover();
                objbala8->dibujar();

                objbala9->borrar();
                objbala9->mover();
                objbala9->dibujar();


               
                //Colision de las balas

                if (objPersonaje->GetX() == objbala3->getX() && objPersonaje->GetY() == objbala3->getY())
                {
                    vidas--;
                    _sleep(500);

                }
                if (objPersonaje->GetX() == objbala4->getX() && objPersonaje->GetY() == objbala4->getY())
                {
                    vidas--;
                    _sleep(500);

                }
                if (objPersonaje->GetX() == objbala5->getX() && objPersonaje->GetY() == objbala5->getY())
                {
                    vidas--;
                    _sleep(500);

                }
                if (objPersonaje->GetX() == objbala6->getX() && objPersonaje->GetY() == objbala6->getY())
                {
                    vidas--;
                    _sleep(500);

                }
                if (objPersonaje->GetX() == objbala7->getX() && objPersonaje->GetY() == objbala7->getY())
                {
                    vidas--;
                    _sleep(500);

                }
                if (objPersonaje->GetX() == objbala8->getX() && objPersonaje->GetY() == objbala8->getY())
                {
                    vidas--;
                    _sleep(500);

                }
                if (objPersonaje->GetX() == objbala9->getX() && objPersonaje->GetY() == objbala9->getY())
                {
                    vidas--;
                    _sleep(500);

                }
               

                //Determinante del juego(Ganar-Perder)

                if (vidas == 0)
                {
                    Console::Clear();
                    objResultado->perder();
                    Console::SetCursorPosition(15, 20);	cout << "Puntuacion:" << score << endl;
                    break;
                }


                //Objetos en Pantalla
                Console::SetCursorPosition(1, 25); asignarColor(14), cout << "Objetivo: Salir del Lugar" << endl;
                Console::SetCursorPosition(3, 26); asignarColor(11), cout << "Puntuacion: " << score << endl;
                Console::SetCursorPosition(3, 27); asignarColor(11), cout << "Vidas: " << vidas << endl;


                if (objPersonaje->concluir2() == true)
                {
                    segundo = 1;
                    Console::Clear();
                    objResultado->ganar();
                    Console::SetCursorPosition(15, 20);	cout << "Puntuacion:" << score << endl;
                    _getch();
                    break;

                }

                _sleep(40);
            }


        }
    }

    system("pause>0");

}