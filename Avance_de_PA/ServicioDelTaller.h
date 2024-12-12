#ifndef SERVICIODELTALLER_H
#define SERVICIODELTALLER_H

#include <string>


using namespace std;

class servicioDelTaller{
	protected:
		double Costo;
		double Tiempo;
		string TipoServicio;
		int numServicio;
	public:
		servicioDelTaller(double, double,string, int);
		void MostrarHist();
		double mostrarCostos();
		double mostrarTiempos();
};

#endif