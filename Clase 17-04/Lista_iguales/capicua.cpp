#include <iostream>
#include "pila.h"
using namespace std;

bool igual(string palabra1, string palabra2){
  pila p;
  int l = palabra1.length();
  int m = palabra2.length();
  if(l==m){

    for (int i = 0; i < l; i++) {
      if (palabra1[i]!=palabra2[i]){
        return false;
      }
      else{
        p.pop();
      }
    }
    return true;

  }
  return false;
  }

int main() {
  string palabra1;
  string palabra2;
  while (palabra1 != "salir"){
    cout << "Ingrese una palabra: " << '\n';
    getline(cin, palabra1);
    cout << "Ingrese una palabra: " << '\n';
    getline(cin, palabra2);
    cout << "\n"  <<(igual(palabra1, palabra2)? " las palabras son iguales":" no son iguales")<<'\n';

  }
  return 0;
}
