#include<iostream>
#include <cstdlib>
using  namespace std;

int main(int argc, char const *argv[]) {
  int N = 5;
  int a;
  int* arr;
  arr = new int[N];
  for (int i = 0; i < N; i++) {
      cout<<"ingrese un numero: ";
      cin>> *(arr+i);
      cout<<"\n";

  }
  for (int i = 0; i < N; i++) {
      cout<<"Mostrar array: ";
      cout<<"dato: "<< *(arr + i)<<" en la direccion: "<< (arr+i);
      cout<<"\n";
  }
  delete[] arr;
  return 0;
}
