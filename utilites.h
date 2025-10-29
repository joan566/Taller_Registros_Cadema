#ifndef UTILITES_H
#define UTILITES_H

#include<iostream>
#include<string>
using namespace std;

string obtenerCadena(string text) {
	
	string cadena;
	cout << "Digite " << text << ": "; getline(cin, cadena);
	
	return cadena;
}

int obtenerNumero(string text) {
	
	int num;
	cout << "Digite " << text << ": "; cin >> num;
	cin.ignore();
	
	return num;
}

string toLower(string texto) {
    for (char &c : texto) {
    	c = tolower(c);
	}
    return texto;
}

#endif
