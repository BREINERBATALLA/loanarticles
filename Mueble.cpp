#include "Articulo.h"
#include "Mueble.h"

Mueble::Mueble(){
	
}
Mueble::Mueble(int codigo, string nombre, int valor): Articulo(codigo,nombre,valor){
	
}
Mueble::Mueble(int codigo,string nombre,int valor, bool Estado,Fecha fechacreacion, Profesor* profe):Articulo(codigo, nombre, valor, Estado,fechacreacion){
	this->profe=profe;
}
Mueble::~Mueble(){
	
}
void Mueble::Depreciacion(Fecha fechaactual){
	
	fechaactual.FechaActual();
	fechaactual.FechaActual().MostrarFecha();
	int diferenciaanios;
	getFechaCreacion().getAnio();
	diferenciaanios=fechaactual.FechaActual().getAnio()-getFechaCreacion().getAnio();
	
	switch(diferenciaanios){
	case 1:
		int valor1;
		int valornuevo1;
		valor1=getValor()/20;
		valornuevo1=getValor()-(valor1);
		setValor(valornuevo1);
		break;
	case 2:
		int valor2;
		int valornuevo2;
		valor2=getValor()/20;
		valornuevo2=getValor()-(valor2*2);
		setValor(valornuevo2);
		break;
	case 3:
		int valor3;
		int valornuevo3;
		valor3=getValor()/20;
		valornuevo3=getValor()-(valor3*3);
		setValor(valornuevo3);
		break;
	case 4:
		int valor4;
		int valornuevo4;
		valor4=getValor()/20;
		valornuevo4=getValor()-(valor4*4);
		setValor(valornuevo4);
		break;
	case 5:
		int valor5;
		int valornuevo5;
		valor5=getValor()/20;
		valornuevo5=getValor()-(valor5*5);
		setValor(valornuevo5);
		break;
	case 6:
		int valor6;
		int valornuevo6;
		valor6=getValor()/20;
		valornuevo6=getValor()-(valor6*6);
		setValor(valornuevo6);
		break;
	case 7:
		int valor7;
		int valornuevo7;
		valor7=getValor()/20;
		valornuevo7=getValor()-(valor7*7);
		setValor(valornuevo7);
		break;
	case 8:
		int valor8;
		int valornuevo8;
		valor8=getValor()/20;
		valornuevo8=getValor()-(valor8*8);
		setValor(valornuevo8);
		break;
	case 9:
		int valor9;
		int valornuevo9;
		valor9=getValor()/20;
		valornuevo9=getValor()-(valor9*9);
		setValor(valornuevo9);
		break;
	case 10:
		int valor10;
		int valornuevo10;
		valor10=getValor()/20;
		valornuevo10=getValor()-(valor10*10);
		setValor(valornuevo10);
		break;
	case 11:
		int valor11;
		int valornuevo11;
		valor11=getValor()/20;
		valornuevo11=getValor()-(valor11*11);
		setValor(valornuevo11);
		break;
	case 12:
		int valor12;
		int valornuevo12;
		valor12=getValor()/20;
		valornuevo12=getValor()-(valor12*12);
		setValor(valornuevo12);
		break;
	case 13:
		int valor13;
		int valornuevo13;
		valor13=getValor()/20;
		valornuevo13=getValor()-(valor13*13);
		setValor(valornuevo13);
		break;
	case 14:
		int valor14;
		int valornuevo14;
		valor14=getValor()/20;
		valornuevo14=getValor()-(valor14*14);
		setValor(valornuevo14);
		break;
	case 15:
		int valor15;
		int valornuevo15;
		valor15=getValor()/20;
		valornuevo15=getValor()-(valor15*15);
		setValor(valornuevo15);
		break;
	case 16:
		int valor16;
		int valornuevo16;
		valor16=getValor()/20;
		valornuevo16=getValor()-(valor16*16);
		setValor(valornuevo16);
		break;
	case 17:
		int valor17;
		int valornuevo17;
		valor17=getValor()/20;
		valornuevo17=getValor()-(valor17*17);
		setValor(valornuevo17);
		break;
	case 18:
		int valor18;
		int valornuevo18;
		valor18=getValor()/20;
		valornuevo18=getValor()-(valor18*18);
		setValor(valornuevo18);
		break;
	case 19:
		int valor19;
		int valornuevo19;
		valor19=getValor()/20;
		valornuevo19=getValor()-(valor19*19);
		setValor(valornuevo19);
		break;
	case 20:
		int valor20;
		int valornuevo20;
		valor20=getValor()/20;
		valornuevo20=getValor()-(valor20*20);
		setValor(valornuevo20);
		break;
	
}
	CambioEstado();
}
void Mueble::CambioEstado(){
	
	if(this->valor==0){
		this->setEstado(false);
	}
	
}
