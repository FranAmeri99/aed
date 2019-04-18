#include "pila.h"
#include <iostream>

using namespace std;

pila::pila(){ //constructor vacio
  this->inicio = NULL;
}
pila::~pila(){
nodo * n = inicio;
  while (n==NULL) {
    nodo * aux = n;
    n = aux->siguiente;
    delete aux;

  }
}

void pila::push(char dato){
    nodo * n = new nodo;
      n->dato = dato;
      n->siguiente = inicio;
      inicio = n;
}

bool pila::empty(){ //ver si esta vacia la lista
  if(inicio==NULL){
      return true;
    }
  else {
      return false;
    }
}

void pila::pop(){ //remover el primer dato
    if(!empty()){
      nodo * aux = inicio;
      inicio = inicio->siguiente;
      delete aux;
    }
}

char pila::top(){ //ver ultimo dato
  if(!empty()){
    return inicio->dato;
  }
  else{
    return 0;
  }
}

int pila::size(){ //tamano
  int s = 0;
  nodo * n = inicio;
  while (n!=NULL) {
    s++;
    n = n->siguiente;
  }
  return s;
}
