#include <iostream>
#include <sstream>
using namespace std;
int i=0;
class Lista{
	private:
		struct nodo{
			int dato;
			nodo *siguiente;
		};
		nodo *inicio;

		void mostrarRecursiva(nodo* aux);
		void longitudRecursiva(nodo* aux);
		void invertirRecursiva(nodo * aux);
	public:
		Lista();
//		BorrarLista();
		void removerPosicion(int);
		void Insertar(int);
		void InsertarUltimo(int);
		void InsertarPosicion(int, int);
		void Menor();
		void Mayor();
		void Mostrar();
    void mostrarRecursiva();
		void esta_vacia();
		void longitud();
		void longitudRecursiva();
		void remover();
    void removerUltimo();
		void invertirRecursiva();

		~Lista(){ //destructor
			nodo* n = inicio;
			while(n){
				nodo* aux= n;
				n = aux->siguiente;
				delete aux;
			}
		}
};
//Inicio la lista
	Lista::Lista(){
		inicio = NULL;
	}
//Insertar una Nodo a la lista
	void Lista::Insertar(int dato){
		nodo* n = new nodo;
		n->dato = dato;
		n->siguiente=inicio;
		inicio = n;
	}
//Insertar al ultimo;
	void Lista::InsertarUltimo(int dato){
		nodo* n = new nodo;
		n->dato = dato;
		n->siguiente = NULL;
		nodo * aux = new nodo;
		aux->siguiente=inicio;
		while (aux->siguiente!=NULL) {
			aux=aux->siguiente;
		}
		aux->siguiente=n;
		return;
	}

//Insertar en una Posicion;
	void Lista::InsertarPosicion(int dato, int posicion){
		nodo* n = new nodo;
		n->dato = dato;
		n->siguiente = NULL;
		nodo * aux1 = new nodo;
		nodo * aux2 = new nodo;
		aux1=inicio;
		for ( i = 1; i < posicion; i++) {
				aux2 = aux1;
				aux1 = aux1->siguiente;
			}
			aux2->siguiente = n;
			n->siguiente=aux1;
	}

void Lista::removerPosicion(int posicion){
			nodo* n = new nodo;

			n->siguiente = NULL;
			nodo * aux1 = new nodo;
			nodo * aux2 = new nodo;
			aux1=inicio;
			for ( i = 1; i < posicion; i++) {
					aux2 = aux1;
					aux1 = aux1->siguiente;
				}
				aux2->siguiente = aux1->siguiente;
				delete aux1;
		}

//Nodo Mayor
void Lista::Mayor(){
	nodo* aux = inicio;
	nodo* Mayor = inicio;
	while(aux!=NULL){
		if(aux->dato>Mayor->dato){
			Mayor = aux;
		}
		aux = aux->siguiente;
		}
	cout<<"\nel Mayor es:"<<Mayor->dato<<"\n";
}
//Nodo Menor
	void Lista::Menor(){
		nodo* aux = inicio;
		nodo* menor = inicio;
		while(aux!=NULL){
			if(aux->dato<menor->dato){
				menor = aux;
			}
			aux = aux->siguiente;
			}
		cout<<"\nel Menor es:"<<menor->dato<<"\n";
	}
//Mostrar lista:
	void Lista::Mostrar(){
		nodo* aux = inicio;
		while(aux!=NULL){
			cout<<"numeros: "<<aux->dato<<endl;
			aux = aux->siguiente;
			}
		}
//Mostrar Recursivamente:
  void Lista::mostrarRecursiva(nodo* aux){
    if(aux==NULL){
      cout<<" \n"	;
      return ;
    }
    else{
      cout<<"\nNumero: "<< aux->dato;
      mostrarRecursiva(aux->siguiente);

    }
    }

  void Lista::mostrarRecursiva(){
    mostrarRecursiva(inicio);
  }
//Ver cuantos elementos tiene la lista:
	void Lista::esta_vacia(){
		nodo* aux = inicio;
		int i =0;
		while(aux!=NULL){
			aux = aux->siguiente;
			i++;
			}
			if(i==0){
				cout<<"La lista esta vacia.\n";
				}
			else{
				cout<<"La lista posee "<< i << " elementos.\n";
				}
		}
//Mostrar longitud:
    void Lista::longitud(){
      nodo* aux = inicio;
      int i=0;
      while(aux!=NULL){
        i++;
        aux = aux->siguiente;
        }
          cout<<"longitud: "<< i;
        }
//Mostrar longitudRecursiva:
    void Lista::longitudRecursiva(){
      longitudRecursiva(inicio);
    }

    void Lista::longitudRecursiva(nodo* aux){
      if(aux==NULL){
        cout<<"Longitud Recursiva: "<<i;
        return;
      }
      else{
        i++;
        longitudRecursiva(aux->siguiente);
      }
    }

	void Lista::remover(){
		nodo* n = inicio;
		if(inicio==NULL){
			cout<<"nada";
			return;
		}
		else{
			inicio=n->siguiente;
			delete n;

		}
	}
		void Lista::removerUltimo(){
			nodo* n = inicio;
			nodo * aux;
			do{
				aux = n;
				n = n->siguiente;
			}while(n->siguiente!=NULL);

			delete n;
			aux->siguiente = NULL;
		}

			void Lista::invertirRecursiva(nodo * aux){
					nodo * anterio = NULL;
					nodo * actual = inicio;
					nodo *siguiente = NULL;
					while(actual!=NULL){
						siguiente=actual->siguiente;
						actual->siguiente=anterio;
						anterio = actual;
						actual=siguiente;
					}

						inicio = anterio;
		}
		void Lista::invertirRecursiva(){
			invertirRecursiva(inicio);

		}


int main(){
	int posicion = 3;
	Lista l1;


	l1.Insertar(5);
	l1.Insertar(1);
	l1.Insertar(9);
	l1.InsertarUltimo(119);
	l1.InsertarPosicion(100, 2);

	l1.Insertar(2);
  cout<<"Mostrar: \n";
  l1.Mostrar();
	l1.removerPosicion(posicion);
  cout<<"\nMostrar Recursivamente: ";
  l1.mostrarRecursiva();
  cout<<"\n";
	l1.longitud();
  cout<<"\n";
  l1.longitudRecursiva();
  cout<<"\n";
  l1.remover();
  cout<<"\nRemover Primer elemento: \n";
  l1.mostrarRecursiva();
  cout<<"\nRemover Ultimo elemento: \n";
  l1.removerUltimo();
  l1.mostrarRecursiva();
std::cout << "Invertir:" << '\n';
  l1.invertirRecursiva();
  l1.mostrarRecursiva();
	l1.Menor();
	cout<<"\n";
	l1.Mayor();
	cout<<"\n";
	cout<<"se removio el elemento en la posicion ["<<posicion<<"]:";
	l1.removerPosicion(posicion);
	l1.mostrarRecursiva();
return 0;
}
