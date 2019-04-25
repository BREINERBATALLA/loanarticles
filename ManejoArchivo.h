/**
* @file ManejoArchivo.h
* @author Breiner Batalla y Angie Montes
* @brief Cabecera de ManejoArchivo.h, que recibe los cabeceras de profesor.h,prestamo.h , mueble.h , EquipoComputo.h y ArtiPrestamo.h, se utiliza sobrecarga de metodos.
*/



#ifndef MANEJOARCHIVO_H_
#define MANEJOARCHIVO_H_
#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <string>
#include <vector>
#include "Profesor.h"
#include "Estudiante.h"
#include "Prestamo.h"
#include "Mueble.h"
#include "EquipoComputo.h"
#include "Articulo.h"
#include "ArtiPrestamo.h"


using namespace std;

/**
* @class ManejoArchivo
* @brief  Clase que crea objetos de tipo ManejoArchivo
*/



class ManejoArchivo{
public:
	/**
	* @brief  contructor por defecto de la clase ManejoArchivo
	*/
	ManejoArchivo();
	/**
	* @brief  destructor de la clase ManejoArchivo
	*/
	~ManejoArchivo();
	/**
	* @brief metodo para guardar el archivo del Profesor
	* @param string ruta y vector Profesor
	*/
	void Guardar(string ruta, vector<Profesor> profe);
	/**
	* @brief metodo para guardar el archivo del Estudiante
	* @param string ruta y vector Estudiante
	*/
	void Guardar(string ruta, vector<Estudiante> estu);
	/**
	* @brief metodo para guardar el archivo del Mueble
	* @param string ruta y vector Mueble
	*/
	void Guardar(string ruta, vector<Mueble> mueble);
	/**
	* @brief metodo para guardar el archivo del EquipoComputo, que recibe un string como la ruta y el vector de EquipoComputo
	* @param string ruta y vector EquipoComputo
	*/
	void Guardar(string ruta, vector<EquipoComputo> computo);
	/**
	* @brief metodo para guardar el archivo del ArtiPrestamo(Articulos de prestamo)
	* @param string ruta y vector ArtiPrestamo 
	*/
	void Guardar(string ruta, vector<ArtiPrestamo> articulosdeprestamos);
	/**
	* @brief metodo para guardar el archivo del Prestamo
	* @param string ruta y vector Prestamo
	*/
	void Guardar(string ruta, vector<Prestamo> prestamos);
	/**
	* @brief metodo para cargar el archivo del Profesor
	* @param string ruta y vector Profesor puntero
	*/
	void Cargar(string ruta,  vector<Profesor>* profe);
	/**
	* @brief metodo para cargar el archivo del Estudiante
	* @param string ruta y vector Estudiante puntero
	*/
	void Cargar(string ruta,  vector<Estudiante>* estu);
	/**
	* @brief metodo para cargar el archivo del Mueble
	* @param string ruta, vector Profesor puntero y vector Mueble puntero
	*/
	void Cargar(string ruta, vector<Profesor>* profesor, vector<Mueble>* mueble);
	/**
	* @brief metodo para cargar el archivo del EquipoComputo
	* @param string ruta, vector Profesor puntero y vector EquipoComputo puntero
	*/
	void Cargar(string ruta, vector<Profesor>* profesor, vector<EquipoComputo>* computo);
	/**
	* @brief metodo para cargar el archivo del ArtiPrestamo
	* @param string ruta y vector ArtiPrestamo puntero
	*/
	void Cargar(string ruta, vector <ArtiPrestamo>* articulosdeprestamo);
	/**
	* @brief metodo para cargar el archivo del Prestamo
	* @param string ruta, vector Estudiante puntero, vector ArtiPrestamo puntero y vector Prestamo puntero
	*/
	void Cargar(string ruta, vector<Estudiante>* estudiante,vector<ArtiPrestamo>* articuloprestado, vector<Prestamo>* prestamo);
	

	
};
#endif





