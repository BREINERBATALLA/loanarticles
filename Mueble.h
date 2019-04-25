/**
* @file Mueble.h
* @author Breiner Batalla y Angie Montes
* @brief Cabecera de Mueble.h, el cual hereda los atributos y metodos de la clase Articulo.h, y ademas recibe un profesor puntero como atributo
*/


#ifndef MUEBLE_H
#define MUEBLE_H
#include "Articulo.h"
#include "Profesor.h"
/**
* @class Mueble
* @brief  Clase que crea objetos de tipo Mueble
*/


class Mueble: public Articulo{
private:
	/**!< atributo objeto  profesor puntero*/
	Profesor* profe;
	
	
public:
	/**
	* @brief  contructor por defecto de la clase mueble
	*/
	Mueble();
	/**
	* @brief  primer constructor  de la clase mueble
	*/
	Mueble(int codigo, string nombre, int valor);
	/**
	* @brief  constructor dos  de la clase mueble
	*/
	Mueble(int codigo,string nombre,int valor, bool Estado,Fecha fechacreacion,Profesor* profe);
	/**
	* @brief  destructor de la clase mueble
	*/
	~Mueble();
	/**
	* @brief  metodo para consultar el profesor de la clase mueble
	* @return profesor
	*/
	Profesor* getProfe(){
		return profe;
	}
	/**
	* @brief  metodo para modificar el profesor de la clase mueble
	* @param profesor por referencia
	*/
	void setProfesor(Profesor* profe){
		this->profe=profe;
	}
	/**
	* @brief  metodo pra calcular la depreciacion de la clase mueble
	* @param fecha actual 
	*/
	void Depreciacion(Fecha fechaactual);
	/**
	* @brief  metodo para cambiar el estado de la clase mueble
	*/
	void CambioEstado();
};
#endif
