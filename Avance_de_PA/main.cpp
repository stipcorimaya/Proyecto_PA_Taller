#include <iostream>
#include "cliente.h"
#include "ServicioDelTaller.h"
#include "HerrYReparacionDeFrenos.h"
#include <string>

using namespace std;



cliente cliente;
int main() {
	cliente.Cliente();
	system("cls");
	cliente.MostrarClient();
	return 0;
}