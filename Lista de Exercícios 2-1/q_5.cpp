#include <iostream>
using namespace std;

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
  return 0;
}
