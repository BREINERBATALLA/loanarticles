#include "Laboratorio.h"
#include <ctime>

Laboratorio::Laboratorio(){
	//Archivos cargar, habilitar cuando tenga los registros correspondientes
//	Archivo.Cargar("estudiantes.csv", &estudiantes);
//	Archivo.Cargar("profesores.csv",&profesores);
//	Archivo.Cargar("muebles.csv",&profesores,&muebles);
//	Archivo.Cargar("equiposcomputo.csv",&profesores,&equipocomputos);
//	Archivo.Cargar("articulosdeprestamo.csv",&artiprestamos);
//  Archivo.Cargar("prestamos.csv", &estudiantes, &artiprestamos, &prestamos);
	
}
void Laboratorio::RegistraEstudiante(int Cantidad){
	
	system("cls") ;
	string Nombre, Apellido ;
	int Edad, Codigo ;
	
	Estudiante EstudianteAcrear ;
	
	for (int i=0 ; i<Cantidad ; i++) {
		system("cls") ;
		
		cout << "Datos del estudiante #" << i+1 << "\n\n" ; 
		
		cout << "Ingrese su nombre: ";
		cin  >> Nombre;
		
		cout << "Ingrese su apellido: ";
		cin  >> Apellido;
		
		cout << "Ingrese su Edad: ";
		cin  >> Edad;
		
		cout << "Ingrese su codigo: ";
		cin  >> Codigo;
		
		EstudianteAcrear.setNombre(Nombre) ;
		EstudianteAcrear.setApellido(Apellido) ;
		EstudianteAcrear.setEdad(Edad) ;
		EstudianteAcrear.setCodigo(Codigo );
		EstudianteAcrear.setMulta(0) ;
		this->estudiantes.push_back(EstudianteAcrear);
		Archivo.Guardar("estudiantes.csv",estudiantes);
	}
	
	
	
}

void Laboratorio::RegistraProfesor(int Cantidad){
	
	system ("cls") ;
	string Nombre, Apellido ;
	int Edad, codigoref;
	
	Profesor ProfesorAcrear;
	
	for (int i=0 ; i<Cantidad ; i++) {
		system("cls") ;
		
		cout << "Datos del Profesor #" << i+1 << "\n\n" ; 
		
		cout << "Ingrese su nombre: " ;cin>>Nombre ;
		cout << "Ingrese su apellido: " ;cin>>Apellido ;
		cout<<  "Ingrese su edad: ";cin>>Edad;
		cout << "Ingrese su codigo: " ;cin>>codigoref ;
		
		
		ProfesorAcrear.setNombre(Nombre) ;
		ProfesorAcrear.setApellido(Apellido) ;
		ProfesorAcrear.setEdad(Edad) ;
		ProfesorAcrear.setCodigoref(codigoref );
		
		this->profesores.push_back(ProfesorAcrear) ;
		Archivo.Guardar("profesores.csv",profesores);
	}
	
}

void Laboratorio::RegistraMueble(int Cantidad){
	system ("cls") ;
	
	int codigo,valor,codigomueble,dia,mes,anio;
    string nombre,intento;
	time_t Fechaactual=time(NULL); 
	tm * time = localtime(&Fechaactual);
	
	Fecha actual(time->tm_mday,time->tm_mon+1,time->tm_year+1900);

	Mueble mueblenuevo;
	
    
	for(int i=0;i<Cantidad;i++){
		system("cls") ;
		cout << "Datos del mueble #" << i+1 << "\n\n" ;
	
	cout<<"Digite nombre:";cin>>nombre;
	cout<<"Digite codigo: ";cin>>codigo;
	cout<<"Digite valor: ";cin>>valor;
	cout<<"\n";
	cout<<"Fecha creacion";
	actual.MostrarFecha();
	
	mueblenuevo.setNombre(nombre);
	mueblenuevo.setCodigo(codigo);
	mueblenuevo.setEstado(true);
	mueblenuevo.setValor(valor);
	mueblenuevo.setFechaCreacion(actual);
	cout<<"\n";
	cout<<"\n";
	cout<<"Digite el codigo del profesor que desea asignar al Mueble: ";cin>>codigomueble;
	cout<<"\n";
	for(int i=0;i<profesores.size();i++){
		if(codigomueble==profesores[i].getCodigoref()){
			mueblenuevo.setProfesor(&profesores[i]);
			this->muebles.push_back(mueblenuevo);
			Archivo.Guardar("muebles.csv",muebles);
			
			
		}
	}
}
	
}

