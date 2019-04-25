/**
* @file EquipoComputo.h
* @author Breiner Batalla y Angie Montes
* @brief Cabecera de EquipoComputo, hija de Articulo.h, recibe las cabeceras de Articulo.h y Profesor.h
*/



#ifndef EQUIPOCOMPUTO_H
#define EQUIPOCOMPUTO_H
#include<iostream>
#include "Articulo.h"
#include "Profesor.h"
/**
* @class EquipoComputo
* @brief  Clase que crea objetos de tipo EquipoComputo
*/


class EquipoComputo: public Articulo{
private:
	/**!< atributo objeto Profesor puntero*/
	Profesor* profe;
	
	
public:
	/**
	* @brief  contructor por defecto de la clase EquipoComputo
	*/
	EquipoComputo();
	/**
	* @brief  primer constructor de la clase EquipoComputo
	*/
	EquipoComputo(int codigo,string nombre, int valor);
	/**
	* @brief  segundo constructor de la clase EquipoComputo
	*/
	EquipoComputo(int codigo, string nombre, int valor, bool Estado,Fecha fechacreacion, Profesor* profe);
	/**
	* @brief  destructor de la clase EquipoComputo
	*/
	~EquipoComputo();
	/**
	* @brief  Metodo para consultar el profesor de la clase EquipoComputo
	* @return Profesor
	*/
	Profesor* getProfe(){
		return profe;
	}
	/**
	* @brief  Meotodo para modificar el profesor de la clase EquipoComputo
	* @param Profesor por referencia
	*/
	void setProfesor(Profesor* profe){
		this->profe=profe;
	}
	/**
	* @brief  Metodo para calcular la Depreciacion del EquipoComputo
	* @param Recibe un objeto Fecha
	*/
	
	void Depreciacion(Fecha fechaactual);
	/**
	* @brief  Metodo para cambiar el estado del EquipoComputo
	*/
	void CambioEstado();
};
#endif
