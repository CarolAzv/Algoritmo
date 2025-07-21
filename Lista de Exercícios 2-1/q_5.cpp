#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void randomArray(int array[], int tamanho){
  for (int i = 0; i < tamanho; ++i){
    array[i] = rand() % 10001; 
  }
}

int randomKey(int tamanho){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, tamanho);
    int randomNumber = dis(gen);

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

    while(i < n1 && j < n2){
        if (L[i] <= R[j]) {
            array[k] = L[i];
            i++;
        }
        else{
            array[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        array[k] = L[i];
        i++;
        k++;
    }
    while(j < n2){
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

int binarioR(int array[], int comeco, int fim, int chave){
  int meio = comeco + fim/ 2;

  if (comeco > fim){
    return -1;
  }
  if (array[meio] == chave){
    return meio;
  }
  else if (array[meio] < chave){
    return binarioR(array, meio + 1, fim, chave);
  }
  else{
    return binarioR(array, comeco, meio - 1, chave);
  }
}

int main(){
  int tamanho, chave, resbiR, check;
  srand(time(0));
  
  cout << "Digit o tamanho do vetor: " << '\n';
  cin >> tamanho;
  int array[tamanho];
  
  randomArray(array, tamanho);
  chave = randomKey(tamanho-1);
  chave = array[chave];
  

  mergeSort(array, 0, tamanho - 1);

  resbiR = binarioR(array, 0, tamanho, chave);
  cout << "Resultado da busca Binaria Recursiva: " << resbiR;

  cout << "1 Para checkar resultado: ";
  cin >> check;

  if(check==1){
    cout << "A chave áleatoria é: " << chave << '\n';
    cout << '\n';
    for(int i=0; i<tamanho; i++){
      cout << array[i] << " ";
    }
  }
  
  return 0;
}