void Laboratorio::RegistrarEquipoComputo(int Cantidad){
	system ("cls") ;
	int codigo,valor,codigoequipocomputo,dia,mes,anio;
	time_t Fechaactual=time(NULL); 
	tm * time = localtime(&Fechaactual);
	
	Fecha actual(time->tm_mday,time->tm_mon+1,time->tm_year+1900);
	string nombre;

	EquipoComputo equiponuevo;

	for(int i=0;i<Cantidad;i++){
		system("cls") ;
		cout << "Datos del equipo #" << i+1 << "\n\n" ;
		
		cout<<" Digite nombre: ";cin>>nombre;
		cout<<" Digite codigo: ";cin>>codigo;
		cout<<" Digite valor: ";cin>>valor;
		cout<<"\n";
		cout<<"Datos de la fecha de creación del articulo"<<endl;
		cout<<"\n";
		cout<<"Fecha creacion";
		actual.MostrarFecha();
		
		
		
		equiponuevo.setNombre(nombre);
		equiponuevo.setCodigo(codigo);
		equiponuevo.setEstado(true);
		equiponuevo.setValor(valor);
		equiponuevo.setFechaCreacion(actual);
		cout<<"\n";
		cout<<"Digite el codigo del profesor que desea asignar al Equipo de computo: ";cin>>codigoequipocomputo;
		cout<<"\n";
		for(int i=0;i<profesores.size();i++){
			
			if(codigoequipocomputo==profesores[i].getCodigoref()){
				equiponuevo.setProfesor(&profesores[i]);
				this->equipocomputos.push_back(equiponuevo);
				Archivo.Guardar("equiposcomputo.csv",equipocomputos);
				
			}
		}
		
	}
	
	
}

