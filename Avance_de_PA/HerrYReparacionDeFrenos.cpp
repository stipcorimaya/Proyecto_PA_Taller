#include "HerrYReparacionDeFrenos.h"
#include "herramientas.h"

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <iomanip> 

class herramientas;

using namespace std;

HerrYReparacionDeFrenos :: HerrYReparacionDeFrenos(int llav, int dest){
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
	int romper1 = (rand() % 2) * (rand()%2);
	cout << " Gasto " << romper1 << " llaves de rueda\n";
	int romper2 = (rand() % 2) * (rand()%3);
	cout << " Gasto " << romper2 << " Destornilladores\n";
	cantLlave = cantLlave - romper1;
	cantDestornill = cantDestornill - romper2;
	
	cout << cantLlave << "   " << cantDestornill << "   " << DiscoDeLijados << "   " << cantPernos << "   " << CantNeumaticos << "   " << cantAceite << "   " << cantLlaveDeAceite << endl;
	archivo << cantLlave << "   " << cantDestornill << "   " << DiscoDeLijados << "   " << cantPernos << "   " << CantNeumaticos << "   " << cantAceite << "   " << cantLlaveDeAceite << endl;
}

void HerrYReparacionDeFrenos :: AnadirTiempoCosto(servicioDelTaller *servicioDTaller){
	servicioTaller = servicioDTaller;
}
