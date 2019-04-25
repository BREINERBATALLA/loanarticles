/**
* @file Persona.h
* @author Breiner Batalla y Angie Montes
* @brief Cabecera de la clase Persona.h
*/


#ifndef PERSONA_H_
#define PERSONA_H_


#include <iostream>
#include <string>
#include <vector>


using namespace std;

/**
* @class Persona
* @brief Clase para crear Objetos de tipo Persona
*/

class Persona{
	
protected:
	/**!< string nombre, atributo de la clase Persona*/
	string nombre;
	/**!< numero entero edad, atributo de la clase Persona*/
	int edad;
	/**!< string apellido, atributo de la clase Persona*/
	string apellido;
	
	
public:
	/**
	* @brief  constructor por defecto de la clase Persona
	*/
	Persona();
	/**
	* @brief  constructor de la clase Persona
	*/
	Persona(string nombre, int edad, string apellido) ; 
	/**
	* @brief  destructor de la clase Persona
	*/
	~Persona();
	
	string getNombre(){
		return this->nombre;
	}
	
	void setNombre(string nombre){
		this->nombre = nombre;
	}
	
	int getEdad(){
		return this->edad;
	}
	
	void setEdad(int edad){
		this->edad = edad;
	}
	
	string getApellido(){
		return this->apellido;
	}
	
	void setApellido(string apellido){
		this->apellido = apellido;
	}
};
#endif

