#include "herramientas.h"

#include <fstream>
#include <iomanip> 
#include <iostream>

using namespace std;

herramientas :: herramientas(int LlaveRue, int Dest, int Disc, int Pern, int Neum, double Acei, int llavAcei, int numS){
	
	int contador = 0;
	
	ifstream Archivo("Almacen.txt");
	if (Archivo.is_open()) {
        // Leer los valores directamente desde el archivo
        Archivo >> cantLlave >> cantDestornill >> DiscoDeLijados >> cantPernos >> CantNeumaticos >> cantAceite >> cantLlaveDeAceite;

        // Cerrar el archivo después de leer
        Archivo.close();
	}
	
	ofstream archivo;
	
	archivo.open("Almacen.txt");
	int cantR;
	int opc;
	switch(numS){
		case 1:
			cout << " Escoge la herramienta que va a reponer\n";
			cout << " 1) Llave de la rueda\n";
			cout << " 2) Destonillador\n";
			cin>>opc;
			cout<<" Cuanto vas a reponer : ";
			cin>>cantR;
			if(opc == 1){
				cantLlave = cantLlave + cantR;
			}else if(opc == 2){
				cantDestornill = cantDestornill + cantR;
			}else{
				cout << " Vuelve a intentar\n";
			}
		break;
		case 2:
			cout << " Escoge la herramienta que va a reponer\n";
			cout << " 1) Disco de lijado\n";
			cin>>opc;
			cout<<" Cuanto vas a reponer : ";
			cin>>cantR;
			if(opc == 1){
				DiscoDeLijados = DiscoDeLijados + cantR;
			}else{
				cout << " Vuelve a intentar\n";
			}
		break;
		case 3:
			cout << " Escoge la herramienta que va a reponer\n";
			cout << " 1) Pernos\n";
			cout << " 2) Neumaticos\n";
			cin>>opc;
			cout<<" Cuanto vas a reponer : ";
			cin>>cantR;
			if(opc == 1){
				cantPernos = cantPernos + cantR;
			}else if(opc == 2){
				CantNeumaticos = CantNeumaticos + cantR;
			}else{
				cout << " Vuelve a intentar\n";
			}
		break;
		case 4:
			cout << " Escoge la herramienta que va a reponer\n";
			cout << " 1) Aceite (Litros)\n";
			cout << " 2) Neumaticos\n";
			cin>>opc;
			cout<<" Cuanto vas a reponer : ";
			cin>>cantR;
			if(opc == 1){
				cantAceite = cantAceite + cantR;
			}else if(opc == 2){
				cantLlaveDeAceite = cantLlaveDeAceite + cantR;
			}else{
				cout << " Vuelve a intentar\n";
			}
		break;
		default:
			cout << "ERRROR !!!" << endl;
		break;
	}
	cout << cantLlave << "   " << cantDestornill << "   " << DiscoDeLijados << "   " << cantPernos << "   " << CantNeumaticos << "   " << cantAceite << "   " << cantLlaveDeAceite << endl;
	archivo << cantLlave << "   " << cantDestornill << "   " << DiscoDeLijados << "   " << cantPernos << "   " << CantNeumaticos << "   " << cantAceite << "   " << cantLlaveDeAceite << endl;
}

