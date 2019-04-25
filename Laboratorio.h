/**
* @file Laboratorio.h
* @author Breiner Batalla y Angie Montes
* @brief Cabecera de la clase Laboratorio.h, que recibe las cabeceras de: Profesor.h, Estudiante.h,Prestamo.h, Mueble.h, EquipoComputo.h, Articulo.h, ManejoArchivo.h y ArtiPrestamo.h
*/


#ifndef LABORATORIO_H_
#define LABORATORIO_H_
#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include "Profesor.h"
#include "Estudiante.h"
#include "Prestamo.h"
#include "Mueble.h"
#include "EquipoComputo.h"
#include "Articulo.h"
#include "ManejoArchivo.h"
#include "ArtiPrestamo.h"



using namespace std ; 
/**
*@class Laboratorio
* @brief  Clase para crear objetos de tipo Laboratorio
*/

class Laboratorio{
private:
	/**!< Objeto ManejoArchivo, atributo de la clase Laboratorio*/
	ManejoArchivo Archivo;
	/**!< vector de obejetos de la clase Profesor, atributo de la clase Laboratorio*/
	vector<Profesor> profesores;
	/**!< vector de obejetos de la clase Estudiante, atributo de la clase Laboratorio*/
	vector<Estudiante> estudiantes;
	/**!< vector de obejetos de la clase Mueble, atributo de la clase Laboratorio*/
	vector<Mueble> muebles;
	/**!< vector de obejetos de la clase EquipoComputo, atributo de la clase Laboratorio*/
	vector<EquipoComputo> equipocomputos;
	/**!< vector de obejetos de la clase ArtiPrestamo(Articulos de prestamo), atributo de la clase Laboratorio*/
	vector<ArtiPrestamo> artiprestamos;
	/**!< vector de obejetos de la clase Prestamo, atributo de la clase Laboratorio*/
	vector<Prestamo> prestamos;
	
public:	
	/**
	* @brief Constructor de la clase Laboratorio
	*/
	Laboratorio();
	/**
	* @brief   destructor de la clase laboratorio
	*/
	~Laboratorio();
	
	/**
	* @brief  metodo para modifiar Profesores de la clase Laboratorio
	* @param objeto Profesor
	*/
	void setProfesores(Profesor profesor){
		this->profesores.push_back(profesor);
	}
	/**
	* @brief  metodo para consultar Profesores de la clase Laboratorio
	* @return profesores(que es el nombre del vector)
	*/
	vector<Profesor> getProfesor(){
		return this->profesores;
	}
	/**
	* @brief  para modificar Estudiantes de la clase Laboratorio
	* @return estudiantes(que es el nombre del vector)
	*/
	vector<Estudiante>getEstudiante(){
		return this->estudiantes ;
	}
	/**
	* @brief  para consultar Estudiantes de la clase Laboratorio
	* @param objeto Estudiante
	*/
	void setEstudiantes(Estudiante estudiante){
		this->estudiantes.push_back(estudiante);
	}
	/**
	* @brief  metodo para consultar muebles de la clase Laboratorio
	* @return muebles(que es el nombre del vector de la clase Mueble)
	*/
	vector<Mueble> getMueble(){
		return muebles;
	}
	/**
	* @brief  metodo para modificar muebles de la clase Laboratorio
	* @param objeto Mueble
	*/
	void setMueble(Mueble mueble){
		this->muebles.push_back(mueble);
	}
	/**
	* @brief  metodo para consultar equipos de computo de la clase Laboratorio
	* @return equiposcomputo(que es el nombre del vector de la clase EquipoComputo)
	*/
	vector<EquipoComputo> getEquipoComputo(){
		return equipocomputos;
	}
	/**
	* @brief  metodo para consultar equipos de computo de la clase Laboratorio
	* @param objeto EquipoComputo
	*/
	void setEquipoComputo(EquipoComputo equipo){
		this->equipocomputos.push_back(equipo);
	}
	/**
	* @brief  metodo para consultar prestamos de la clase Laboratorio
	* @return prestamos(que es el nombre del vector de la clase Prestamo)
	*/
	vector<Prestamo> getPrestamo(){
		return this->prestamos;
	}
	/**
	* @brief  metodo para modificar prestamos de la clase Laboratorio
	* @param objeto Prestamo
	*/
	void setPrestamo(Prestamo prestamo){
		this->prestamos.push_back(prestamo);
	}
	
