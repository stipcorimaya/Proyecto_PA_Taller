#include "ServicioDelTaller.h"
#include <iostream>
#include <fstream>
#include <iomanip> 

using namespace std;

servicioDelTaller :: servicioDelTaller ( double cost, double tiemp, string, int num){
	ofstream archivo;
	
	archivo.open("Historial de servicios.txt"); 
	switch(num){
		case 1:
			TipoServicio = "Reparacion de frenos";
			Costo = cost + 17.50;
			Tiempo = tiemp + 7;
			numServicio = num;
			cout << "Proceso completado ";
			archivo << TipoServicio << "    " << Costo << "    " << Tiempo << "    " << numServicio;
			break;
		default:
			cout << "ERRROR !!!" << endl;
	}
}

void servicioDelTaller :: MostrarHist (){
	
	ifstream archivo;
	int contador = 0;
	
	archivo.open ("Historial de servicios.txt");
	if (archivo.is_open()){ // Existe ael archivo

	cout  << "Servicio : "<< numServicio << "  "<< TipoServicio << "  "<< Costo << "  "<< Tiempo << endl;
	}
}