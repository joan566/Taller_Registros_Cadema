#include<iostream>
#include<cctype>

using namespace std;

int countVocal(string text) {
	string vocales = "aeiou";
	
	int count = 0;
	for(char letter : text) {
		for(char vocal : vocales) {
			if(tolower(letter) == vocal)
				count++;
		}
	}
	
	return count;
}

int main() {
	
	string name;
	cout << "Digite su nombre completo: "; getline(cin, name);
	
	cout << "El numero de vocales que tiene su nombre es: " << countVocal(name);
}
