#include "ManejoArchivo.h"
#include <string>
#include "Laboratorio.h"
#include <fstream>
#include "Persona.h"
#include "Estudiante.h"


ManejoArchivo::ManejoArchivo() {
	
}

ManejoArchivo::~ManejoArchivo() {
	
}


void ManejoArchivo::Guardar(string ruta, vector<Estudiante> estu){
	ofstream archivo(ruta); /*Para escribir ofstream*/
   archivo << "Nombre;Edad;Apellido;Codigo;Multa\n"; /*encabezado del archivo*/
   int tam=estu.size();
   for(int i=0; i<tam; i++){
		archivo <<estu[i].getNombre()<<";"; 
		archivo <<estu[i].getEdad()<<";";
		archivo <<estu[i].getApellido() << ";";
		archivo <<estu[i].getCodigo() << ";";
		archivo <<estu[i].getMulta() << "\n";
   }
	archivo.close();

}
void ManejoArchivo::Guardar(string ruta, vector<Profesor> profe){
	ofstream archivo(ruta);
	archivo <<"Nombre;Edad;Apellido;Codigo\n";
	int tam=profe.size();
	for(int i=0; i<tam; i++){
		archivo <<profe[i].getNombre()<<";"; 
		archivo <<profe[i].getEdad()<<";";
		archivo <<profe[i].getApellido() << ";";
		archivo <<profe[i].getCodigoref() << "\n";

	}
	archivo.close();
}

void ManejoArchivo::Guardar(string ruta, vector<Mueble> mueble){
	ofstream archivo(ruta);
	archivo <<"Nombre;Codigo;Valor;Estado;Codigo Profesor;Dia de creacion;Mes de creacion;Año de creacion\n";
	int tam=mueble.size();
	for(int i=0; i<tam; i++){
		archivo <<mueble[i].getNombre()<<";"; 
		archivo <<mueble[i].getCodigo()<<";";
		archivo <<mueble[i].getValor()<< ";";
		archivo <<mueble[i].getEstado()<< ";";
		archivo <<mueble[i].getProfe()->getCodigoref()<< ";";
		archivo <<mueble[i].getFechaCreacion().getDia()<<";";
		archivo <<mueble[i].getFechaCreacion().getMes()<<";";
		archivo <<mueble[i].getFechaCreacion().getAnio()<<"\n";
		
	}
	archivo.close();
	
}
void ManejoArchivo::Guardar(string ruta, vector<EquipoComputo> equipocomputo){
	ofstream archivo(ruta);
	archivo <<"Nombre;Codigo;Valor;Estado;Codigo Profesor;Dia de creacion;Mes de creacion;Año de creacion\n";
	int tam=equipocomputo.size();
	for(int i=0; i<tam; i++){
		archivo <<equipocomputo[i].getNombre()<<";"; 
		archivo <<equipocomputo[i].getCodigo()<<";";
		archivo <<equipocomputo[i].getValor()<< ";";
		archivo <<equipocomputo[i].getEstado()<< ";";
		archivo <<equipocomputo[i].getProfe()->getCodigoref()<< ";";
		archivo <<equipocomputo[i].getFechaCreacion().getDia()<<";";
		archivo <<equipocomputo[i].getFechaCreacion().getMes()<<";";
		archivo <<equipocomputo[i].getFechaCreacion().getAnio()<<"\n";
		
	}
	archivo.close();
	
}
void ManejoArchivo::Guardar(string ruta, vector<ArtiPrestamo> articulosdeprestamos){
	ofstream archivo(ruta);
	archivo <<"Nombre;Codigo;Valor;Estado;Disponibilidad;Dia creacion;Mes de creacion;Año de creacion\n";
	int tam=articulosdeprestamos.size();
	for(int i=0; i<tam; i++){
		archivo <<articulosdeprestamos[i].getNombre()<<";"; 
		archivo <<articulosdeprestamos[i].getCodigo()<<";";
		archivo <<articulosdeprestamos[i].getValor()<< ";";
		archivo <<articulosdeprestamos[i].getEstado()<< ";";
		archivo <<articulosdeprestamos[i].getDisponibilidad()<<";";
		archivo <<articulosdeprestamos[i].getFechaCreacion().getDia()<<";";
		archivo <<articulosdeprestamos[i].getFechaCreacion().getMes()<<";";
		archivo <<articulosdeprestamos[i].getFechaCreacion().getAnio()<<"\n";
		
	}
	archivo.close();
	
}
void ManejoArchivo::Guardar(string ruta, vector<Prestamo> prestamos){
	ofstream archivo(ruta);
	archivo <<"Dia del prestamo;Dia de entrega;Codigoestudiante;Codigo Articulo\n";
	
	int tam=prestamos.size();
	for(int i=0; i<tam; i++){
		archivo <<prestamos[i].getFechaPrestamo().getDia()<<";"; 
		archivo <<prestamos[i].getFechaEntrega().getDia()<<";";
		archivo <<prestamos[i].getEstudiante()->getCodigo()<< ";";
		archivo <<prestamos[i].getArtiPrestamo()->getCodigo()<< "\n";
		
	}
	archivo.close();
	
}


