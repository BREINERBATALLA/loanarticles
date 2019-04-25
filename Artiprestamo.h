/**
* @file ArtiPrestamo.h
* @author Breiner Batalla y Angie Montes
* @brief Cabecera de ArtiPrestamo.h, hija de Articulo.h, recibe las cabeceras de Articulo.h y Estudiante.h
*/


#ifndef ARTIPRESTAMO_H
#define ARTIPRESTAMO_H

#include <iostream>
#include "Articulo.h"
#include "Estudiante.h"

/**
* @class ArtiPrestamo
* @brief  Clase que crea objetos de tipo articulo de prestamo
*/



class ArtiPrestamo: public Articulo{
private:
	/**!< atributo booleano de ArtiPrestamo*/
	bool disponibilidad;
	
public:
	/**
	* @brief  contructor por defecto de la clase ArtiPrestamo
	*/
	ArtiPrestamo();
	/**
	* @brief  primer constructor de la clase ArtiPrestamo
	*/
	ArtiPrestamo(int codigo,string nombre,int valor);
	/**
	* @brief  segundo constructor de la clase ArtiPrestamo
	*/
	ArtiPrestamo(int codigo,string nombre,int valor, bool Estado,bool disponibilidad,Fecha fechacreacion);
	/**
	* @brief  destructor de la clase ArtiPrestamo	
	*/
	~ArtiPrestamo();
	/**
	* @brief metodo para consultar la disponibilidad del articulo de prestamo
	* @return disponibilidad
	*/
	bool getDisponibilidad(){
		return disponibilidad;
	}
	/**
	* @brief metodo para modificar la disponibilidad del articulo de prestamo
	* @param booleano disponibilidad
	*/
	void setDisponibilidad(bool disponibilidad){
		this->disponibilidad=disponibilidad;
	}
	
	
	/**
	* @brief metodo para consultar la Depreciacion del articulo de prestamo
	* @param Objeto Fecha, fecha actual
	*/
	void Depreciacion(Fecha fechaactual);
	/**
	* @brief metodo para cambiar el estado del articulo de prestamo
	
	*/
	void CambioEstado();
	
};



#endif
