#include<iostream>
#include<iomanip>
#include "utilites.h"
#include "taller_ejercicio_2.h"
#include "taller_ejercicio_4.h"
#include "taller_ejercicio_15.h"


int main() {
	int opcion = 0;
	vector<Persona> personas;
	do {

		std::cout << "\n------------------------- MENU PRINCIPAL -------------------------\n";
		
		for(int i = 0; i < 15; i++) {
			std::cout << setw(2) << right << i + 1 << ".- " << "Ejercicio #" << i + 1 << endl; 
		}
		std::cout << setw(5) << right << "16.- " << "Salir\n";
		
		opcion = obtenerNumero("una opcion: ");
		
		std::cout << "------------------------------------------------------------------";
		std::cout << endl;
		
		switch(opcion) {
			case 1:
				std::cout << "Pendiente"; break;
				
			case 2:
				countVocal(); break;
			case 3:
				std::cout << "Pendiente"; break;
			case 4:
				mayuscula_minuscula(); break;
			case 5:
				std::cout << "Pendiente"; break;
			case 6:
				std::cout << "Pendiente"; break;
			case 7:
				std::cout << "Pendiente"; break;
			case 8:
				cout; break;
			case 9:
				std::cout << "Pendiente"; break;
			case 10:
				std::cout << "Pendiente"; break;
			case 11:
				std::cout << "Pendiente"; break;
			case 12:
				std::cout << "Pendiente"; break;
			case 13:
				std::cout << "Pendiente"; break;
			case 14:
				registrar_persona(personas); break;
			case 15:
				menu_Persona(personas); break;
			case 16:
				std::cout << "Saliendo del programa..."; break;
				
			default:
				std::cout << "Opcion no valida, intente con nuevamente." << endl; break;
		}
		
	} while(opcion != 16);
	
	return 0;
}
