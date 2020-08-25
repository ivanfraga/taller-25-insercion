#include <iostream>
#include <fstream>
using namespace std;
void ingresar (int a[], int tamanio);
void imprimir(int a[],int tamanio);
void oInsercion (int a[],int tamanio);
void suma (int a[], int tamanio);
int main(){
  const int MAX = 50;
  int a[MAX], tamanioU;
  cout << "Ingrese el tamanio del arreglo : ";
  cin >> tamanioU;
  ingresar (a, tamanioU);
  
  oInsercion(a, tamanioU);

  suma(a, tamanioU);
}
void ingresar(int a[], int tamanio){
  ofstream Drago;
  Drago.open ("Ordenamiento", ios::app);
  Drago << "\nArreglo original\n";
  for (int i = 0; i<tamanio;i++){
    cout << "Ingrese el elemento "<< i+1 <<" : ";
    cin >> a[i];
    Drago << a[i]<< " ";
  }
  Drago <<"\nTamanio del arreglo : "<< tamanio << endl;
  Drago.close();
}
void imprimir(int a[],int tamanio){

  for (int i =0; i <tamanio; i++){
    cout << a [i] << " ";
  }
}
void oInsercion (int a[],int tamanio){
  int aux;
  ofstream Drago;
  Drago.open ("Ordenamiento", ios::app);
  Drago << "\nArreglo ordenado por insercion\n";
  for ( int i = 0; i < tamanio ; i++){
    aux = a[i];
    int p = i;
    while (p>0) {
      if(a[p-1]>aux){
      a[p]=a[p-1];

      a[p-1]=aux;
      }
      p--;
    }
  }
  for (int i = 0; i< tamanio; i++){
    Drago << a[i]<< " ";
  }
  Drago << endl;
  Drago.close();
}
void suma (int a[], int tamanio){
  int suma = 0;
  ofstream Drago;
  Drago.open ("Ordenamiento", ios::app);
  
  for (int i = 0; i< tamanio; i++){
    suma = suma + a [i];
  }
  Drago << "\nLa suma de los elementos del arreglo es : "<< suma << endl;
  Drago.close();
}