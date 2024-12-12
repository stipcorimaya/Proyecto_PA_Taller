#include "HerrYCambioDeNeumatico.h"
#include "herramientas.h"

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <iomanip> 

void HerrYCambioDeNeumatico :: AnadirTiempoCosto(servicioDelTaller *servicioDTaller){
	servicioTaller = servicioDTaller;
}

HerrYCambioDeNeumatico :: HerrYCambioDeNeumatico(int aux){
	int cantLlave, cantDestornill, DiscoDeLijados;
    int cantPernos, CantNeumaticos;
	double cantAceite;
    int cantLlaveDeAceite;
	
	srand(time(0));
	ifstream Archivo("Almacen.txt");
	if (Archivo.is_open()) {
        // Leer los valores directamente desde el archivo
        Archivo >> cantLlave >> cantDestornill >> DiscoDeLijados >> cantPernos >> CantNeumaticos >> cantAceite >> cantLlaveDeAceite;
        // Cerrar el archivo después de leer
        Archivo.close();
	}
	
	ofstream archivo;
	
	archivo.open("Almacen.txt");
	
	int romper2 = (rand()%5)+1;
	cout << " Gasto " << romper2 << " Neumaticos\n";
	
	int romper1 = (rand()%5)+4*romper2;
	cout << " Gasto " << romper1 << " Pernos\n";
	
	cantPernos = cantPernos - romper1;
	CantNeumaticos = CantNeumaticos - romper2;
	
	cout << cantLlave << "   " << cantDestornill << "   " << DiscoDeLijados << "   " << cantPernos << "   " << CantNeumaticos << "   " << cantAceite << "   " << cantLlaveDeAceite << endl;
	archivo << cantLlave << "   " << cantDestornill << "   " << DiscoDeLijados << "   " << cantPernos << "   " << CantNeumaticos << "   " << cantAceite << "   " << cantLlaveDeAceite << endl;
}