#include <iostream>
#include <mysql.h>
#include "Persona.h"
using namespace std;
class Proveedor : Persona{
    private: string nit;
public:
	Proveedor() {
	}
	Proveedor(string nom, string dir, int tel, string n) : Persona(nom, dir, tel) {
		nit = n;

	}

	void setNit(string n) { nit = n; }
	void setNombres(string nom) { nombre = nom; }
	void setDireccion(string dir) { direccion = dir; }
	void setTelefono(int tel) { telefono = tel; }
	string getNit() { return nit; }
	string getNombres() { return nombre; }
	string getDireccion() { return direccion; }
	int getTelefono() { return telefono; }
};

