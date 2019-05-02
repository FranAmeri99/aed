#include <iostream>
#include <sstream>
using namespace std;

class Cola{
   private:
     struct nodo{
       int dato;
       nodo * siguiente;
     };
     nodo* adelante;
   public:
      Cola();
      void Encolar(int);
      int Desencolar();
      int Leer();
      bool estaVacia();
      int longitud();
      ~Cola();
};

int main(){

return 0
}
