/*
 * Main.c
 *
 *  Created on: 4 abr. 2021
 *      Author: Asier Brizuela
 */

#include "Mecanicas.h"
#include "IA.h"
#include <iostream>
using namespace std;

int main(int argc, char **argv) {

	Ficha **tablero = new Ficha*[COLUMNAS];
	int i;
	for (i = 0; i < COLUMNAS; ++i) {
		tablero[i] = new Ficha[FILAS];
	}
	limpiar(tablero);

	jugarPartida(tablero, true);

			//Liberar tablero
	liberarTablero(tablero);

}
