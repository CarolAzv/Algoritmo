#include <iostream>
#include <bits/stdc++.h>
#include <random>
using namespace std;

void randomArray(int array[], int tamanho){
  srand(time(0));
  for (int i = 0; i < tamanho; ++i){
    array[i] = rand() % 10001; 
  }
}

int randomnum(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 10000);
    long long randomNumber = dis(gen);

  return randomNumber;
}

void merge(int array[], int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;
    vector<int> L(n1), R(n2);
    for (int i = 0; i < n1; i++)
        L[i] = array[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = array[mid + 1 + j];
    int i = 0, j = 0;
    int k = left;
    while (i < n1 && j < n2){
        if (L[i] <= R[j]){
            array[k] = L[i];
            i++;
        }
        else {
            array[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        array[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        array[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int array[], int left, int right){
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    mergeSort(array, left, mid);
    mergeSort(array, mid + 1, right);
    merge(array, left, mid, right);
}

int linear(int array[], int tamanho, int chave){
  for(int i = 0; i<tamanho; i++){
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
  return -1;
}

int main(){
  int tamanho = 10000, array[10000], chave, resli, resbi;
  chave = randomnum();
  randomArray(array, tamanho);

  cout << "A chave áleatoria é: " << chave << '\n';

  resli = linear(array, tamanho, chave);
  cout << "Resultado da busca linear: " << resli << '\n';

  mergeSort(array, 0, tamanho-1);
  cout << "sort done";
  resbi = binario(array, 0, tamanho-1, chave);
  cout << "Resultado da busca binaria: " << resbi;

  return 0;
}
