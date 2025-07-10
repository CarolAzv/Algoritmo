#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
#include <windows.h>
#include <Psapi.h>
using namespace std;

void tic(int mode=0) {
    static std::chrono::_V2::system_clock::time_point t_start;
    
    if (mode==0)
        t_start = std::chrono::high_resolution_clock::now();
    else {
        auto t_end = std::chrono::high_resolution_clock::now();
        std::cout << "Elapsed time is " << (t_end-t_start).count()*1E-9 << " seconds\n";
    }
}
void toc() { tic(1); }

//random array
void randomArray(int array[], int tamanho){
  srand(time(0));
  for (int i = 0; i < tamanho; ++i){
    array[i] = rand() % 1001; 
  }
}

//bubble sort
void bubbleSort(int array[], int m){
    for (int i = 0; i < m - 1; i++){
        for (int j = 0; j < m - i - 1; j++){
            if (array[j] > array[j + 1]){
                swap(array[j], array[j + 1]);
            }
        }
    }
}

//merge sort
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

void mergeSort(int array[], int left, int right){
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    mergeSort(array, left, mid);
    mergeSort(array, mid + 1, right);
    merge(array, left, mid, right);
}


int main(int argc, char **argv){
  tic()
    int tamanho, qual;
    cout << "----------------------" << '\n';
    cout << "|   Bubble Sort = 1  |" << '\n';
    cout << "|    Merge Sort = 2  |" << '\n';
    cout << "----------------------" << '\n';
    cin >> qual;

    cout << '\n' << "informe o tamanha da array: ";
    cin >> tamanho;
    
    int array[tamanho];
    randomArray(array, tamanho);

    if(qual == 1){
        bubbleSort(array, tamanho);
        for(int i=0; i<tamanho; i++){
            cout << array[i] << " ";
        }
    }

    if(qual == 2){
        mergeSort(array, 0, tamanho - 1);
        for(int i=0; i<tamanho; i++){
            cout << array[i] << " ";
        }
    }
  toc()
  PROCESS_MEMORY_COUNTERS memCounter;
  BOOL result = K32GetProcessMemoryInfo(GetCurrentProcess(), &memCounter, sizeof(memCounter));
  std::cout << "WorkingSetSize " << memCounter.WorkingSetSize << std::endl;
    return 0;
}
