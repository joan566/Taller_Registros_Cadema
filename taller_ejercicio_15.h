#ifndef TALLER_EJERCICIO_15_H
#define TALLER_EJERCICIO_15_H

#include "utilites.h"
#include "models.h"
#include <iostream>
#include <cctype>
#include <string>
#include <vector>

using namespace std;

string toLower(string texto) {
    for (char &c : texto) {
    	c = tolower(c);
	}
    return texto;
}



void registrar_persona(vector<Persona> &personas){
	

		Persona p; 
		p.nombre = obtenerCadena("el nombre de la persona");
		 
        do{
		
            p.edad = obtenerNumero("la edad de la persona");
            
        
            if(p.edad<0){
        	    cout<<" !!ERROR!! Ingrese una edad valida"<<endl;
		    }
        
        }while(p.edad<0);
        
        p.ciudad = obtenerCadena("la ciudad de la persona");
        
        p.dir.barrio = obtenerCadena("el barrio de la persona");
        
        p.dir.calle = obtenerCadena("la calle de la persona");

        personas.push_back(p);
	
	
	cout << "\n =========PERSONA INGRESADA CON EXITO======= \n"<<endl;
}

void Buscar_por_nombre(vector<Persona> &personas){
    if(personas.empty()){
    	cout <<"=======NO HAY REGISTROS====="<<endl;
    	return;
	}
	bool encontrado = false;

	
    string buscar = obtenerCadena("la persona que quiera buscar");
	
	cout<<"\n ======Buscados======="<<endl;
    for(Persona &p : personas){
    	if(toLower(p.nombre) == toLower(buscar)){
    		encontrado = true;
    		cout <<"\n |Nombre: {"<<p.nombre<<"} | Edad: {"<<p.edad<<"} | Direccion : {"<<p.ciudad<<","<<p.dir.barrio<<","<<p.dir.calle<<"} |"<<endl;
		}
	}
	if(!encontrado){
		cout <<"========NO SE ENCONTRO REGISTRO CON ESE NOMBRE=======" <<endl;
	}
}

void mostrar_registro( vector<Persona> &personas){
    if(personas.empty()){
    	cout <<"=======NO HAY REGISTROS====="<<endl;
    	return;
	}

	
	cout<<"\n ======REGISTRO======="<<endl;
    for(Persona &p : personas){
       	cout <<"\n |Nombre: {"<<p.nombre<<"} | Edad: {"<<p.edad<<"} | Direccion : {"<<p.ciudad<<","<<p.dir.barrio<<","<<p.dir.calle<<"} |"<<endl;
	}
	
}

void menu_Persona(vector<Persona> &personas){
   
   int op;
   
   do{
   	 
   	 cout << "\n=======MENU========\n" << endl;
   	 cout << "[1] Registrar una nueva persona. "<<endl;
   	 cout << "[2] Buscar persona por nombre."  <<endl;
   	 cout << "[3] Mostrar todas las personas registradas."<<endl;
   	 cout << "[4] Salir del programa."<<endl;
   	 op = obtenerNumero("una opcion");
   	 
   	  switch(op){
		
   	 case 1:
   	 	registrar_persona(personas);break;
   	 case 2:
   	 	Buscar_por_nombre(personas);break;
   	 case 3:
   	 	mostrar_registro(personas);break;
   	 case 4:
   	    cout << "\n Saliendo del programa..." << endl; break;
   	 default:
   	    cout << "\n !ERROR!/ingrese una opcion valida/ "<<endl;break;
     }
    
   	}while(op !=  4);	
	
}

#endif
