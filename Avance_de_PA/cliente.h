#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

using namespace std;
//string, string, string, string, string, string, string, string
class cliente{
	private:
		string nombreClient;
		string DNI;
		string marcaVeh;
		string tipoVeh;
		string placaVeh;
		string tipoMotor;
		string correo;
		string direccion;
		string colorVeh;
	public:
		void Cliente();
		void MostrarClient();
};

#endif