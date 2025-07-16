#include <iostream>
using namespace std;

void randomarray(int array[], int tamanho){
  for (int i = 0; i < tamanho; ++i){
    array[i] = rand() % 1001;
  }
}

int minmax(int array,  int tamanho){
  int min, max, minmax[2];
  min = array[0];
  max = array[0];
  if(array[1] > max){
    max = array[1];
  }
  if(array[1] < min){
    min = array[1];
  }
  for(i = 2; i<tamanho; i++){
    if(array[i] > max){
      max = array[i];
    }
    if(array[i] < min){
      min = array[i];
    }
  }
  minmax[0] = min;
  minmax[1] = max;
  return minmax;
}

int main(){
  int n, minmax[2];

  cout << "Informe o tamanho da array: ";
  cin >> n;
  int array[n];

  randomarray(array, n);
  minmax = minmax(array,  n);
  return 0;
}
