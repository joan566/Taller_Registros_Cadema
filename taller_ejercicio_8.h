#ifndef TALLER_EJERCICIO_8_H
#define TALLER_EJERCICIO_8_H

#include<iostream>
#include<cctype>
#include<vector>
#include "taller_ejercicio_15.h"

using namespace std;

void numeroCaracteresPersona(vector<Persona> &personas) {
	if(personas.empty()) {
		cout << "No hay personas registras aun.";
		return;
	}

	cout << "\n---------------------------------------------------------------";
	for(Persona p : personas) {
		int count = 0;
		for(char letter : p.nombre) {
			if(isalpha(letter)) 
				count++;
		}
		cout << "\nEl numero de caracteres de [" << p.nombre << "] = " << count;
	}
	cout << "\n---------------------------------------------------------------";
}

#endif
