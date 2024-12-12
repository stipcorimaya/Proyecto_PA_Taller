#ifndef HERRAMIENTAS_H
#define HERRAMIENTAS_H

class herramientas {
	private:
		int cantLlave;
		int cantDestornill;
		int DiscoDeLijados;
		int cantPernos;
		int CantNeumaticos;
		double cantAceite;
		int cantLlaveDeAceite;
		int numServicio;
	public:
		Frenos(int, int);
		Pintado(int);
		CamNeuma(int, int);
		CamAceite(double, int);
		void MostrarInven();
		herramientas(int , int , int , int , int , double , int, int );
};

#endif