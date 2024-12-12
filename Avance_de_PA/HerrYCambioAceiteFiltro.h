#ifndef HERRYCAMBIOACEITEOFILTRO_H
#define HERRYCAMBIOACEITEOFILTRO_H

#include "ServicioDelTaller.h"


class HerrYCambioAceiteFiltro{
	private:
		servicioDelTaller *servicioTaller;
	public:
		void AnadirTiempoCosto(servicioDelTaller *);
		HerrYCambioAceiteFiltro(int);
};

#endif