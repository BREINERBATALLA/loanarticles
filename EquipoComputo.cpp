#include "Articulo.h"
#include "EquipoComputo.h"

EquipoComputo::EquipoComputo(){
	
}
EquipoComputo::EquipoComputo(int codigo, string nombre, int valor):Articulo(codigo,nombre,valor){
	
}
EquipoComputo::EquipoComputo(int codigo, string nombre, int valor, bool Estado,Fecha fechacreacion, Profesor* profe):Articulo(codigo, nombre, valor, Estado,fechacreacion){
	this->profe=profe;
}

EquipoComputo::~EquipoComputo(){
	
}


void EquipoComputo::Depreciacion(Fecha fechaactual){
	fechaactual.FechaActual();
	fechaactual.FechaActual().MostrarFecha();
	int diferenciaanios;
	getFechaCreacion().getAnio();
	
	diferenciaanios=fechaactual.FechaActual().getAnio()-getFechaCreacion().getAnio();
   switch(diferenciaanios){
   case 1:
	   int valor1;
	   int valornuevo1;
	   valor1=getValor()/10;
	   valornuevo1=getValor()-(valor1);
	   setValor(valornuevo1);
	   break;
   case 2:
	   int valor2;
	   int valornuevo2;
	   valor2=getValor()/10;
	   valornuevo2=getValor()-(valor2*2);
	   setValor(valornuevo2);
	   break;
   case 3:
	   int valor3;
	   int valornuevo3;
	   valor3=getValor()/10;
	   valornuevo3=getValor()-(valor3*3);
	   setValor(valornuevo3);
	   break;
   case 4:
	   int valor4;
	   int valornuevo4;
	   valor4=getValor()/10;
	   valornuevo4=getValor()-(valor4*4);
	   setValor(valornuevo4);
	   break;
   case 5:
	   int valor5;
	   int valornuevo5;
	   valor5=getValor()/10;
	   valornuevo5=getValor()-(valor5*5);
	   setValor(valornuevo5);
	   break;
   case 6:
	   int valor6;
	   int valornuevo6;
	   valor6=getValor()/10;
	   valornuevo6=getValor()-(valor6*6);
	   setValor(valornuevo6);
	   break;
   case 7:
	   int valor7;
	   int valornuevo7;
	   valor7=getValor()/10;
	   valornuevo7=getValor()-(valor7*7);
	   setValor(valornuevo7);
	   break;
   case 8:
	   int valor8;
	   int valornuevo8;
	   valor8=getValor()/10;
	   valornuevo8=getValor()-(valor8*8);
	   setValor(valornuevo8);
	   break;
   case 9:
	   int valor9;
	   int valornuevo9;
	   valor9=getValor()/10;
	   valornuevo9=getValor()-(valor9*9);
	   setValor(valornuevo9);
	   break;
   case 10:
	   int valor10;
	   int valornuevo10;
	   valor10=getValor()/10;
	   valornuevo10=getValor()-(valor10*10);
	   setValor(valornuevo10);
	   break;
}
	CambioEstado();
}
void EquipoComputo::CambioEstado(){
	cout<<"Cambio de estado del equipo"<<endl;
	if(this->valor==0){
		
		this->Estado=false;
	}
}
