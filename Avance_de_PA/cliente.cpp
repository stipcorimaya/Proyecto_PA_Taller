#include "cliente.h"
#include <iostream>
#include <fstream>
#include <iomanip> 

#include <string>

using namespace std;
		
void cliente :: Cliente (){
	char aux;
	ofstream archivo;
	cin.get(aux);
	archivo.open("Registro de clientes.txt"); // Apertura (creacion)
	cout << "Nombre :" ;
	getline(cin, nombreClient);
		cout << "DNI: ";
		getline (cin,DNI);
		cout << "Correo electronico: ";
		getline(cin,correo);
		cout << "Direccion: ";
		getline(cin,direccion);
		cout << "Marca del Vehiculo: ";
		getline(cin,marcaVeh);
		cout << "Tipo de Vehiculo: ";
		getline(cin, tipoVeh);
		cout << "Tipo de Motor: ";
		getline(cin, tipoMotor);
		cout << "Placa del Vehiculo: ";
		getline(cin, placaVeh);
		cout << "Escribe el color del vehiculo: ";
		getline(cin, colorVeh);
		
		// Escribimos los datos en una linea del archivo . . .
		// Con un espacio de separacion entre ellos
		archivo << nombreClient <<"    "<<DNI<<"    "<<correo<<"    "<<direccion<<"    "<<marcaVeh<< "    "<<tipoVeh<< "    " <<tipoMotor<< "    "<<placaVeh << "    "<<colorVeh<< endl;
		//cout << "Nombre (x para terminar) : ";
		//cin  >> nombre;
	//}
	// Escribamos el centinela fianl . . .
	//archivo << "x";
	archivo.close(); // Cierre del archivo
}


void cliente :: MostrarClient(){

 // Formato  de salida
	
	ifstream archivo;
	int contador = 0;
	
	archivo.open ("Registro de clientes.txt");
	if (archivo.is_open()){ // Existe ael archivo
	archivo >>  nombreClient; // Primer nombre
	//while (nombreClient != "x"){
		contador ++;
		cout << "\n------------------------ Cliente " << contador << " ------------------------" << endl;
	    cout << left;
	    cout << setw(20) << "Nombre: " << nombreClient << endl;
	    cout << setw(20) << "DNI: " << DNI << endl;
	    cout << setw(20) << "Correo: " << correo << endl;
	    cout << setw(20) << "Direccion: " << direccion << endl;
	    
	    cout << "\n---------------------- Datos del Vehículo ----------------------" << endl;
	    cout << setw(20) << "Marca: " << marcaVeh << endl;
	    cout << setw(20) << "Tipo: " << tipoVeh << endl;
	    cout << setw(20) << "Placa: " << placaVeh << endl;
	    cout << setw(20) << "Tipo de Motor: " << tipoMotor << endl;
	
	    cout << "---------------------------------------------------------------" << endl;
		archivo >> nombreClient; // Siguiente nombre
		//}
		archivo.close(); // Cierre
	}
	else{
		cout << "ERROR : No se ha podido abrir el archivo"<< endl;
	}

}