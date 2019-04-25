/**
* @file Articulo.h
* @author Breiner Batalla y Angie Montes
* @brief Cabecera de articulo.h, la cual se derivan(Muebles, Equipos de computo y articulos de prestamo)
*/
#ifndef ARTICULO_H_
#define ARTICULO_H_
#include <string>
#include "Fecha.h";
using namespace std;
/**
* @class Articulo
* @brief  Clase que crea objetos de tipo Articulo
*/

class Articulo{
protected:
	/**!< atributo objeto fecha*/
	Fecha fechacreacion;
	/**< un atrubuto entero que es el codigo del articulo*/
	int codigo;
	/**< un atributo string que es el nombre del articulo*/
	string nombre;
	/**< un atributo entero que es el valor del articulo*/
	int valor;
	/**< un atributo booleano que indica el estado del articulo*/
	bool Estado;

	
public:
	/**
	* @brief  contructor por defecto del articulo	
	*/	
	Articulo();
	/**
	* @brief  constructor1 del articulo
	*/	
	Articulo(int codigo,string nombre,int valor,bool Estado, Fecha fechacreacion);
	/**
	* @brief  constructor2 del articulo	
	*/	
	Articulo(int codigo,string nombre,int valor);
	/**
	* @brief  destructor del articulo
	*/	
	~Articulo();
/**
*  @brief metodo para consultar el nombre del articulo
* @return nombre
	
*/
	string getNombre(){
		return this->nombre;
	}
/**
* @brief metodo para modificar el nombre del articulo
* @param string nombre
	
*/
	void setNombre(string nombre){
		this->nombre=nombre;
	}
/**
* @brief metodo para consultar el codigo del articulo
* @return codigo
	
*/
	int getCodigo(){
		return codigo;
	}
/**
* @brief metodo para modificar el codigo del articulo
* @param numero entero codigo
*/
	void setCodigo(int codigo){
		this->codigo = codigo;
	}
	
	
/**
* @brief metodo para consultar el estado del articulo
* @return Estado
*/
	bool getEstado(){
		return Estado;
	}
/**
* @brief metodo para modificar el estado del articulo
* @param booleano Estado
*/
	void setEstado(bool Estado){
		this->Estado = Estado;
	}
/**
* @brief metodo para consultar el valor del articulo
* @return valor
*/
	
	int getValor(){
		return valor;
	}
/**
* @brief  metodo para modiciar el valor del articulo
* @param numero entero valor
*/	
	void setValor(int valor){
		this->valor = valor;
	}
/**
* @brief  metodo consultar la fecha de creacion del articulo
* @return fecha de creacion
*/		
	
	Fecha getFechaCreacion(){
		return fechacreacion;
	}
/**
* @brief  metodo para modificar la fecha de creacion del articulo
* @param objeto Fecha, fecha creacion
*/	
	void setFechaCreacion(Fecha fechacreacion){
		this->fechacreacion=fechacreacion;
	}
/**
* @brief  funcion virtual pura, para la depreciacion de los articulos derivados de la clase articulo
* @param objeto Fecha, fecha actual
*/	
	
	virtual void Depreciacion(Fecha fechaactual)=0;
	
	

};
#endif


