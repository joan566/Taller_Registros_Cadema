#ifndef TALLER_EJERCICIO_10_H
#define TALLER_EJERCICIO_10_H

#include "taller_ejercicio_15.h"
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
	
	cout << "Las personas que viven en cartagena son: \n";
	for(Persona persona : personas) {
		if(toLower(persona.ciudad) == toLower(ciudad))
			cout <<"\n [Nombre: {"<<persona.nombre<<"} | Edad: {"<<persona.edad<<"} | Direccion : {"<<persona.ciudad<<","<<persona.dir.barrio<<","<<persona.dir.calle<<"} ]"<<endl;	
	}
	
	cout  << "\n------------------------------------------------------------------------------------------------------------------------";
}

#endif
