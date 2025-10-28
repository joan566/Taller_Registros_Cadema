#include<iostream>
#include<cctype>
#include<vector>

using namespace std;

struct Persona {
	string name;
	int age;
};

void newPerson(vector<Persona> &personas) {
	
	string name;
	cout << "Digite  el nombre de la persona " << personas.size() + 1 << ": "; getline(cin, name);
	
	int age;
	cout << "Digite la edad de " << name << ": "; cin >> age;
	cin.ignore();
	
	Persona persona = {name, age};
	personas.push_back(persona);
	 
}

int numeroCaracteres(string text) {
	
	int count = 0;
	for(char letter : text) {
		if(isalpha(letter)) 
			count++;
	}
	
	return count;
}



int main() {
	vector<Persona> personas;
	
	int n;
	cout << "¿Cuantas personas desea ingresar?: "; cin >> n;
	cin.ignore();
	
	cout << "-----------------------------------------------------------\n";
	for(int i = 0; i < n; i++) {
		newPerson(personas);
		cout << "-----------------------------------------------------------\n";
	}
	
	for(Persona p : personas) {
		cout << "\nEl numero de caracteres que tiene (" << p.name <<"): " << numeroCaracteres(p.name);
	}
	
}
