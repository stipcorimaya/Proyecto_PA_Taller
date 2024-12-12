#include "HerrYReparacionDeFrenos.h"
#include <iostream>

using namespace std;

HerrYReparacionDeFrenos :: HerrYReparacionDeFrenos(int llav, int dest){
	
}

void HerrYReparacionDeFrenos :: AnadirTiempoCosto(servicioDelTaller *servicioDTaller){
	servicioTaller = servicioDTaller;
}
//switch(num){
//		case 1:
//			TipoServicio = "Reparacion de frenos";
//			Costo = cost + 17.50;
//			Tiempo = tiemp + 7;
//			numServicio = num;
//		default:
//			cout << "ERRROR !!!" << endl;
//	}