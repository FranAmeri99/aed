#include <iostream>
#include <stack>

using namespace std;

string cargar_pila(string);

string cargar_pila(string palabra){


  stack<char>p;
  for(int i=0; i<palabra.length(); i++){

      p.push(palabra[i]);
  }


string invertido = "";
    while (!p.empty() )
    {

      invertido += p.top();
      p.pop();
    }

    return invertido;
}



int main(){

  string palabra;
  cout<<"Ingrese una palabra: ";
  getline(cin, palabra);

  cargar_pila(palabra);
  cout<<cargar_pila(palabra);

  return 0;
}
