#include <iostream>
using namespace std;

void randomArray(int array[], int tamanho){
    srand(time(0));
    for (int i = 0; i < tamanho; ++i){
        array[i] = rand() % 1001; 
    }
}

int randomNumFromArray(int tamanho, int array[]){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, tamanho);
    int randomNumber = dis(gen);

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
  
    while (i < n1 && j < n2) {
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

void mergeSort(int array[], int left, int right)
{
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
    if(array[meio]==chave){
      return meio;
    }
    if(chave < array[meio]){
      fim = meio-1;
    }
    else if(chave > array[meio]){
      comeco = meio+1;
    }
  }
  return -1;
}


int main(){
    return 0
}