void Laboratorio::RegistrarPrestamos(int Cantidad){
	int codigoestudiante, codigoarticulo,dia,mes,anio;
	string intento;
	
	time_t Fechaactual=time(NULL); 
	tm * time = localtime(&Fechaactual);
	Fecha actual(time->tm_mday,time->tm_mon+1,time->tm_year+1900);
		system("cls");
	
	cout<<"Ingrese codigo estudiante:";cin>>codigoestudiante;
	cout<<"Ingrese codigo articulo: ";cin>>codigoarticulo;
	Prestamo* prestamonuevo=new Prestamo();
	
	for(int i=0;i<estudiantes.size();i++){
		
		if(codigoestudiante==estudiantes[i].getCodigo()){
			if(estudiantes[i].getMulta()==0){
			cout<<"El estudiante esta habilitado para hacer prestamos"<<endl;
			}
			prestamonuevo->setEstudiante(&estudiantes[i]);
		}
		
	}
	cout<<"\n";
	for(int i=0;i<artiprestamos.size();i++){
	   
		if(codigoarticulo==artiprestamos[i].getCodigo()){
			if(artiprestamos[i].getDisponibilidad()==true ){
				cout<<"El articulo esta disponible para prestar"<<endl;
				
				artiprestamos[i].setDisponibilidad(false);//
			}
			prestamonuevo->setArtiPrestamo(&artiprestamos[i]);
			prestamos.push_back(*prestamonuevo);
			Archivo.Guardar("prestamos.csv", prestamos);
			cout<<"Fecha prestamo"<<endl;
			actual.MostrarFecha();
			cout<<"\n";
			
			cout<<"Digite el dia de la fecha de entrega: ";cin>>dia;
			cout<<"Digite el mes de la fecha de entrega: ";cin>>mes;
			cout<<"Digite el anio de la fecha de entrega: ";cin>>anio;
			cout<<"\n";

			Fecha entrega(dia,mes,anio);
			cout<<"\n";
			entrega.ValidarFecha();
			cout<<"\n";
			cout<<"Fecha entrega"<<endl;
			entrega.MostrarFecha();
			   
			
				
			system("pause");
			
		}
		
	}
	
		
	
	
}
void Laboratorio::RegistrarArticulosDePrestamo(int Cantidad){
	int codigo,valor,dia,mes,anio;
	string nombre;
	ArtiPrestamo articuloprestamonuevo;
	
	time_t Fechaactual=time(NULL); 
	tm * time = localtime(&Fechaactual);
	Fecha actual(time->tm_mday,time->tm_mon+1,time->tm_year+1900);
	
	system ("cls") ;
	
	for(int i=0;i<Cantidad;i++){
		system("cls") ;
		
		cout << "Datos del Articulo de prestamo #" << i+1 << "\n\n" ;
		
		cout<<" Digite nombre: ";cin>>nombre;
		cout<<" Digite codigo: ";cin>>codigo;
		cout<<" Digite valor: ";cin>>valor;
		cout<<"\n";
		
		cout<<"Fecha creacion";
		cout<<"\n";
		actual.MostrarFecha();
		cout<<"\n";
		
		
		articuloprestamonuevo.setNombre(nombre);
		articuloprestamonuevo.setCodigo(codigo);
		articuloprestamonuevo.setEstado(true);
		articuloprestamonuevo.setValor(valor);
		articuloprestamonuevo.setDisponibilidad(true);
		articuloprestamonuevo.setFechaCreacion(actual);
		
		artiprestamos.push_back(articuloprestamonuevo);
		Archivo.Guardar("articulosdeprestamo.csv",artiprestamos);
		
		
		
	}
	
	
	
}

