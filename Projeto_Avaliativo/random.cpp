#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void randomArray(int array[], int tamanho){
  srand(time(0));
  for (int i = 0; i < tamanho; ++i){
    array[i] = rand() % 1001; 
  }
}

int randomNum(int tamanho){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, tamanho);
    int randomNumber = dis(gen);

    return randomNumber;
}

int main(){
  int tamanho, array[300];

  cout << "Digite o tamanho da array: ";
  cin >> tamanho;

  randomArray(array, tamanho);

  for(int i=0; i<tamanho; i++){
        cout << array[i] << " ";
    }

  return 0;
}


