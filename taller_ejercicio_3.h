#ifndef TALLER_EJERCICIO_3_H
#define TALLER_EJERCICIO_3_H

#include "utilites.h"
#include <string>
#include<cctype>
using namespace std; 

       


void isPalindromo() {
	string pal, palTemp;
	bool correctValue;
	
	do {
		correctValue = true;
	    pal = obtenerCadena("una palabra para ver si es un palindromo");
	    
	    palTemp = "";
	    for (int i = pal.size() - 1; i >= 0; i--){
	    	if(isalpha(pal[i]))
	        	palTemp.push_back(pal[i]);
	        else {      								// Si el caracter no es una letra como " "
	        	cout << "Porfavor digite caracteres valido. No incluya espacios.\n\n";
	        	correctValue = false;
	        	break;
			}
	    }
	} while(!correctValue);
        
    cout << endl;
    pal == palTemp ? cout << "Es un palindromo" : cout << "No es un palindromo";
    cout << "\n---------------------------------------------------------------\n";
}

#endif
