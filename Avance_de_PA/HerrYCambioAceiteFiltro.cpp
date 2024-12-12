#include "HerrYCambioAceiteFiltro.h"
#include "herramientas.h"

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <iomanip> 

void HerrYCambioAceiteFiltro :: AnadirTiempoCosto(servicioDelTaller *servicioDTaller){
	servicioTaller = servicioDTaller;
}

HerrYCambioAceiteFiltro :: HerrYCambioAceiteFiltro(int aux){
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
	float romper1 = 1-((rand()%100+1)/100.00);
	cout << " Gasto " << romper1 << " litro\n";
	int romper2 = (rand() % 2) * (rand()%3);
	cout << " Gasto " << romper2 << " Destornilladores\n";
	cantAceite = cantAceite - romper1;
	cantLlaveDeAceite = cantLlaveDeAceite - romper2;
	
	cout << cantLlave << "   " << cantDestornill << "   " << DiscoDeLijados << "   " << cantPernos << "   " << CantNeumaticos << "   " << cantAceite << "   " << cantLlaveDeAceite << endl;
	archivo << cantLlave << "   " << cantDestornill << "   " << DiscoDeLijados << "   " << cantPernos << "   " << CantNeumaticos << "   " << cantAceite << "   " << cantLlaveDeAceite << endl;
}