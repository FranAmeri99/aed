#include<iostream>
using namespace std;

void cambiar(int* a, int* b);
int main() {
  int a, b;
  std::cout << "Ingrese un  numero: \n";
  cin>>a;
  cout<<"Ingrese el segundo numero: \n";
cin>>b;
cambiar(&a, &b);
cout<<"Nuevo valor del primer numero: "<<a<<endl;
cout<<"Nuevo valor del segundo numero: "<<b<<endl;

  return 0;
}

void cambiar(int* a, int* b) {
  int c;
  c=*b;
  *b=*a;
  *a=c;
}
