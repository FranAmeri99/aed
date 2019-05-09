#include <iostream>

using namespace std;

int buscar(int A[], int inicial, int f, int x){
  if(inicial<=f){
    int mitad= (inicial+(f-inicial)/2);
    if (x==A[mitad]){
      return mitad;
    }
    else {
      if(x<A[mitad]){
        f=(mitad-1);
        return buscar(A, inicial, f, x);
      }
      else{
        inicial= (mitad+1);
        return buscar(A, inicial, f, x);
        }

    }
  }
  else{
    return -1;
  }
}

void mostrar(int A[], int  n){
  for (int i = 0; i < n; i++) {
    cout<<A[i]<<"\n";
  }
}
int main() {
  int x;
  int A[]={1,2,3,5,7,8,10,11,12,15,19,20,24,25,30,31,34};
  int n = sizeof(A)/sizeof(A[0]);
  mostrar(A,n);
  cout<<"ingrese el numero a buscar: ";
  cin>>x;
  cout<<buscar(A, 0, n-1, x);

  return 0;
}
