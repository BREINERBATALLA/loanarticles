#include "Profesor.h"


Profesor::Profesor(){
}

Profesor::Profesor(string nombre, int edad, string apellido, int codigoref) : Persona(nombre, edad, apellido) {
	this->codigoref = codigoref;
}

Profesor::~Profesor(){
}
