#ifndef TALLER_EJERCICIO_6_H
#define TALLER_EJERCICIO_6_H

#include<iostream>
#include<string>
#include "utilites.h"
#include "models.h"

using namespace std;

void registroBasico(){ 

    int n = obtenerNumero("el numero de personas a registrar");
    Basico::Persona datos[n];

    for(int i = 0; i < n; i++){
		
		cout << endl;
        datos[i].nombre = obtenerCadena("el nombre de la persona");
        datos[i].edad = obtenerNumero("la edad de la persona");
        datos[i].ciudad = obtenerCadena("la ciudad de la persona");

    }


    cout << "La base de datos tiene " << n << " usuarios registrados \n" << endl;
    for(int i = 0; i < n; i++){
		cout << "\n--------------------------------------------------------------------------------------\n";
		
        cout << "                                        Usuario " << i+1 << ": " << endl;
        cout << "Nombre: " << datos[i].nombre << endl;;
        cout << "Edad: " << datos[i].edad << endl;
        cout << "Ciudad: " << datos[i].ciudad << endl;

    }
}

#endif