void Laboratorio::ModificarMueble(){
	int codigo,valor,codigomueble, codigoprofesor;
	string nombre;

	cout<<"Digite el codigo del mueble que desea modificar: ";cin>>codigomueble;
	for(int i=0;i<muebles.size();i++){

	 if(muebles[i].getCodigo()==codigomueble){
	 cout << "Ingrese su nuevo nombre: ";
	 cin  >>nombre;
	 cout << "Ingrese su nuevo codigo: ";
	 cin  >> codigo ;
	 cout << "Ingrese su nuevo valor: ";
	 cin  >> valor;
	
	
	 muebles[i].setNombre(nombre);
	 muebles[i].setCodigo(codigo);
	 muebles[i].setValor(valor);
	 muebles[i].setEstado(true);

		  
	 }
	}


	 cout<<"Digite el codigo del profesor que desea asignar al mueble: ";cin>>codigoprofesor;
	 cout<<"\n";
	 for(int i=0;i<muebles.size();i++){
		 if(codigoprofesor==muebles[i].getProfe()->getCodigoref()){
			  muebles[i].setProfesor(&profesores[i]);
			
		 }
	 }
	 Archivo.Guardar("muebles.csv", muebles);
	cout<<"\n";
	cout<<"Muebles"<<endl;
	cout<<"\n";
	for(int i=0;i<muebles.size();i++){
		cout<<"Nombre: "<<muebles[i].getNombre()<<endl;
		cout<<"Codigo: "<<muebles[i].getCodigo()<<endl;
		cout<<"Estado: "<<muebles[i].getEstado()<<endl;
		cout<<"Valor: "<<muebles[i].getValor()<<endl;
	}
	
}
void Laboratorio::ModificarEquipoComputo(){
	string nombre;
	int valor, codigo,codigodequipocomputo,codigoidprofe;

	cout<<"Digite el codigo del equipo de computo que desea modificar: ";cin>>codigodequipocomputo;
	for(int i=0;i<equipocomputos.size();i++){

      if(equipocomputos[i].getCodigo()==codigodequipocomputo){
		cout << "Ingrese el nombre del equipo de computo: ";
		cin  >>nombre;
		
		cout << "Ingrese su nuevo codigo: ";
		cin  >> codigo ;
		
		cout << "Ingrese su nuevo valor: ";
		cin  >> valor;
		
		equipocomputos[i].setNombre(nombre);  
		equipocomputos[i].setCodigo(codigo);
		equipocomputos[i].setValor(valor);
		equipocomputos[i].setEstado(true);

	  }
	}
	cout<<"Digite el codigo del profesor que desea asignar al Equipo de computo: ";cin>>codigoidprofe;
	cout<<"\n";
	for(int i=0;i<equipocomputos.size();i++){

		if(codigoidprofe==equipocomputos[i].getProfe()->getCodigoref()){
			equipocomputos[i].setProfesor(&profesores[i]);

		}
	}

	Archivo.Guardar("equiposcomputo.csv",equipocomputos);
	cout<<"\n";
	cout<<"Equipos de computo"<<endl;
	cout<<"\n";
	for(int i=0;i<equipocomputos.size();i++){
		cout<<"Nombre: "<<equipocomputos[i].getNombre()<<endl;
		cout<<"Codigo: "<<equipocomputos[i].getCodigo()<<endl;
		cout<<"Valor: "<<equipocomputos[i].getValor()<<endl;
		cout<<"Estado: "<<equipocomputos[i].getEstado()<<endl;
	}
	   
}
void Laboratorio::ModificaEstudiante(){
	string Nombre, Apellido ;
	int Edad, Codigo, codigoestudiante;
	cout<<"Digite el codigo del estudiante que desea modificar: ";cin>>codigoestudiante;
    cout<<"\n";
	for(int i=0;i<estudiantes.size();i++){
		if(estudiantes[i].getCodigo()==codigoestudiante){
		cout << "Ingrese su nuevo nombre: ";
		cin  >> Nombre;
		cout << "Ingrese su nuevo apellido: ";
		cin  >> Apellido;
		cout << "Ingrese su nueva Edad: " ;
		cin  >> Edad;
		cout << "Ingrese su nuevo codigo: " ;
		cin  >> Codigo;
		
		estudiantes[i].setNombre(Nombre) ;
		estudiantes[i].setApellido(Apellido) ;
		estudiantes[i].setEdad(Edad) ;
		estudiantes[i].setCodigo(Codigo );
		estudiantes[i].setMulta(0) ;
	}
  }
	Archivo.Guardar("estudiantes.csv",estudiantes);
	cout<<"\n";
	cout<<"Estudiantes"<<endl;
	for(int i=0;i<estudiantes.size();i++){
		cout<<"Nombre: "<<estudiantes[i].getNombre()<<endl;
		cout<<"Apellido: "<<estudiantes[i].getApellido()<<endl;
		cout<<"Edad: "<<estudiantes[i].getEdad()<<endl;
		cout<<"Codigo: "<<estudiantes[i].getCodigo()<<endl;
		cout<<"Multa: "<<estudiantes[i].getMulta()<<endl;
	}
	
}


void Laboratorio::ModificarProfesor(){
	string Nombre, Apellido ;
	int Edad, codigoref,codigoprofe;
	cout<<"Digite el codigo del profesor que desea modificar: ";cin>>codigoprofe;
	for(int i=0;i<profesores.size();i++){
		if(profesores[i].getCodigoref()==codigoprofe){
			cout <<"Ingrese su nombre: ";
			cin  >> Nombre ;
			cout << "Ingrese su apellido: ";
			cin  >> Apellido;
			cout << "Ingrese su edad: ";
			cin  >> Edad;
			cout << "Ingrese su codigo: ";
			cin  >> codigoref ;
			profesores[i].setNombre(Nombre) ;
			profesores[i].setApellido(Apellido) ;
			profesores[i].setEdad(Edad);
			profesores[i].setCodigoref(codigoref);
			
		}
		
    }
	Archivo.Guardar("profesores.csv",profesores);
	cout<<"\n";
	cout<<"Profesores"<<endl;
	cout<<"\n";
	for(int i=0;i<profesores.size();i++){
		cout<<"Nombre: "<<profesores[i].getNombre()<<endl;
		cout<<"Apelliod: "<<profesores[i].getApellido()<<endl;
		cout<<"Edad: "<<profesores[i].getEdad()<<endl;
		cout<<"Codigo: "<<profesores[i].getCodigoref()<<endl;
	}
}
	
		
		
	

