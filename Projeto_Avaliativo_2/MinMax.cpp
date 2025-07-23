#include <iostream>
using namespace std;

void randomArray(int array[], int tamanho){
  srand(time(0));
  for (int i = 0; i < tamanho; ++i){
    array[i] = rand() % 1001; 
  }
}

void minmaxI(int array[],  int tamanho, int mmI[]){
  for(int i = 0; i<tamanho; i++){
    if(array[i] > mmI[1]){
      mmI[1] = array[i];
    }
    if(array[i] < mmI[0]){
      mmI[0] = array[i];
    }
  }
}

void minmaxR(int array[],  int tamanho, int mmR[], int i){
  cout << array[i] << " ";
  if(array[i] > mmR[1]){
    mmR[1] = array[i];
  }
  if(array[i] < mmR[0]){
     mmR[0] = array[i];
  }
  if(i!=tamanho){
    minmaxR(array, tamanho, mmR, i+1);
  }
}

int main(){
  int n, mmI[2], mmR[2];

  cout << "Informe o tamanho da array: ";
  cin >> n;
  int array[n];

  randomArray(array, n);
  mmI[0] = array[0];
  mmI[1] = array[0];
  mmR[0] = array[0];
  mmR[1] = array[0];
  minmaxI(array,  n, mmI);
  minmaxR(array, n-1, mmR, 0);

  cout << '\n';
  for (int i=0; i < n; ++i){
    cout<< array[i] << " ";
  }

  cout << '\n' << mmI[0] << " " << mmI[1];
  cout << '\n' << mmR[0] << " " << mmR[1];
  return 0;
}
