#include <iostream>
using namespace std;
class Lista{
  private:
      struct nodo{
        int dato;
        nodo* siguiente;
        };
      nodo* inicio;
  public:
    Lista();
    void Insertar(int);
    void mostrar();
    int longitud();
    ~Lista(){
      nodo* aux = inicio;
      while(aux){
        nodo* n = inicio;

      aux = n ->siguiente;
          delete n;

      }

    }


};
Lista::Lista(){
    inicio = NULL;
  }
  void Lista::Insertar(int dato){
    nodo* Puntero = new  nodo;
    Puntero->dato=dato;
    Puntero->siguiente = inicio;
    inicio = Puntero;
  }

void Lista::mostrar(){
  nodo* aux = inicio;
  do{
    cout<<" siguiente"<<aux->dato<<"\n";
    aux = aux ->siguiente;

  }while (aux != NULL);

}
int Lista::longitud(){
  nodo* aux = inicio;
  int i=0;
  do{
    aux = aux ->siguiente;
    i++;
  }while (aux != NULL);
  return i;


}

int main() {
  Lista l1;
  l1.Insertar(5);
  l1.Insertar(3);
  //l1.mostrar();
  cout<<l1.longitud()<<"\n";
  return 0;
}
