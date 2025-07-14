#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void randomarray(int array[], int tamanho){
  for (int i = 0; i < tamanho; ++i){
    array[i] = rand() % 100001;
  }
}

int linear(int array[], int tamanho, int chave){}

int binario(){}

int main(){
  int tamanho = 10000, array[10000], chave;

  cout << "A chave áleatoria é: " << chave << '\n';

  randomarray(array, tamanho);

  return 0;
}
