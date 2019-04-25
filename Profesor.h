/**
* @file Profesor.h
* @author Breiner Batalla y Angie Montes
* @brief Cabecera de la clase Profesor.h, y que ademas recibe la cabecera de Articulo.h y Persona.h
*/

#ifndef PROFESOR_H_
#define PROFESOR_H_

#include <iostream>
#include "Persona.h"
#include "Articulo.h"


using namespace std;
/**
* @class Profesor
* @brief Clase para crear Objetos de tipo Profesor
*/
class Profesor: public Persona{
private:
	int codigoref;
	
	
public:
	/**
	* @brief  constructor por defecto de la clase Profesor
	*/
	Profesor();
	/**
	* @brief  constructor de la clase Profesor
	*/
	Profesor(string nombre, int edad, string apellido, int codigoref);
	/**
	* @brief  destructor de la clase Persona
	*/
	~Profesor();
	/**
	* @brief  metodo para consultar el codigo 
	*/
	int getCodigoref(){
		return codigoref;
	}
	
	void setCodigoref(int codigoref){
		this->codigoref = codigoref;
	}

	

	
	
};
#endif

