/**
* @file Prestamo.h
* @author Breiner Batalla y Angie Montes
* @brief Cabecera de prestamo.h, la cual recibe dos objetos fecha, un estudiante puntero y un articulo de prestamo puntero.
*/


#ifndef PRESTAMO_H
#define PRESTAMO_H
#include "ArtiPrestamo.h"
#include "Estudiante.h"
#include "Fecha.h"

/**
* @class Prestamo
* @brief  Clase que crea objetos de tipo Prestamo
*/

class Prestamo{
private:
	/**!< atributo objeto fecha*/
	Fecha fechaprestamo;
	/**!< atributo objeto fecha*/
    Fecha fechaentrega;
	/**!< atributo objeto estudiante puntero*/
	Estudiante* estudiante;
	/**!< atributo objeto articulo de prestamo puntero*/
	ArtiPrestamo* artiprestamo;
		
public:
	/**
	* @brief  contructor por defecto de la clase prestamo	
	*/
	Prestamo();
	/**
	* @brief  contructor de la clase prestamo	
	*/
	Prestamo(Fecha fechaprestamo,Fecha fechaentrega,ArtiPrestamo* artiprestamo,Estudiante* estudiante);
	/**
	* @brief destructor de la clase prestamo	
	*/
	~Prestamo();
	/**
	* @brief  metodo para modificar la fecha del prestamo
	* @param fecha de prestamo
	*/
	void setFechaPrestamo(Fecha fechaprestamo){
		this->fechaprestamo=fechaprestamo;
	}
	/**
	* @brief  metodo para modificar la fecha de entrega del prestamo
	* @param fecha de entrega
	*/
	void setFechaEntrega(Fecha fechaentrega){
		this->fechaentrega=fechaentrega;
	}
	/**
	* @brief  metodo para consultar la fecha de prestamo
	* @return fecha de prestamo
	*/
	Fecha getFechaPrestamo(){
		return fechaprestamo;
	}
	/**
	* @brief metodo para consultar la fecha de entrega 	del prestamo
	* @return fecha de entrega
	*/
	Fecha getFechaEntrega(){
		return fechaentrega;
	}
	/**
	* @brief  metodo para modificar el estudiante de la clase prestamo	
	* @param estudiante por referencia
	*/
	void setEstudiante(Estudiante* estudiante){
		this->estudiante = estudiante;
	}
	/**
	* @brief  metodo para consultar el estudiante de la clase prestamo	
	* return estudiante
	*/
	Estudiante* getEstudiante(){
		return estudiante;
	}
	/**
	* @brief  metodo para modificar el articulo de prestamo, de la clase prestamo
	* @param articulo de prestamo por referencia
	*/
	void setArtiPrestamo(ArtiPrestamo*  artiprestamo){
		this->artiprestamo=artiprestamo;
	}
	/**
	* @brief  metodo para consultar el articulo de prestamo, de la clase prestamo
	* @return articulo de prestamo
	*/
	ArtiPrestamo* getArtiPrestamo(){
		return artiprestamo;
	}
	
	
	
	
	
	
};

#endif

