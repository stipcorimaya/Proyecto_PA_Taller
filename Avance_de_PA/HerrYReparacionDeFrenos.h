#ifndef HERRYREPARACIONDEFRENOS_H
#define HERRYREPARACIONDEFRENOS_H

#include "ServicioDelTaller.h"

using namespace std;

class HerrYReparacionDeFrenos{
	private:
		int cantLlave;
		int cantDestornill;
		servicioDelTaller *servicioTaller;
	public:
		HerrYReparacionDeFrenos(int, int);
		void AnadirTiempoCosto(servicioDelTaller *);
};

#endif