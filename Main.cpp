#include<iostream>
#include<iomanip>
#include "utilites.h"
#include "taller_ejercicio_2.h"
#include "taller_ejercicio_8.h"


int main() {
	int opcion = 0;
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
				std::cout << "Pendiente"; break;
			case 5:
				std::cout << "Pendiente"; break;
			case 6:
				std::cout << "Pendiente"; break;
			case 7:
				std::cout << "Pendiente"; break;
			case 8:
				numeroCaracteres(); break;
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
				std::cout << "Pendiente"; break;
			case 15:
				std::cout << "Pendiente"; break;
			case 16:
				std::cout << "Saliendo del programa..."; break;
				
			default:
				std::cout << "Opcion no valida, intente con nuevamente." << endl; break;
		}
		
	} while(opcion < 1 || opcion > 15);
	
	return 0;
}
