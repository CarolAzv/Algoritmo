#include <iostream>
using namespace std;

void randomArray(int array[], int tamanho){
  srand(time(0));
  for (int i = 0; i < tamanho; ++i){
    array[i] = rand() % 1001; 
  }
}

void minmax(int array[],  int tamanho, int min, int max, int mm[]){
  for(int i = 0; i<tamanho; i++){
    if(array[i] > mm[1]){
      mm[1] = array[i];
    }
    if(array[i] < mm[0]){
      mm[0] = array[i];
    }
  }
}

int main(){
  int n, mm[2];

  cout << "Informe o tamanho da array: ";
  cin >> n;
  int array[n];

  randomArray(array, n);
  mm[0] = array[0];
  mm[1] = array[0];
  minmax(array,  n, array[0], array[0], mm);

  for (int i=0; i < n; ++i){
    cout<< array[i] << " ";
  }

  cout << '\n' << mm[0] << " " << mm[1];
  return 0;
}
