#ifndef HERRYREPINTADO_H
#define HERRYREPINTADO_H

#include "ServicioDelTaller.h"
#include <string>

using namespace std;

class HerrYRepintado{
	private:
		string ColorElegido;
		servicioDelTaller *servicioTaller;
	public:
		void AnadirTiempoCosto(servicioDelTaller *);
		HerrYRepintado(int);
};

#endif