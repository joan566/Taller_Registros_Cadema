#ifndef MODELS_H
#define MODELS_H

#include<iostream>
#include<string>

using namespace std;

struct Direccion {
	string calle;
	string barrio;
};

struct Persona {
	string nombre;
	int edad;
	string ciudad;
	Direccion dir;
};

namespace Basico {
	struct Persona {
	    string nombre;
	    int edad;
	    string ciudad;
	};
}
#endif
