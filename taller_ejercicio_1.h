#ifndef TALLER_EJERCICIO_1_H
#define TALLER_EJERCICIO_1_H

#include<iostream>
#include<cctype>
#include<vector>
#include "utilites.h"
#include "taller_ejercicio_15.h"

using namespace std;

void numeroCaracteres() {
	string frase = obtenerCadena("una frase");

	cout << "\n---------------------------------------------------------------";
	int count = 0;
	for(char letter : frase) {
		if(letter != ' ') 
			count++;
	}
	cout << "\nEl numero de caracteres de [" << frase << "] = " << count;
		
	cout << "\n---------------------------------------------------------------";
}

#endif
