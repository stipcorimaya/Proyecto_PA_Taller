#ifndef HERRYCAMBIODENEUMATICOS_H
#define HERRYCAMBIODENEUMATICOS_H

#include "ServicioDelTaller.h"


class HerrYCambioDeNeumatico{
	private:
		int cantPernos;
		int CantNEumaticos;
		servicioDelTaller *servicioTaller;
	public:
		void AnadirTiempoCosto(servicioDelTaller *);
		HerrYCambioDeNeumatico(int);
};

#endif
