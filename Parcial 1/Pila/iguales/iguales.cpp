#include<iostream>
#include<sstream>
#include "pila.cpp"
using namespace std;
bool Iguales(string palabra1, string palabra2) {
  pila p1,p2;
  if(palabra1.length()==palabra2.length()){
    for(int i=0; i<palabra1.length(); i++){
        p1.push(palabra1[i]);//inserto en la pila 1
        p2.push(palabra2[i]);//inserto en la pila 2
    }
    for(int i=0; i<palabra1.length(); i++){
        if(p1.top()!=p2.top()){
          return false;
        }
        else{
          p1.pop();
          p2.pop();
          }
    }
    return true;
  }
  cout<<"No Son Iguales...";
  return false;
  }

int main(){
  string palabra1, palabra2;
  cout<<"Ingrese una palabra: ";
  getline(cin,palabra1);
  cout<<"Ingrese la segunda palabra: ";
  getline(cin,palabra2);
cout<<"\n --------------\n";
  cout<<(Iguales(palabra1,palabra2)?"son iguales":"Son distintas");
  cout<<"\n --------------";
}
