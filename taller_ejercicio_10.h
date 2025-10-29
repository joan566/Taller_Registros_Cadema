#ifndef TALLER_EJERCICIO_10_H
#define TALLER_EJERCICIO_10_H

#include "models.h"
#include "utilites.h"
#include<vector>

void personasPorCiudad(vector<Persona> &personas) {
	
	cout  << "\n------------------------------------------------------------------------------------------------------------------------\n";
	if (personas.empty()) {
		cout << "No hay personas registradas aun.";
		return; 
	}
	
	string ciudad = obtenerCadena("una ciudad");
	
	cout << "Las personas que viven en " << ciudad << " son: ";
	bool hay = false;
	for(Persona persona : personas) {
		if(toLower(persona.ciudad) == toLower(ciudad)) {
			hay = true;
			cout <<"\n {Nombre: " << persona.nombre << ", Edad: " << persona.edad << ", Direccion: [" << persona.ciudad << ", " << persona.dir.barrio << ", "  << persona.dir.calle << "] }"<<endl;	
		}
	}
	
	if(!hay) { cout << "0"; }
	cout  << "\n------------------------------------------------------------------------------------------------------------------------";
}

#endif
