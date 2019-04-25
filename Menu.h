/**
* @file Menu.h
* @author Breiner Batalla y Angie Montes
* @brief Cabecera de la clase Menu.h, que recibe la cabecera de "Laboratorio.h"
*/

#ifndef MENU_H_
#define MENU_H_

#include "Laboratorio.h"

using namespace std;
/**
* @class Menu
* @brief Clase para crear Objetos de tipo Menu
*/
class Menu {
private:
	/**!< numero entero opcion, atributo de la clase Menu*/
	int opcion;
	/**!< recibe un objeto Laboratorio como atributo*/
	Laboratorio lab;
	
	
public:
	/**
	* @brief  constructor por defecto de la clase Menu
	*/
	Menu ();
	/**
	* @brief  destructor de la clase Menu
	*/
	~Menu();
	/**
	* @brief  Metodo que despliega el menu general de la clase Menu
	* 
	*/
	void MenuGeneral();
	/**
	* @brief  Metodo que despliega el menu de las opciones de registro de la clase Menu
	* 
	*/
	void MenudeopcionesRegistro();
	/**
	* @brief  Metodo que despliega el menu de las opciones de consulta de la clase Menu
	* 
	*/
	void MenudeopcionesConsultas(); 
	/**
	* @brief  Metodo que despliega el menu de las opciones de modificaciones de la clase Menu
	* 
	*/
	void MenudeopcionesModificaciones();
	/**
	* @brief  Metodo que despliega el menu de las opciones de eliinar registros de la clase Menu
	* 
	*/
	void MenudeopcionesEliminarRegistros();
};
#endif
