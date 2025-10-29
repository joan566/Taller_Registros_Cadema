#ifndef TALLER_EJERCICIO_12_H
#define TALLER_EJERCICIO_12_H

#include <iostream>
#include <algorithm>
#include <vector>
#include "models.h"
#include "utilites.h"

using namespace std;

bool comparador_de_nombres(const Persona &a, const Persona &b){
    return toLower(a.nombre) < toLower(b.nombre);
}

void alfabeticamente(vector<Persona> personas) {
    cout << "\n======= Lista de nombres (normal) =======\n";
    for (Persona &p : personas) {
        cout << "\nNombre: " << p.nombre;
    }

    sort(personas.begin(), personas.end(), comparador_de_nombres);

    cout << "\n\n======= Lista de nombres (alfabeticamente) =======\n";
    for (Persona &p : personas) {
        cout << "\nNombre: " << p.nombre;
    }
}

#endif
