#ifndef TALLER_EJERCICIO_5_H
#define TALLER_EJERCICIO_5_H


#include <string>
#include "utilites.h"

using namespace std;

void encontrarPalabraEnFrase() {
	string frase = obtenerCadena("una frase");
	string palabra = obtenerCadena("una palabra para ver si se encuentra en la frase");
	
	if (frase.find(palabra) != string::npos) {
    	cout << "La palabra se encontro";
	} else {
    	cout << "La palabra no esta";
	}	
}

#endif
