#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void randomarray(int array[], tamanho){
  srand(time(0));
  
  int randomNum = rand() % 1001;

  for(int i=0; i<tamanho; i++){
        cin >> randomNum;
        array[i] = randomNum;
    }
}

int main(){
  int tamanho, array[300];

  cout << "Digite o tamanho da array: ";
  cin >> tamanho

  randomarray(array, tamanho);

  for(int i=0; i<tamanho; i++){
        cout << array[i] << " ";
    }

  return 0;
}
