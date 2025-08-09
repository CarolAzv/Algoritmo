#include <iostream>
using namespace std;

void tic(int mode=0) {
    static std::chrono::_V2::system_clock::time_point t_start;
    
    if (mode==0)
        t_start = std::chrono::high_resolution_clock::now();
    else {
        auto t_end = std::chrono::high_resolution_clock::now();
        std::cout << "Tempo:  " << (t_end-t_start).count()*1E-9 << " secundos";
    }
}
void toc() { tic(1); }


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

int linearI(int array[], int tamanho, int want){
    for(int i=0; i<tamanho; i++){
        if(array[i]==want){
            return i;
        }
    }
    return -1;
}

int linearR(int array[], int tamanho, int want){
    if(array[tamanho-1]==want){
        return tamanho-1;
    }
    else if(tamanho-1==0){
        return -1;
    }
    return linearR(array, tamanho-1, want);
}

int main(){
    int n, resultI, tocheck, resultR resultRI;
    cout << "Informe o tamanho da lista: "; // << "\n";
    cin >> n;
    int array[n];

    randomArray(array, n);
    int see = randomNumFromArray(n, array);
    tocheck = randomNumFromArray(see, array);
    
    resultI = linearI(array,  n, tocheck);
    
    resultR = linearR(array,  n, tocheck);

    cout << '\n' << "numero a procurar: " << tocheck << '\n';
    for(int i=0; i<n; i++){
        cout << array[i] << ", ";
    }
    cout << '\n';
    cout << '\n' << "Resultado da busca Linear Iterativa: " << resultI;
    cout << '\n' << "Resultado da busca Linear Recursiva: " << resultI;


    randomArray(array, n);
    tocheck = randomNumFromArray(n, array);
    mergeSort(array, 0, n-1);
    resultRI = binarioI(array,  n, tocheck);

    cout << '\n' << "numero a procurar: " << tocheck << '\n';
    for(int i=0; i<n; i++){
        cout << array[i] << ", ";
    }
    cout << '\n';

    cout << '\n' << "Resultado da busca Bináia Iterativa: " << resultRI;
  
    return 0;
}
