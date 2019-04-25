#include "Prestamo.h"

Prestamo::Prestamo(){
	
}
Prestamo::Prestamo(Fecha fechaprestamo,Fecha fechaentrega, ArtiPrestamo* artiprestamo,Estudiante* estudiante){
	this->fechaprestamo=fechaprestamo;
	this->fechaentrega=fechaentrega;
	this->artiprestamo=artiprestamo;
	this->estudiante=estudiante;
	
}
Prestamo::~Prestamo(){
	
}
