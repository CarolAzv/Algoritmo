#include <iostream>
#include <vector>
using namespace std;

void randomArray(int array[], int tamanho){
    srand(time(0));
    int oque = tamanho+(tamanho/2);
    for (int i = 0; i < tamanho; ++i){
        array[i] = rand() % oque; 
    }
}

int randomNumFromArray(int tamanho, int array[]){
    srand(time(0));
    int randomNumber = rand() % tamanho; 
    return array[randomNumber];
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
        if (L[i] <= R[j]) {
            array[k] = L[i];
            i++;
        }
        else {
            array[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1){
        array[k] = L[i];
        i++;
        k++;
    }
    while (j < n2){
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


int binarioI(int array[], int tamanho, int want){
  int meio, comeco=0, fim=tamanho-1;
  while(comeco<=fim){
    meio = comeco+(fim-comeco)/2;
    if(array[meio]==want){
      return meio;
    }
    if(want < array[meio]){
      fim = meio-1;
    }
    else if(want > array[meio]){
      comeco = meio+1;
    }
  }
  return -1;
}


int main(){
    int n, resultI, tocheck;
    cout << "Informe o tamanho da lista: "; // << "\n";
    cin >> n;
    int array[n];

    randomArray(array, n);
    tocheck = randomNumFromArray(n, array);
    mergeSort(array, 0, n-1);
    resultI = binarioI(array,  n, tocheck);

    cout << '\n' << "numero a procurar: " << tocheck << '\n';
    for(int i=0; i<n; i++){
        cout << array[i] << ", ";
    }
    cout << '\n';

    cout << '\n' << "Resultado da busca Bináia Iterativa: " << resultI;
  
    return 0;
}
