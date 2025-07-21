#include <iostream>
using namespace std;

void randomArray(int array[], int tamanho){
  for (int i = 0; i < tamanho; ++i){
    array[i] = rand() % 10001; 
  }
}

int randomKey(int tamanho, int array){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, tamanho);
    int randomNumber = dis(gen);

  return array[randomNumber];
}

int binarioR(int array[], int comeco, int fim, int chave){
  int meio = comeco + (fim - comeco) / 2;
  
  if (comeco > fim){
    return -1;
  }
  if (array[meio] == chave){
    return meio;
  }
  else if (array[meio] < chave){
    return binarioR(array, chave, meio + 1, fim);
  }
  else{
    return binarioR(array, chave, comeco, meio - 1);
  }
}

int main(){
  int tamanho, chave, resbiR;
  srand(time(0));
  
  cout << "Digit o tamanho do vetor: " << chave << '\n';
  cin >> tamanho;
  int array[tamanho];
  
  randomArray(array, tamanho);
  chave = randomKey(tamanho-1, array);
  
  cout << "A chave áleatoria é: " << chave << '\n';

  mergeSort(array, 0, tamanho - 1);
  for(int i=0; i<tamanho; i++){
        array[i] = array2[i];
    }

  resbiR = binarioR(array2, 0, tamanho-1, chave);
  cout << "Resultado da busca Binaria Recursiva: " << resbiR;

  return 0;
}
