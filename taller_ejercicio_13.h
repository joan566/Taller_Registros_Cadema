#ifndef TALLER_EJERCICIO_13_H
#define TALLER_EJERCICIO_13_H

#include "models.h"
#include "utilites.h"
#include <iostream>
#include <vector>
using namespace std; 

void convertirA (vector<Persona> &personas) {
	for (Persona &p : personas) {
		string newName = "";
		for(char letter : toLower(p.nombre)) {
			if (letter == 'a')
				newName += '@';
			else
				newName += letter;
		}
		p.nombre = newName;
	} 
	
	cout << "\nCambios realizados con exito.";
	cout << "\n-----------------------------------------------------------\n";
}

#endif