void Laboratorio::ModificarArticuloDePrestamo(){
	int codigo,valor,codigoarticulo;
	string nombre;
	cout<<"Digite el codigo de articulo de prestamo a modificar: ";cin>>codigoarticulo;
	for(int i=0;i<artiprestamos.size();i++){
		if(artiprestamos[i].getCodigo()==codigoarticulo){
			
		cout<<" Digite nombre: ";
		cin>>nombre;
		cout<<" Digite codigo: ";
		cin>>codigo;
		cout<<" Digite valor: ";
		cin>>valor;
		
		artiprestamos[i].setNombre(nombre);
		artiprestamos[i].setCodigo(codigo);
		artiprestamos[i].setEstado(true);
		artiprestamos[i].setValor(valor);
		artiprestamos[i].setDisponibilidad(true);
		
	}
	Archivo.Guardar("articulosdeprestamo.csv",artiprestamos);
	cout<<"\n";
	cout<<"Articulos de prestamo"<<endl;
	cout<<"\n";
	for(int i=0;i<artiprestamos.size();i++){
		cout<<"Nombre: "<<artiprestamos[i].getNombre()<<endl;
		cout<<"Codigo: "<<artiprestamos[i].getCodigo()<<endl;
		cout<<"Estado: "<<artiprestamos[i].getValor()<<endl;
		cout<<"Disponibilidad: "<<artiprestamos[i].getDisponibilidad()<<endl;
	}
}
	
	
}



void Laboratorio::EliminarRegistrosEstudiante(){ 
	int codigoestudiante;

	cout<<"Digite el codigo del estudiante que desea eliminar: ";cin>>codigoestudiante;
	vector<Estudiante>::iterator identificador;
	
	if(codigoestudiante == estudiantes.back().getCodigo()){ 
		estudiantes.pop_back();
	} else {
		for(identificador=estudiantes.begin();identificador != estudiantes.end();identificador++){

			if(identificador->getCodigo() == codigoestudiante){

				estudiantes.erase(identificador);

			}
		}
		
}
	

	Archivo.Guardar("estudiantes.csv",estudiantes);
	
}
void Laboratorio::EliminarRegistroMueble(){
	int codigomueble;
	

	cout<<"Digite el codigo del mueble que desea eliminar: ";cin>>codigomueble;
	vector<Mueble>::iterator identificador;
	
	if(codigomueble==muebles.back().getCodigo()){
		muebles.pop_back();
	}else{

	  for(identificador=muebles.begin();identificador !=muebles.end();identificador++){
		
		if(identificador->getCodigo()==codigomueble){
			 muebles.erase(identificador);
			
		}
	  }
	  
	  
}
	Archivo.Guardar("muebles.csv",muebles);
	
}
void Laboratorio::EliminarRegistroProfesor(){

	int codigoprofesor;


	cout<<"Digite el codigo del profesor que desea eliminar: ";cin>>codigoprofesor;
	vector<Profesor>::iterator identificador;
	
	if(codigoprofesor==profesores.back().getCodigoref()){
		profesores.pop_back();
	}else{
	
	  for(identificador=profesores.begin();identificador !=profesores.end();identificador++){
		
		if(identificador->getCodigoref() ==codigoprofesor){
			 profesores.erase(identificador);
			
			
		}
	  }
}
	Archivo.Guardar("profesores.csv",profesores);
	
	
}
void Laboratorio::EliminarRegistroEquipoDeComputo(){
	int codigoequipo;


	cout<<"Digite el codigo del equipo de computo que desea eliminar: ";cin>>codigoequipo;
	vector<EquipoComputo>::iterator identificador;
	
	if(codigoequipo==equipocomputos.back().getCodigo()){
		equipocomputos.pop_back();
	}else{
	
	   for(identificador=equipocomputos.begin();identificador !=equipocomputos.end();identificador++){

		 if(identificador->getCodigo()==codigoequipo){
			equipocomputos.erase(identificador);
			  
		 }
	   }
}
	Archivo.Guardar("equiposcomputo.csv",equipocomputos);
	
	
}
void Laboratorio::EliminarRegistroArticuloDePrestamo(){

	int codigoartiprestamo;

	cout<<"Digite el codigo del articulo de prestamo que desea eliminar: ";cin>>codigoartiprestamo;
	vector<ArtiPrestamo>::iterator identificador;
	
	if(codigoartiprestamo==artiprestamos.back().getCodigo()){
		artiprestamos.pop_back();
	}else{
	
	  for(identificador=artiprestamos.begin();identificador != artiprestamos.end();identificador++){

		if(identificador->getCodigo()==codigoartiprestamo){
			artiprestamos.erase(identificador);
			
	    }
	  }
}
	Archivo.Guardar("articulosdeprestamo.csv",artiprestamos); 
	
	
}
	
	

