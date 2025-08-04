#include <iostream>
using namespace std;

void randomArray(int array[], int tamanho){
  srand(time(0));
  for (int i = 0; i < tamanho; ++i){
    array[i] = rand() % 1001; 
  }
}

int linear(int array[], int n, int want){
  for(int i=0; i<n; i++){
    if(array[i]==want){
      return i;
    }
  }
  return -1;
}

int main(){
    int n, result, tocheck;
    cout << "Informe o tamanho da lista: "; // << "\n";
    cin >> n;
    int array[n];

    randomArray(array, n);
    tocheck = ;
    result = linear(array,  n, want);
  
    return 0;
}
