
class pila{
  private:
      struct nodo {
            char dato;
            nodo* siguiente;

        };
        nodo * inicio;
    public:
        pila();
        ~pila();
        char top();//Devuelve una referencia al elemento de más arriba de la pila
        void push(char dato); //agrega un elemento
        void pop(); //saca un elemento
        bool empty(); // si esta vacia la pila
        int size(); // devuelve el tamano de la pila
};
