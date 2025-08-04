#include <iostream>
using namespace std;

void randomArray(int array[], int tamanho){
  srand(time(0));
  for (int i = 0; i < tamanho; ++i){
    array[i] = rand() % 1001; 
  }
}

int main(){
    int n;
    cout << "Informe o tamanho da lista: "; // << "\n";
    cin >> n;
    
    return 0;
}
