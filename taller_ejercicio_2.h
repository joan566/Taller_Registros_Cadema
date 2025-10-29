#ifndef TALLER_EJERCICIO_2_H
#define TALLER_EJERCICIO_2_H

#include<iostream>
#include "utilites.h"

using namespace std;

void countVocal() {
	string name = obtenerCadena("su nombre completo");
	string vocales = "aeiou";
	
	int count = 0;
	for(char letter : toLower(name)) {
		for(char vocal : vocales) {
			if(letter == vocal)
				count++;
		}
	}
	
	cout << "El numero de vocales que tiene su nombre es: " << count;
}

#endif
