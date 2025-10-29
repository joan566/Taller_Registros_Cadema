#ifndef TALLER_EJERCICIO_11_H
#define TALLER_EJERCICIO_11_H

#include "models.h"
#include<vector>

void promedioEdades(vector<Persona> personas) {
	
	if(personas.empty()) {
		cout << "No hay ninguna persona registrada aun.";
		return;
	}
	
	double promedio = 0;
	for(Persona persona : personas) {
		promedio += persona.edad;
	}
	
	cout << "\nEl promedio de todas las edades es de: " << promedio / personas.size() << endl;
}

#endif