void Laboratorio::ConsultarEstadoMueble(){
	int sizeMuebles=muebles.size();
	int codigomueble;
	bool validar;
	//mostramos los muebles
	for(int i=0; i < sizeMuebles; i++){
		cout <<"Nombre Mueble: "<<this->muebles[i].getNombre()<<endl;
		cout << "Valor: " <<this->muebles[i].getValor() << endl;
		cout << "Estado: " <<this->muebles[i].getEstado() << endl;
		cout << "Codigo: " <<this->muebles[i].getCodigo() << endl;
		cout<<"\n";
		
	}

	cout <<"Digite el codigo del mueble a consultar ";cin>>codigomueble;
	for(int i=0; i<sizeMuebles;i++){
		validar=false;
		if(this->muebles[i].getCodigo() == codigomueble){
			cout<<"Estado: "<<this->muebles[i].getEstado()<<endl;
			validar=true;
		}
		
	}
	cout<<"\n";
	if(validar==true){
		cout<<"\n";
		cout<<"Tarea realizada con exito"<<endl;
	}
	else{
		cout<<"No se encontro el mueble, error!"<<endl;
	}
	
	
}
void Laboratorio::ConsultarEstadoEquipoComputo(){
	int sizeComputo=equipocomputos.size();
	int codigoequipo;
	bool validar;
	//mostramos los computos
	for(int i=0; i < sizeComputo; i++){
		cout << "Nombre: "<<this->equipocomputos[i].getNombre();
		cout << "Valor: "<<this->equipocomputos[i].getValor() << endl;
		cout << "Estado: "<<this->equipocomputos[i].getEstado() << endl;
		cout << "Codigo: "<<this->equipocomputos[i].getCodigo() << endl;
		cout<<"\n";
		
	}
	
	cout <<"Digite el codigo del equipocomputo a consultar ";cin>>codigoequipo;
	for(int i=0; i<sizeComputo;i++){
		validar=false;
		if(this->equipocomputos[i].getCodigo() == codigoequipo){
			cout<<"Estado: "<<this->equipocomputos[i].getEstado()<<endl;
			validar=true;
		}
	}
	cout<<"\n";
	if(validar==true){
	cout<<"Tarea realizada con exito!"<<endl;
	}
	else{
		cout<<"No se encontro el equipo de computo, error!"<<endl;
	}
	   
}
void Laboratorio::ConsultarEstadoArticulodePrestamo(){
	int codigoarticuloprestamo;
    bool validar;
	//mostramos los articulos
	for(int i=0;i<artiprestamos.size();i++){
		cout<<"\n";
		cout<<"Nombre: "<<artiprestamos[i].getNombre()<<endl;
		cout<<"Valor : "<<artiprestamos[i].getValor()<<endl;
		cout<<"Codigo: "<<artiprestamos[i].getCodigo()<<endl;
		cout<<"Estado :"<<artiprestamos[i].getEstado()<<endl;
		cout<<"Disponibilidad: "<<artiprestamos[i].getDisponibilidad()<<endl;
	}
	cout<<"\n";
	cout <<"Digite el codigo del articulo de prestamo a consultar ";cin>>codigoarticuloprestamo;
	for(int i=0; i<artiprestamos.size();i++){
		  validar=false;
		if(this->artiprestamos[i].getCodigo() == codigoarticuloprestamo){
			cout<<"Estado: "<<this->artiprestamos[i].getEstado()<<endl;
			cout<<"Disponibilidad: "<<this->artiprestamos[i].getDisponibilidad()<<endl;
               validar=true;
		}
		
	}
	if(validar==true){
		cout<<"\n";
		cout<<"Tarea realizada con exito!"<<endl;
	}
	else{
		cout<<"No se encontro el articulo de prestamo, error!"<<endl;
	}
	   
	
}	
	
	

