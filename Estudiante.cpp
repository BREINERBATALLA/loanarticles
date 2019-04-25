
#include "Estudiante.h"


Estudiante::Estudiante() {
	
	
}

Estudiante::Estudiante (string nombre, int edad, string apellido, int codigo,int multa):Persona(nombre, edad, apellido){
	this->codigo = codigo;
	this->multa = multa;
	
}



Estudiante::~Estudiante() {
	
}