void ManejoArchivo::Cargar(string ruta, vector<Estudiante>* estu){
	ifstream archivo(ruta); //ifstream para leer
	string linea;//aqui vamos a guardar todo el texto
	//getline(objetivo, destino, parada)
	getline(archivo, linea, '\n'); /* guardamos lo que tiene el archivo en linea, ifstream para leer*/
	
	while(!archivo.eof()){ /* mientras que el archivo sea distinto del final*/
		getline(archivo, linea, '\n'); /*Quemamos el encabezado*/
		
		
		//datos es el tamaño de columnas del objeto
		string datos[6];
		int posicion = 0;
		string palabra = "";
		int tamaniolinea=linea.size();
		for(int i=0; i <tamaniolinea; i++){
			if(linea[i] == ';'){
				datos[posicion] = palabra;
				palabra = "";
				posicion++; 
			} else {
				palabra += linea[i];
			}
		}
		datos[posicion] = palabra;

		Estudiante* e = new Estudiante(datos[0],atof(datos[1].c_str()), datos[2], atof(datos[3].c_str()),atof(datos[4].c_str())); 
		estu->push_back(*e); 
		delete e;
	}
	estu->pop_back();
	archivo.close();
}
void ManejoArchivo::Cargar(string ruta, vector<Profesor>* profe){
	ifstream archivo(ruta); 
	string linea; 
	getline(archivo, linea, '\n'); 

	while(!archivo.eof()){ 
		getline(archivo, linea, '\n'); 
		
		string datos[4];
		int posicion = 0;
		string palabra = "";
		int tamaniolinea=linea.size();
		for(int i=0; i <tamaniolinea; i++){
			if(linea[i] == ';'){
				datos[posicion] = palabra;
				palabra = "";
				posicion++; 
			} else {
				palabra += linea[i];
			}
		}
		datos[posicion] = palabra;
		Profesor* p = new Profesor(datos[0],atof(datos[1].c_str()),datos[2],atof(datos[3].c_str()));  
		profe->push_back(*p); 
		delete p;
	}
	profe->pop_back();
	archivo.close();
}

void ManejoArchivo::Cargar(string ruta,vector<Profesor>* profesor, vector<Mueble>* mueble){
	int codigoprofesor;
	string estado;
	ifstream archivo(ruta); 
	string linea; 
	getline(archivo, linea, '\n'); 
	
	while(!archivo.eof()){ 
		getline(archivo, linea, '\n'); 
		
		string datos[8];
		int posicion = 0;
		string palabra = "";
		int tamaniolinea=linea.size();
		for(int i=0; i <tamaniolinea; i++){
			if(linea[i] == ';'){
				datos[posicion] = palabra;
				palabra = "";
				posicion++;  
			} else {
				palabra += linea[i];
			}
		}
		datos[posicion] = palabra; 
		
	Mueble* m = new Mueble(atof(datos[1].c_str()),datos[0],atof(datos[2].c_str()));
	if(datos[3]=="1"){
		m->setEstado(true);
    }
	else{
		m->setEstado(false);
	}	

		codigoprofesor=atof(datos[4].c_str());
		for(int i=0;i<profesor->size();i++){ 
			if(codigoprofesor == profesor->at(i).getCodigoref()){ 
				m->setProfesor(&(profesor->at(i)));
				
			}
		}
		Fecha fechacreacion(atof(datos[5].c_str()),atof(datos[6].c_str()),atof(datos[7].c_str()));
		m->setFechaCreacion(fechacreacion);
		
		mueble->push_back(*m); 
		delete m;
}
	
	mueble->pop_back();
	archivo.close();
}

