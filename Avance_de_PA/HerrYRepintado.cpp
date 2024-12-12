#include "HerrYRepintado.h"


#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <iomanip> 

using namespace std;

void HerrYRepintado :: AnadirTiempoCosto(servicioDelTaller *servicioDTaller){
	servicioTaller = servicioDTaller;
}

HerrYRepintado :: HerrYRepintado(int a){
	cout << "a";
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
	cout << " Gasto " << romper1 << " Disco de lijado\n";
	
	DiscoDeLijados = DiscoDeLijados - romper1;
	
	cout << cantLlave << "   " << cantDestornill << "   " << DiscoDeLijados << "   " << cantPernos << "   " << CantNeumaticos << "   " << cantAceite << "   " << cantLlaveDeAceite << endl;
	archivo << cantLlave << "   " << cantDestornill << "   " << DiscoDeLijados << "   " << cantPernos << "   " << CantNeumaticos << "   " << cantAceite << "   " << cantLlaveDeAceite << endl;
}