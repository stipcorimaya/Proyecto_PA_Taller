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
		case 2:
			TipoServicio = "Repintado";
			Costo = cost + 14.50;
			Tiempo = tiemp + 5;
			numServicio = num;
			cout << "Proceso completado ";
			archivo << TipoServicio << "    " << Costo << "    " << Tiempo << "    " << numServicio;
		break;
		case 3:
			TipoServicio = "Cambio de Neumatico";
			Costo = cost + 28.00;
			Tiempo = tiemp + 4;
			numServicio = num;
			cout << "Proceso completado ";
			archivo << TipoServicio << "    " << Costo << "    " << Tiempo << "    " << numServicio;
		break;
		case 4:
			TipoServicio = "Cambio de aceite o filtro";
			Costo = cost + 10.50;
			Tiempo = tiemp + 10;
			numServicio = num;
			cout << "Proceso completado ";
			archivo << TipoServicio << "    " << Costo << "    " << Tiempo << "    " << numServicio;
		break;
		default:
			cout << "ERRROR !!!" << endl;
		break;
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

double servicioDelTaller :: mostrarCostos(){
	return Costo;
}

double servicioDelTaller :: mostrarTiempos(){
	return Tiempo;
}