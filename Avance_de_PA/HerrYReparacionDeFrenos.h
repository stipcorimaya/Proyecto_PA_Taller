#ifndef HERRYREPARACIONDEFRENOS_H
#define HERRYREPARACIONDEFRENOS_H

#include "ServicioDelTaller.h"
#include "herramientas.h"

using namespace std;

class HerrYReparacionDeFrenos{
	private:
		servicioDelTaller *servicioTaller;
		
	public:
		HerrYReparacionDeFrenos(int, int);
		void AnadirTiempoCosto(servicioDelTaller *);
};

#endif