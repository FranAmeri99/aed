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

		void Insertar(int);
		void Mostrar();
		void esta_vacia();
		int longitud();
		void mostrarRecursiva();
		void longitudRecursiva();
		void remover();
		void invertirRecursiva();
		void removerUltimo();
		~Lista(){
			nodo* n = inicio;
			while(n){
				nodo* aux= n;
				n = aux->siguiente;
				delete aux;
			}
		}
};

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

		Lista::Lista(){
			inicio = NULL;
		}

		void Lista::Insertar(int dato){
			nodo* n = new nodo;
			n->dato = dato;
			n->siguiente=inicio;
			inicio = n;
			}
		void Lista::Mostrar(){
			nodo* aux = inicio;
			while(aux!=NULL){
				cout<<"numeros: "<<aux->dato<<endl;;
				aux = aux->siguiente;
				}
			}

		void Lista::mostrarRecursiva(nodo* aux){
			if(aux==NULL){
			cout<<" \n"	;
			return ;
			}
			else{
				cout<<"\n ->"<< aux->dato;
				mostrarRecursiva(aux->siguiente);
			}
cout<<"\n";
		}
		void Lista::mostrarRecursiva(){
			mostrarRecursiva(inicio);
		}


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

		int Lista::longitud(){
			nodo* aux = inicio;
			int i = 0;
			while(aux!=NULL){
				aux = aux->siguiente;
				i++;
				}
					return i;
				}
		void Lista::longitudRecursiva(nodo* aux){

			if(aux==NULL){
				cout<<"Longitud: "<<i;
				return;
			}
			else{
				i++;
				longitudRecursiva(aux->siguiente);
			}
		}
		void Lista::longitudRecursiva(){
			longitudRecursiva(inicio);
		}
			void Lista::invertirRecursiva(nodo * aux){
					nodo * anterio = NULL;
					nodo * actual = inicio;
					nodo *siguiente = NULL;
					if(actual!=NULL){
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

	Lista l1;


	l1.Insertar(5);
	l1.Insertar(1);
	l1.Insertar(9);
	l1.Insertar(2);
//	l1.remover();
	//l1.removerUltimo();
	l1.Mostrar();
	l1.esta_vacia();
	cout<<"\n inversa: ";
//	l1.invertirRecursiva();

	l1.mostrarRecursiva();
	l1.longitudRecursiva();


return 0;
}
