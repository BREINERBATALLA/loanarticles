#include "Articulo.h"


Articulo::Articulo(){
	
}
Articulo::Articulo(int codigo,string nombre,int valor, bool Estado,Fecha fechacreacion){
	this->codigo=codigo;
	this->nombre=nombre;
	this->valor=valor;
	this->Estado=Estado;
	this->fechacreacion=fechacreacion;
}
Articulo::Articulo(int codigo,string nombre,int valor){
	this->codigo=codigo;
	this->nombre=nombre;
	this->valor=valor;
}



Articulo::~Articulo(){
	
}
