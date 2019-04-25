/**
* @file Fecha.h
* @author Breiner Batalla y Angie Montes
* @brief Cabecera de la clase Fecha.h
*/




#ifndef FECHA_H_
#define FECHA_H_

#include <ctime>
#include<iostream>

using namespace std;
/**
* @class Fecha
* @brief Clase para crear Objetos de tipo Fecha
*/

class Fecha {
protected:
	/**!< numero entero dia, atributo de la clase Fecha*/
	int dia;
	/**!< numero entero mes, atributo de la clase Fecha*/
	int mes;
	/**!< numero entero año, atributo de la clase Fecha*/
	int anio;
	
public:
	/**
	* @brief  contructor por defecto de la clase Fecha
	*/
	Fecha();
	/**
	* @brief  primer constructor de la clase Fecha
	*/
	Fecha(int);
	/**
	* @brief  destructor de la clase Fecha
	*/
	~Fecha();
	/**
	* @brief  segundo constructor de la clase Fecha
	*/
	Fecha(int,int,int);
	/**
	* @brief  Metodo para consultar el dia de la clase Fecha
	* @return numero entero dia
	*/
   int getDia(){
	   return dia;
   }
   /**
   * @brief  Metodo para consultar el año de la clase Fecha
   * @return numero entero año
   */
   int getAnio(){
	   return anio;
   }
   /**
   * @brief  Metodo para consultar el mes de la clase Fecha
   * @return numero entero mes
   */
   int getMes(){
	   return mes;
   }
   /**
   * @brief  Metodo para crear una fecha que saque la fecha del sistema
   * @return actual(que es la fecha del sistema)
   */
   Fecha FechaActual(){
	   time_t Fechaactual=time(NULL); 
	   tm * time = localtime(&Fechaactual);
	   
	   Fecha actual(time->tm_mday,time->tm_mon+1,time->tm_year+1900);
	   
	   return actual;
   }
   /**
   * @brief  Metodo para mostrar la fecha 
   */
   void MostrarFecha();
   /**
   * @brief  Metodo para validar la fecha que ingrese el usuario
   */
   void ValidarFecha();
	
	
	
	
	
	
	
};
#endif
