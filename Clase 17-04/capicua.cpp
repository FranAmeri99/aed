#include <iostream>
#include "pila.h"
using namespace std;

bool esCapicua(string palabra){
  pila p;
  int l = palabra.length();
  for(int i =0; i<l/2; i++){
    p.push(palabra[i]);

  }

  int mitad = l/2 + l%2;
  for (int i = mitad; i < l; i++) {
    if (palabra[i]!=p.top()){

      return false;
    }
    else{
      p.pop();

    }
    }

    return true;
  }

int main() {
  string palabra;
  while (palabra != "salir"){
    cout << "Ingrese una palabra: " << '\n';
    getline(cin, palabra);
    cout << "\n" <<palabra <<(esCapicua(palabra)? " Es capicua":" no es capicua")<<'\n';

  }
  return 0;
}
