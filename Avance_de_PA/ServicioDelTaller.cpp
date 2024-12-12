#include "ServicioDelTaller.h"
#include <iostream>
#include <string>

using namespace std;

servicioDelTaller :: servicioDelTaller ( double cost, double tiemp, int num){
	switch(num){
		case 1:
			TipoServicio = "Reparacion de frenos";
			Costo = cost + 17.50;
			Tiempo = tiemp + 7;
			numServicio = num;
			cout << "Proceso completado ";
		default:
			cout << "ERRROR !!!" << endl;
	}
}

void servicioDelTaller :: MostrarHist (){
	
}