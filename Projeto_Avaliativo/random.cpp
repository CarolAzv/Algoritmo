#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void randomarray(int array[], int tamanho){
  for (int i = 0; i < tamanho; ++i){
    array[i] = rand() % 1001;
  }
}

int main(){
  int tamanho, array[300];

  cout << "Digite o tamanho da array: ";
  cin >> tamanho;

  randomarray(array, tamanho);

  for(int i=0; i<tamanho; i++){
        cout << array[i] << " ";
    }

  return 0;
}
