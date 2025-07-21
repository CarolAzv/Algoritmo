#include <iostream>
using namespace std;

void randomArray(int array[], int tamanho){
  srand(time(0));
  for (int i = 0; i < tamanho; ++i){
    array[i] = rand() % 1001; 
  }
}

int main(){
  int tamanho;

  cout << "Tamanho do vetor: ";
  cin >> tamanho;
  int vetor[tamanho];
  randomArray(vetor, tamanho);
  
  return 0;
}
