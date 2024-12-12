#include "cliente.h"
#include "ServicioDelTaller.h"
#include "HerrYReparacionDeFrenos.h"
#include "herramientas.h"
#include "HerrYRepintado.h"
#include "HerrYCambioDeNeumatico.h"
#include "HerrYCambioAceiteFiltro.h"



#include <string>
#include <iostream>
using namespace std;
cliente cliente;

void ProgCliente(){
	int opc=0;
	int cantserv;
	double C = 0.0;
	double T = 0.0;
	cout << " Coloque sus datos correctamente : \n";
	cliente.Cliente();
	system("pause");
	system("cls");
	cout << " Cuantos servicios va a recibir: ";
	cin>>cantserv;
	
	for(int i = 0; i<cantserv; i++){
		cout << " Elija el numero de reparacion: \n";
		cout << " 1) Reparacion de frenos\n";
		cout << " 2) Repintado\n";
		cout << " 3) Cambio de neumaticos\n";
		cout << " 4) Cambio de aceite o filtro\n";
		cin>>opc;

		if(opc == 1){
			HerrYReparacionDeFrenos HerrYReparacionDeFrenos(0, 0);
			servicioDelTaller a(C,T,"Reparacion de frenos",1);
			C = a.mostrarCostos();
			T = a.mostrarTiempos();
			cout << C << "soles y " << T << "horas "<<endl;
		}
		if(opc == 2){
			HerrYRepintado HerrYRepintado(0);
			servicioDelTaller a(C,T,"Repintado",2);
			C = a.mostrarCostos();
			T = a.mostrarTiempos();
			cout << C << "soles y " << T << "horas "<<endl;
		}
		if(opc == 3){
			HerrYCambioDeNeumatico HerrYCambioDeNeumatico(0);
			servicioDelTaller a(C,T,"Cambio de neumaticos",3);
			C = a.mostrarCostos();
			T = a.mostrarTiempos();
			cout << C << "soles y " << T << "horas "<<endl;
		}
		if(opc == 4){
			HerrYCambioAceiteFiltro HerrYCambioAceiteFiltro(0);
			servicioDelTaller a(C,T,"Cambio de aceite y filtro",4);
			C = a.mostrarCostos();
			T = a.mostrarTiempos();
			cout << C << "soles y " << T << "horas "<<endl;
		}
		
	}
	system("pause");
	system("cls");
	servicioDelTaller MostrarHist ();;
	cliente.MostrarClient();
	cout  << "-------------------------------------------------------------------------------------------" << endl;

	cout << " Se entregara en " << T << " horas con un costo de S/" << C << " soles"<< endl;
	system("pause");
	system("cls");
}

void ProgAdmin(){
	int opc=0;
	cout << " Elija el numero de reparacion: \n";
	cout << " 1) Reparacion de frenos\n";
	cout << " 2) Repintado\n";
	cout << " 3) Cambio de neumaticos\n";
	cout << " 4) Cambio de aceite o filtro\n";
	cin>>opc;

	herramientas(0,0,0,0,0,0,0,opc);

}

int main() {
	int n;
	cout<<"___.";
	servicioDelTaller MostrarHist ();
	cout<<"___";
	do{
		cout << "\n\n\t\t******************************\n";
	    cout << "\t\t*  BIENVENIDO AL PROGRAMA DE  *\n";
	    cout << "\t\t*   UN TALLER AUTOMOTRIZ      *\n";
	    cout << "\t\t******************************\n";
	    cout << "\n";
	    cout << "\t\tSeleccione una opcion:\n";
	    cout << "\n";
	    cout << "\t\t1) Usar servicio para el Cliente\n";
	    cout << "\t\t2) Para el Administrador\n";
	    cout << "\t\t3) Salir\n";
	    cout << "\n";
	    cout << "\t\tIngrese el numero de la opcion: ";
		cin >> n;
		system("pause");
		system("cls");
		
		switch(n){
			case 1:
				ProgCliente();
			break;
			case 2:
				ProgAdmin();
			break;
			default:
				cout << "ERROR!!";
			break;
		}
	}while(n!=3);
	return 0;
}