void Laboratorio::ConsultarHistorialPrestamoEstudiante(){
	int codigoestudiante;
 
	cout<<"Estudiantes.."<<endl;
	cout<<"\n";
	for(int i=0;i<estudiantes.size();i++){
		cout <<"Nombre Estudiante: "<<this->estudiantes[i].getNombre()<<endl;
		cout << "Apellido: " <<this->estudiantes[i].getApellido() << endl;
		cout << "Edad: " <<this->estudiantes[i].getEdad() << endl;
		cout << "Codigo: " <<this->estudiantes[i].getCodigo() << endl;
		cout << "Multa: " <<this->estudiantes[i].getMulta() << endl;
		cout<<"\n";
		
	}
	cout<<"Digite el codigo del estudiante a consultar: ";cin>>codigoestudiante;
	cout<<"\n";
	for(int i=0;i<prestamos.size();i++){
		   
		if(codigoestudiante == this->prestamos[i].getEstudiante()->getCodigo()){
			cout<<"Nombre del estudiante: "<<prestamos[i].getEstudiante()->getNombre()<<endl;
			cout<<"Nombre del articulo que tiene prestado: "<<prestamos[i].getArtiPrestamo()->getNombre()<<endl; 
		  
		}
			
		
	}
	
	
}


void Laboratorio::IngresarPagoEstudiante(){
	int dineroestudiante,codigoestudiante;

	int diferencia;
	//despliego los estudiantes
	for(int i=0;i<estudiantes.size();i++){
		cout<<"Nombre: "<<estudiantes[i].getNombre()<<endl;
		cout<<"Codigo: "<<estudiantes[i].getCodigo()<<endl;
		cout<<"Multa : "<<estudiantes[i].getMulta()<<endl;
		cout<<"\n";
	}
		
	cout<<"\n";
    cout<<"Digite el codigo del estudiante que va a cancelar una multa: ";cin>>codigoestudiante;
 
 
	cout<<"El dinero debe ser igual a su multa, para poder cancelarla!"<<endl;
	cout<<"\n";
	cout<<"Digite su dinero: ";cin>>dineroestudiante;
  
	for(int i=0;i<estudiantes.size();i++){
	 if(codigoestudiante==estudiantes[i].getCodigo() and estudiantes[i].getMulta() !=0){
				diferencia=dineroestudiante-estudiantes[i].getMulta();
				estudiantes[i].setMulta(diferencia);
				
		
	 }
}
			
}
void Laboratorio::ConsultarMultaEstudiante(){
	int codigoestudiante,validar;
	cout<<"Digite el codigo del estudiante que va a consultar si tiene o no multa: ";cin>>codigoestudiante;
	
	for(int i=0;i<estudiantes.size();i++){
		  validar=false;
		if(codigoestudiante==estudiantes[i].getCodigo()){
			cout<<"Multa estudiante: "<<estudiantes[i].getMulta()<<endl;
			validar=true;
		}
	}
	cout<<"\n";
	if(validar==true){
		cout<<"Consulta realizada con exito!"<<endl;
	}
	else{
		cout<<"Error, estudiante no identificado"<<endl;
	}
	   
	
}
void Laboratorio::ConsultarAsignacionArticulo(){
	int opcion;
	cout<<"1. Profesor a cargo de un mueble"<<endl;
	cout<<"2. Profesor a cargo de un equipo de computo"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"\n";
	cout<<"Opcion: ";cin>>opcion;
	switch(opcion){
	case 1:
		int codigomueble;

		cout<<"Digite el codigo del mueble que desea consultar que profesor esta a cargo: ";cin>>codigomueble;
		cout<<"\n";
		for(int i=0;i<muebles.size();i++){
		
			if(codigomueble==muebles[i].getCodigo()){
					cout<<"El profesor a cargo es :"<<muebles[i].getProfe()->getNombre()<<endl;
					
				}
		}
		
		break;
	case 2:
		int codigoequipo;

		cout<<"Digite el codigo del equipo de computo que desea consultar que porfesor esta a cargo: ";cin>>codigoequipo;
		cout<<"\n";
		for(int i=0;i<equipocomputos.size();i++){
			if(codigoequipo==equipocomputos[i].getCodigo()){
				
					cout<<"El profesor a cargo es: "<<equipocomputos[i].getProfe()->getCodigoref()<<endl;

				}
			}
		break;
	case 3:
		break;
	
	}
	
	
}
void Laboratorio::DepreciacionArticulos(){
	int opciones;
	cout<<"1. Depreciacion Equipo computo"<<endl;
	cout<<"2. Depreciacion Mueble"<<endl;
	cout<<"3. Depreciacion Articulo de prestamo"<<endl;
	cout<<"\n";
	cout<<"Opcion: ";cin>>opciones;
	
	switch(opciones){
	case 1:{
		Fecha fecha;
		int valornuevo2;
		int codigoequipo;
		cout<<"Digite el codigo del equipo que desea ver su depreciacion: ";cin>>codigoequipo;
		for(int i=0;i<equipocomputos.size();i++){
			if(codigoequipo==equipocomputos[i].getCodigo()){
					equipocomputos[i].Depreciacion(fecha);
					cout<<"\n";
					valornuevo2=equipocomputos[i].getValor();
					cout<<"Su valor ahora es: "<<valornuevo2;
					equipocomputos[i].setValor(valornuevo2);
			}
		}
		break;
	}
	case 2:{
			Fecha fechamueble;
		int valornuevo;
		int codigomueble;
		cout<<"Digite el codigo del mueble que desea ver su depreciacion: ";cin>>codigomueble;
		for(int i=0;i<muebles.size();i++){
			if(codigomueble==muebles[i].getCodigo()){
				muebles[i].Depreciacion(fechamueble);
				cout<<"\n";
				valornuevo=muebles[i].getValor();
				cout<<"Su valor ahora es: "<<valornuevo;
				muebles[i].setValor(valornuevo);
				
			}
		}
		break;
	}
	case 3:{
		int codigoartiprestamo;
		int valornuevo3;
		Fecha fechaa;
		cout<<"Digite el codigo del articulo de prestamo que desea ver su depreciacion: ";cin>>codigoartiprestamo;
		for(int i=0;i<artiprestamos.size();i++){
			if(codigoartiprestamo==artiprestamos[i].getCodigo()){
				artiprestamos[i].Depreciacion(fechaa);
				cout<<"\n";
				valornuevo3<<artiprestamos[i].getValor();
				cout<<"Su valor ahora es: "<<valornuevo3;
				artiprestamos[i].setValor(valornuevo3);
				
				
			}
		}
		break;
	 }
	}

}



Laboratorio::~Laboratorio(){
	
	
	
}
