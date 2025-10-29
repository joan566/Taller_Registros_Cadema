#include<iostream>
#include<iomanip>
#include<vector>

#include "models.h"
#include "utilites.h"
#include "taller_ejercicio_1.h"
#include "taller_ejercicio_2.h"
#include "taller_ejercicio_3.h"
#include "taller_ejercicio_4.h"
#include "taller_ejercicio_5.h"
#include "taller_ejercicio_6.h"
#include "taller_ejercicio_7.h"
#include "taller_ejercicio_8.h"
#include "taller_ejercicio_10.h"
#include "taller_ejercicio_11.h"
#include "taller_ejercicio_12.h"
#include "taller_ejercicio_13.h"
#include "taller_ejercicio_15.h"



int main() {
	vector<Persona> personas;
	int opcion = 0;
	do {
		system("cls");
		std::cout << "------------------------- MENU PRINCIPAL -------------------------\n";
		
		// Imprimir el menu de los 15 ejercicios
		for(int i = 0; i < 15; i++) {
			std::cout << setw(2) << right << i + 1 << ".- " << "Ejercicio #" << i + 1 << endl; 
		}
		std::cout << setw(5) << right << "16.- " << "Salir\n";
		
		opcion = obtenerNumero("una opcion");
		
		std::cout << "------------------------------------------------------------------";
		std::cout << endl;
		
		// Ejecuta la opcion ingresada
		system("cls");
		switch(opcion) {
			case 1:
				numeroCaracteres(); break;
				
			case 2: countVocal(); break;
			
			case 3: isPalindromo(); break;
			
			case 4: mayuscula_minuscula(); break;
			
			case 5: encontrarPalabraEnFrase(); break;
			
			case 6: registroBasico(); break;
			
			case 7: tresRegistros(); break;
			
			case 8: numeroCaracteresPersona(personas); break;
			
			case 9: Buscar_por_nombre(personas); break;
			
			case 10: personasPorCiudad(personas); break;
			
			case 11: promedioEdades(personas); break;
			
			case 12: alfabeticamente(personas); break;
			
			case 13: convertirA(personas); break;
			
			case 14: registrar_persona(personas); break;
			
			case 15: menu_Persona(personas); break;
			
			case 16: std::cout << "Saliendo del programa..."; break;
				
			default: std::cout << "Opcion no valida, intente con nuevamente." << endl; break;
		}
		cout << endl;
		if(opcion != 16) { system("pause"); }
		
	} while(opcion != 16);
	
	return 0;
}
