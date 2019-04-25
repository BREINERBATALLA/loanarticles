
#include "Menu.h"

Menu::Menu(){
	
}

Menu::~Menu() {
	
}



void Menu::MenuGeneral(){
	bool salir=false;
	string rpt;

		
	
	do{
		system("cls");
		
			
			cout << "... INICIANDO EL SISTEMA ..." << endl << endl;
			cout<<"\n";
			cout<<"RECUERDE PRIMERO HACER LOS REGISTROS"<<endl<<endl;
			cout<<"CUANDO TENGA REGISTROS, HABILITA EN EL CONSTRUCTOR DEL LABORATORIO LOS ARCHIVOS.CARGAR"<<endl<<endl;
			cout << "1. Menu Registros" << endl;
			cout << "2. Menu Consultas" << endl;
			cout << "3. Menu Modificaciones" << endl;
			cout << "4. Menu Eliminar Registros"<<endl;
			cout << "5. Pago Multa Estudiante"<<endl;
			cout << "6. Menu Depreciaciones" << endl;
			cout << "7. Salir"<<endl<<endl;
			
			cout << "Opcion: ";cin >> this->opcion;
			cout<<"\n";
			switch(this->opcion){
			case 1:
				this->MenudeopcionesRegistro();
				break;
			case 2:
				this->MenudeopcionesConsultas();
				break;
			case 3:
				this->MenudeopcionesModificaciones();
				break;
			case 4:
				this->MenudeopcionesEliminarRegistros();
				break;
			case 5:
				lab.IngresarPagoEstudiante();
				break;
			case 6:
				lab.DepreciacionArticulos();
				break;
			case 7:
				break;
			default:
				cout<<"No se reconoce la opcion seleccionada";
				break;
			}
			
			cout<<"Desea volver al menu (SI/NO?:";cin>>rpt;
			
			if(rpt=="NO" or rpt=="NO"){
				salir=true;
			}
			else{
				salir=false;
			}
	} while(!salir);
}
	

	

void Menu::MenudeopcionesRegistro(){
	int opc;
	string seguir;
	
	cout<<"1.Registrar Estudiantes"<<endl;
	cout<<"2.Registrar Prestamos"<<endl;
	cout<<"3.Registrar Muebles"<<endl;
	cout<<"4.Registrar Profesores"<<endl;
	cout<<"5.Registrar Equipos de computo"<<endl;
	cout<<"6.Regitrar Articulos de prestamo"<<endl;
    cout<<"\n";
	cout<<"Opcion: ";cin>>opc;
	
	switch(opc){
	case 1:
		int cantidadestudiantes;
		cout<<"Digite la cantidad que desea registrar: ";cin>>cantidadestudiantes;
		this->lab.RegistraEstudiante(cantidadestudiantes);
		break;
	case 2:
		int cantidadprestamos;
		cout<<"Digite la cantidad que desea registrar: ";cin>>cantidadprestamos;
		this->lab.RegistrarPrestamos(cantidadprestamos);
		break;
	case 3:
		int cantidadmuebles;
		cout<<"Digite la cantidad que desea registrar: ";cin>>cantidadmuebles;
		this->lab.RegistraMueble(cantidadmuebles);
		break;
	case 4:
		int cantidadprofesores;
		cout<<"Digite la cantidad que desea registrar: ";cin>>cantidadprofesores;
		this->lab.RegistraProfesor(cantidadprofesores);
		break;
	case 5:
		int cantidadcomputos;
		cout<<"Digite la cantidad que desea registrar: ";cin>>cantidadcomputos;
		this->lab.RegistrarEquipoComputo(cantidadcomputos);
		break;
	case 6:
		int cantidadarticulosdeprestamo;
		cout<<"Digite la cantidad que desea registrar: ";cin>>cantidadarticulosdeprestamo;
		this->lab.RegistrarArticulosDePrestamo(cantidadarticulosdeprestamo);
			
		
	}

	
}

void Menu::MenudeopcionesConsultas(){
	int opciones;
	
	cout<<"Consultas\n";
	cout<<"1. Estado muebles"<<endl;
	cout<<"2. Estado equiposComputo"<<endl;
	cout<<"3. Estado prestamo"<<endl;
	cout<<"4. Asignaciones de articulos"<<endl;
	cout<<"5  Consultar Multa estudiante"<<endl;
	cout<<"6. Historial de prestamo de un estudiante"<<endl;
	cout<<"7. Estado articulos de prestamo"<<endl;
	cout<<"\n";
	cout<<"Opcion: ";cin>>opciones;
	
	switch(opciones){
	case 1:
		lab.ConsultarEstadoMueble();
		break;
	case 2:
		lab.ConsultarEstadoEquipoComputo();
		break;
	case 3:
		lab.ConsultarEstadoArticulodePrestamo();
		break;
	case 4:
		lab.ConsultarAsignacionArticulo();
		break;
	case 5:
		lab.ConsultarMultaEstudiante();
		break;
	case 6:
		lab.ConsultarHistorialPrestamoEstudiante();
		break;
	case 7:
		lab.ConsultarEstadoArticulodePrestamo();
		break;
	
	}
	
	
	
	
}
	
void Menu::MenudeopcionesModificaciones(){
	int opcionesmod;
	
	cout<<"Menu de modificaciones, opciones\n";
	cout<<"1. Modificar Estudiante"<<endl;
	cout<<"2. Modificar EquiposComputo"<<endl;
	cout<<"3. Modificar Profesor"<<endl;
	cout<<"4. Modificar Mueble"<<endl;
	cout<<"5. Moficiar Articulo Prestamo"<<endl;
	cout<<"6. "<<endl;
	cout<<"\n";
	cout<<"Opcion: ";cin>>opcionesmod;
	
	switch(opcionesmod){
		
	case 1:
		lab.ModificaEstudiante();
		break;
	case 2:
		lab.ModificarEquipoComputo();
		break;
	case 3:
		lab.ModificarProfesor();
		break;
	case 4:
		
 	    lab.ModificarMueble();
		break;
	case 5:
		
		lab.ModificarArticuloDePrestamo();
		break;
	case 6:
		break;

	}
}
void Menu::MenudeopcionesEliminarRegistros(){
		int opcioneseliminarregistro;
		string seguireliminando;
		
		cout<<"Menu de Eliminacion de registros, opciones\n";
		cout<<"1. Eliminar Estudiante"<<endl;
		cout<<"2. Eliminar Profesor"<<endl;
		cout<<"3. Eliminar Articulo De Prestamo"<<endl;
		cout<<"4. Eliminar Mueble"<<endl;
		cout<<"5. Eliminar Equipo De Computo"<<endl; 
		cout<<"6. Salir"<<endl;
		cout<<"\n";
		cout<<"Opcion: ";cin>>opcioneseliminarregistro;
		
		switch(opcioneseliminarregistro){
		case 1:
			lab.EliminarRegistrosEstudiante();
		    break;
		case 2:
			lab.EliminarRegistroProfesor();
			break;
		case 3:
			lab.EliminarRegistroArticuloDePrestamo();
			break;
		case 4:
			lab.EliminarRegistroMueble();
			break;
		case 5:
			lab.EliminarRegistroEquipoDeComputo();
			break;
		case 6:
			break;
		
		}
		
		
		
}
