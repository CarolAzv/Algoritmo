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

int randomnum(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 10000);
    long long randomNumber = dis(gen);

  return randomNumber;
}

int linear(int array[], int tamanho, int chave){
  for(i = 0; i<tamanho; i++){
    if(array[i] == chave){
      return i;
    }
  }
  return -1;
}

int binario(int array[], int comeco, int fim, int chave){
  int meio = (comeco+fim)/2;
  if(array[meio] == chave){
    return chave;
  }
  if(chave < meio){
    binario(array, comeco,  meio-1, chave)
  }
  if(chave > meio){
    binario(array, meio+1,  fim, chave)
  }
}

int main(){
  int tamanho = 10000, array[10000], chave;
  chave = randomnum();

  cout << "A chave áleatoria é: " << chave << '\n';

  linear(array, tamanho, chave);

  randomArray(array, tamanho);
  binario(array, 0, tamanho-1, chave);

  return 0;
}
