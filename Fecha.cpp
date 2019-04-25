#include "Fecha.h"

Fecha::Fecha(){
	
}
Fecha::Fecha(int dia){
	this->dia=dia;
}

Fecha::Fecha(int dia, int mes, int anio){
	this->dia=dia;
	this->mes=mes;
	this->anio=anio;
	
}

Fecha::~Fecha(){
	
}

void Fecha::MostrarFecha(){
	cout<<"La fecha es:"<<dia<<"/"<<mes<<"/"<<anio<<"/"<<endl;
	
}
void Fecha::ValidarFecha(){
	dia,mes,anio;
		if ( mes >= 1 && mes <= 12 )
	{
			switch ( mes )
			{
			case  1 :
			case  3 :
			case  5 :
			case  7 :
			case  8 :
			case 10 :
			case 12 : if ( dia >= 1 && dia <= 31 )
				cout<<"Fecha correcta";
			else
				cout<<"Fecha incorrecta";
			break;
			
			case  4 :
			case  6 :
			case  9 :
			case 11 : if ( dia >= 1 && dia <= 30 )
				cout<<"Fecha correcta";
			else
				cout<<"Fecha incorrecta";
			break;
			
			case  2 : if( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 )
				if ( dia >= 1 && dia <= 29 )
					cout<<"Fecha correcta";
				else
					cout<<"Fecha incorrecta";
				else
					if ( dia >= 1 && dia <= 28 )
						cout<<"Fecha incorrecta";
					else
						cout<<"Fecha incorrecta";
			}
	}
		else{
			cout<<"Fecha incorrecta";
}

}