	/**
	* @brief  Metodo para registrar estudiantes de la clase Laboratorio
	* @param numero entero cantidad
	*/
	void RegistraEstudiante(int Cantidad) ;
	/**
	* @brief  Metodo para registrar profesores de la clase Laboratorio
	* @param numero entero cantidad
	*/
	void RegistraProfesor(int Cantidad);
	/**
	* @brief  Metodo para registrar muebles de la clase Laboratorio
	* @param numero entero cantidad
	*/
	void RegistraMueble(int Cantidad);
	/**
	* @brief  Metodo para registrar equipos de computo de la clase Laboratorio
	* @param numero entero cantidad
	*/
	void RegistrarEquipoComputo(int Cantidad);
	/**
	* @brief  Metodo para registrar prestamos de la clase Laboratorio
	* @param numero entero cantidad
	*/
	void RegistrarPrestamos(int Cantidad);
	/**
//	* @brief  Metodo para registrar articulos de prestamo de la clase Laboratorio
	* @param numero entero cantidad
	*/
	void RegistrarArticulosDePrestamo(int Cantidad);
	/**
	* @brief  Metodo para modificar modificar muebles de la clase Laboratorio
	*/
	void ModificarMueble();
	/**
	* @brief  Metodo para modificar modificar equipos de computo de la clase Laboratorio
	*/
	void ModificarEquipoComputo();
	/**
	* @brief  Metodo para modificar modificar estudiantes de la clase Laboratorio
	*/
	void ModificaEstudiante();
	/**
	* @brief  Metodo para modificar modificar profesores de la clase Laboratorio
	*/
	void ModificarProfesor();
	/**
	* @brief  Metodo para modificar modificar articulos de prestamo de la clase Laboratorio
	*/
	void ModificarArticuloDePrestamo();
	/**
	* @brief  Metodo para modificar eliminar estudiantes de la clase Laboratorio
	*/
	void EliminarRegistrosEstudiante();
	/**
	* @brief  Metodo para modificar eliminar muebles de la clase Laboratorio
	*/
	void EliminarRegistroMueble();
	/**
	* @brief  Metodo para modificar eliminar profesores de la clase Laboratorio
	*/
	void EliminarRegistroProfesor();
	/**
	* @brief  Metodo para modificar eliminar equipos de computo de la clase Laboratorio
	*/
	void EliminarRegistroEquipoDeComputo();
	/**
	* @brief  Metodo para modificar eliminar articulos de prestamo de la clase Laboratorio
	*/
	void EliminarRegistroArticuloDePrestamo();
	/**
	* @brief  Metodo para consultar estado de los muebles de la clase Laboratorio
	*/
	void ConsultarEstadoMueble();
	/**
	* @brief  Metodo para consultar estado de los equipos de computo de la clase Laboratorio
	*/
	void ConsultarEstadoEquipoComputo();
	/**
	* @brief  Metodo para consultar estado de los articulos de prestamo de la clase Laboratorio
	*/
	void ConsultarEstadoArticulodePrestamo();
	/**
	* @brief  Metodo para consultar el historial de prestamo de un estudiante de la clase Laboratorio
	*/
	void ConsultarHistorialPrestamoEstudiante();
	/**
	* @brief  Metodo para integresar el pago de una multa de un estudiante de la clase Laboratorio
	*/
	void IngresarPagoEstudiante();
	/**
	* @brief  Metodo para consultar la multa de un estudiante de la clase Laboratorio
	*/
	void ConsultarMultaEstudiante();
	/**
	* @brief  Metodo para consultar que profesores tienen asignados los articulos de la clase Laboratorio
	*/
	void ConsultarAsignacionArticulo();
	/**
	* @brief  Metodo para consultar y ver la depreciacion de los articulos de la clase Laboratorio
	*/
	void DepreciacionArticulos();
	

	
	
};
#endif
