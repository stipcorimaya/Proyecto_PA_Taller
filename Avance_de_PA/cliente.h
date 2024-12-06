#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class cliente{
	protected:
		string nombreClient;
		string DNI;
		string marcaVeh;
		string tipoVeh;
		string placaVeh;
		string tipoMotor;
		string correo;
		string direccion;
	private:
		AnadirClient(string, string, string, string, string, string, string, string);
		void MostrarClient();
};

#endif