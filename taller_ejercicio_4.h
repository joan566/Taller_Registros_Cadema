#ifndef TALLER_EJERCICIO_4_H
#define TALLER_EJERCICIO_4_H

 
#include "utilites.h"
#include <iostream>
#include <string>
#include <cctype>


using namespace std;

void mayuscula_minuscula(){
	string cadena = obtenerCadena("la cadena que quiera trasformar");
	
	for(char &e : cadena){
		e = toupper(e);
	}
    cout << "\n La cadena en mayuscula : "<< cadena << endl;
   
   for(char &e : cadena){
		e = tolower(e);
	}
   cout<< "\n La cadena es minuscula : " <<cadena<< endl;	
}

#endif


