#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

//bubble sort
void bubbleSort(vector<int>& v) {
    int n = v.size();

    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (v[j] > v[j + 1])
                swap(v[j], v[j + 1]);
        }
    }
}

//merge sort
void merge(vector<int>& arr, int left, 
                     int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int left, int right)
{
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}


int main(){
    int array[300], tamanho, qual;
    cout << "----------------------" << '\n';
    cout << "|   Bubble Sort = 1  |" << '\n';
    cout << "|    Merge Sort = 2  |" << '\n';
    cout << "----------------------" << '\n';
    cin >> qual

    cout << '\n' << "informe o tamanha da array: ";
    cin >> tamanho;
    cout << '\n' << "informe a array: ";

    for(int i=0; i< tamanho; i++){
        getline(cin, array[i]);
    }

    if(qual == 1){
        bubbleSort(array);
        for(int i=0; i<tamanho; i++){
        cout << array[i] << " ";
        }
    }

    if(qual == 2){
        mergeSort(arr, 0, n - 1)
        for(int i=0; i<tamanho; i++){
        cout << array[i] << " ";
        }
    }

    return 0;
}