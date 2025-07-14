#include <iostream>
using namespace std;

void randomarray(int array[], int tamanho){
  for (int i = 0; i < tamanho; ++i){
    array[i] = rand() % 1001;
  }
}

int minmax(){}

int main(){
  int n;

  cout << "Informe o tamanho da array: ";
  cin >> n;
  int array[n];

  randomarray(array, n);
  return 0;
}
