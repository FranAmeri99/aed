#include <iostream>
using namespace std;


void ordenar_seleccion(int[], int);
void mostrar(int[], int);
void ordenar_burbuja(int[], int);
void ordenar_insercio(int[], int);
int main(){
  int n;
  cout<<"Ingrse cuantos elementos va a cargar: ";
  cin>>n;
  int arreglo[n];
  for (int i = 0; i < n; i++) {
    cin>>arreglo[i];
    }
//  ordenar_seleccion(arreglo, n);
  //ordenar_burbuja(arreglo, n);
ordenar_insercio(arreglo, n);
  mostrar(arreglo, n);
  return 0;
}

void ordenar_burbuja(int arreglo[], int n){
  int p =1;
  while (p>0) {
    /* code */
  p=0;
    for (int j = 0; j < n-1; j++) {
      if(arreglo[j]>arreglo[j+1]){
        swap(arreglo[j],arreglo[j+1]);
        p++;
      }
    }
  }
}

void ordenar_insercio(int arreglo[], int n){
  for (int i = 1; i < n; i++) {
    int j =i;
    while (j>0 && arreglo[j]<arreglo[j-1]) {
        swap(arreglo[j-1],arreglo[j]);
        j--;/* code */
    }
  }
}

void ordenar_seleccion(int arreglo[], int n){
  int aux = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i+1; j < n-1; j++) {
      if(arreglo[j]<arreglo[j+1]){
        aux=arreglo[j];
        arreglo[j]=arreglo[j+1];
        arreglo[j+1] = aux;
      }
    }
  }
}

void mostrar(int arreglo[], int n){
  for (int i = 0; i < n; i++) {
    cout<<arreglo[i];
    cout<<", ";
  }
cout<<"\n";
}
