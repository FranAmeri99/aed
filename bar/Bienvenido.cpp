#include "Factura.cpp"
using namespace std;
int i;

void Bienvenido(){
	do {
      i=0;
      cout << "\n BIENVENIDO A: \n";
			cout << "MARIA MARIA BAR \n";
      cout << "Ingrese (1) si quiere cargar un nuevo cliente \n";
      cout << "Ingrese (2) si quiere ver los cliente cargados \n";
      cout << "Ingrese (3) si quiere cargar un nuevo mozo \n";
			cout << "Ingrese (4) si quiere ver los mozo cargados \n";
			cout << "Ingrese (5) si quiere cargar una nueva factura \n";
			cout << "Ingrese (6) si quiere ver las factura cargadas \n";
			cout << "Ingrese (0) si quiere salir \n";
      cin>> i;
      switch (i) {
        case 1:
            n_cliente();
            break;
				case 2:
						mostrar_cliente();
            break;
        case 3:
						n_mozo();
						break;
				case 4:
						mostrar_mozo();
            break;
				case 5:
						n_factra();
				case 6:
						mostrar_facturas();
      }
  } while(i!=0);
    cout<<"CHAU \n";
}