void ManejoArchivo::Cargar(string ruta, vector<Profesor>* profesor, vector<EquipoComputo>* computo){
	int codigoprofesor;
	ifstream archivo(ruta); 
	string linea; 
	getline(archivo, linea, '\n'); 
	
	while(!archivo.eof()){ 
		getline(archivo, linea, '\n'); 
		
		string datos[8];
		int posicion = 0;
		string palabra = "";
		int tamaniolinea=linea.size();
		for(int i=0; i <tamaniolinea; i++){
			if(linea[i] == ';'){
				datos[posicion] = palabra;
				palabra = "";
				posicion++; 
			} else {
				palabra += linea[i];
			}
		}
		datos[posicion] = palabra;   
		EquipoComputo* equipo=new EquipoComputo(atof(datos[1].c_str()),datos[0],atof(datos[2].c_str()));
		
		if(datos[3]=="1"){
			equipo->setEstado(true);
		}
		else{
			equipo->setEstado(false);
		}
		
		
		codigoprofesor=atof(datos[4].c_str());
		for(int i=0;i<profesor->size();i++){ 
			if(codigoprofesor == profesor->at(i).getCodigoref()){ 
				equipo->setProfesor(&(profesor->at(i)));
				
			}
		}
		Fecha fechacreacion(atof(datos[5].c_str()),atof(datos[6].c_str()),atof(datos[7].c_str()));
		equipo->setFechaCreacion(fechacreacion);
		
		computo->push_back(*equipo); 
		delete equipo;
	}
		

	computo->pop_back();
	
	archivo.close();
}
void ManejoArchivo::Cargar(string ruta, vector <ArtiPrestamo>* articulosdeprestamo){
	int codigoprofesor;
	ifstream archivo(ruta); 
	string linea; 
	getline(archivo, linea, '\n'); 
	
	while(!archivo.eof()){ 
		getline(archivo, linea, '\n'); 
		
		string datos[8];
		int posicion = 0;
		string palabra = "";
		int tamaniolinea=linea.size();
		for(int i=0; i <tamaniolinea; i++){
			if(linea[i] == ';'){
				datos[posicion] = palabra;
				palabra = "";
				posicion++; 
			} else {
				palabra += linea[i];
			}
		}
		datos[posicion] = palabra;   
		
		ArtiPrestamo* articulodeprestamo=new ArtiPrestamo(atof(datos[1].c_str()),datos[0],atof(datos[2].c_str()));
		
		if(datos[3]=="1"){
			articulodeprestamo->setEstado(true);
		}
		else{
			articulodeprestamo->setEstado(false);
		}
		if(datos[4]=="1"){
			articulodeprestamo->setDisponibilidad(true);
		}
		else{
			articulodeprestamo->setDisponibilidad(false);
		}
		
		Fecha fechacreacion(atof(datos[5].c_str()),atof(datos[6].c_str()),atof(datos[7].c_str()));
		articulodeprestamo->setFechaCreacion(fechacreacion);
		
		articulosdeprestamo->push_back(*articulodeprestamo); 
		delete articulodeprestamo;
	}
	
	
	articulosdeprestamo->pop_back();
	archivo.close();
	
	
}

void ManejoArchivo::Cargar(string ruta,vector<Estudiante>* estudiante,vector<ArtiPrestamo>* articuloprestado, vector<Prestamo>* prestamo){
	int codigoestudiante;
	int codigoarticulo;
	ifstream archivo(ruta); 
	string linea; 
	getline(archivo, linea, '\n'); 
	
	while(!archivo.eof()){ 
		getline(archivo, linea, '\n'); 
		
		string datos[4];
		int posicion = 0;
		string palabra = "";
		int tamaniolinea=linea.size();
		for(int i=0; i <tamaniolinea; i++){
			if(linea[i] == ';'){
				datos[posicion] = palabra;
				palabra = "";
				posicion++; 
			} else {
				palabra += linea[i];
			}
		}
		datos[posicion] = palabra;   
		
		Prestamo* prestamonuevo=new Prestamo;
		
		Fecha diaprestamo(atof(datos[0].c_str()));
		prestamonuevo->setFechaPrestamo(diaprestamo);
		Fecha diaentrega(atof(datos[1].c_str()));
		prestamonuevo->setFechaEntrega(diaentrega);
		
		codigoestudiante=atof(datos[2].c_str());
		for(int i=0;i<estudiante->size();i++){ 
			if(codigoestudiante == estudiante->at(i).getCodigo()){ 
				prestamonuevo->setEstudiante(&(estudiante->at(i)));
				
			}
		}
		codigoarticulo=atof(datos[3].c_str());
		for(int i=0;i<articuloprestado->size();i++){ 
			if(codigoarticulo == articuloprestado->at(i).getCodigo()){ 
				prestamonuevo->setArtiPrestamo(&(articuloprestado->at(i)));
				
			}
		}
		
		
		prestamo->push_back(*prestamonuevo);
		delete prestamo;
		
	}
	
	
	prestamo->pop_back();
	archivo.close();
}



