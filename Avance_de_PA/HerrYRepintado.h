#ifndef HERRYREPINTADO_H
#define HERRYREPINTADO_H

#include "ServicioDelTaller.h"
#include <string>

using namespace std;

class HerrYRepintado{
	private:
		int DisciDeLijados;
		string ColorElegido;
		servicioDelTaller *servicioTaller;
	public:
		void AnadirTiempoCosto(servicioDelTaller *);
		void despintar();
		void pintar();
		void reponerHerram();
};

#endif