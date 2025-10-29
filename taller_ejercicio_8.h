#ifndef TALLER_EJERCICIO_8_H
#define TALLER_EJERCICIO_8_H

#include<iostream>
#include<cctype>
#include<vector>
#include "taller_ejecicio_15.h"

using namespace std;

void numeroCaracteres() {
	
	vector<Persona> personas = obtenerPersonas();

	for(Persona p : personas) {
		int count = 0;
		for(char letter : p.name) {
			if(isalpha(letter)) 
				count++;
		}
		cout << "El numero de caracteres de [" << p.name << "] = " << count;
	}
}

#endif
