#ifndef TALLER_EJERCICIO_7_H
#define TALLER_EJERCICIO_7_H

#include "utilites.h"
#include "models.h"
#include<vector>

void tresRegistros() {
	Persona datos[3];
	for(int i = 0; i < 3; i++) {
		
		cout << endl;
		datos[i].nombre = obtenerCadena("el nombre de la persona");
        datos[i].edad = obtenerNumero("la edad de la persona");
        datos[i].ciudad = obtenerCadena("la ciudad de la persona");
        
	}
	
	cout << endl;
	for(Persona p : datos) {
		cout << p.nombre << " en mayuscula: ";
		for(char &i : p.nombre){
			i = toupper(i);
		}
		cout << p.nombre << endl;
	}
}

#endif
