/**
* @file Estudiante.h
* @author Breiner Batalla y Angie Montes
* @brief Cabecera de Estudiante.h, recibe la cabecera de Persona.h, hereda de Persona.h
*/



#ifndef ESTUDIANTE_H_
#define ESTUDIANTE_H_

#include<iostream>
#include "Persona.h"
#include <string>

using namespace std;
/**
* @class Estudiante
* @brief  Clase que crea objetos de tipo Estudiante
*/



class Estudiante: public Persona{
private:
	/**!< numero entero codigo,atributo de la clase Estudiante*/
	int codigo;
	/**!< numero entero multa, atributo de la clase Estudiante */
	int multa=0 ;

	
	
	
public:
	/**
	* @brief  contructor por defecto de la clase Estudiante
	*/
	Estudiante();
	/**
	* @brief  contructor de la clase Estudiante
	*/
	Estudiante(string nombre, int edad, string apellido, int codigo,int multa);
	/**
	* @brief  destructor de la clase Estudiante
	*/
	~Estudiante();
	
	
	/**
	* @brief  metodo para modificar el codigo del Estudiante
	* @param numero entero codigo
	*/
	void setCodigo(int codigo){
		this->codigo = codigo;
	}
	/**
	* @brief  metodo para consultar el codigo del Estudiante
	* @return numero entero codigo
	*/
	int getCodigo(){
		return codigo;
	}
	/**
	* @brief  metodo para modificar la multa del Estudiante
	* @param numero entero multa
	*/
	void setMulta(int multa){
		this->multa =  multa;
	}
	/**
	* @brief  metodo para consultar la multa del Estudiante
	* @return numero entero multa
	*/
	int getMulta(){
		return multa;
	}

	
	
};
#endif
