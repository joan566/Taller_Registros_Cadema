#ifndef TALLER_EJERCICIO_2_H
#define TALLER_EJERCICIO_2_H

#include<iostream>
#include<cctype>
#include "utilites.h"

using namespace std;

void countVocal() {
	string name = obtenerCadena("su nombre completo");
	string vocales = "aeiou";
	
	int count = 0;
	for(char letter : name) {
		for(char vocal : vocales) {
			if(tolower(letter) == vocal)
				count++;
		}
	}
	
	cout << "El numero de vocales que tiene su nombre es: " << count;
}

#endif
