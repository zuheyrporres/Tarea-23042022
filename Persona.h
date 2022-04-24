#include<iostream>
using namespace std;
class Persona{

protected: string nombre, direccion;
		 int telefono = 0;
		 Persona() {
		 }
		 Persona(string nom, string dir, int tel) {
			 nombre = nom;
			 direccion = dir;
			 telefono = tel;

		 }
};


