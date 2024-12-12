#ifndef HERRYCAMBIOACEITEOFILTRO_H
#define HERRYCAMBIOACEITEOFILTRO_H

#include "ServicioDelTaller.h"


class HerrYCambioAceiteFiltro{
	private:
		double cantAceite;
		int cantLlaveDeAceite;
		servicioDelTaller *servicioTaller;
	public:
		void AnadirTiempoCosto(servicioDelTaller *);
		void RealizarReparacion();
		void reponerHerram(); 
};

#endif