#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void merge(int array[], int left, 
                     int mid, int right)
{
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


int main(){
   int array[300], tamanho, temp;
    cout << "informe o tamanha da array: ";
    cin >> tamanho;
    cout << '\n' << "informe a array: ";

    for(int i=0; i<tamanho; i++){
        cin >> temp;
        array[i] = temp;
    }

    mergeSort(array, 0, tamanho - 1);

    for(int i=0; i<tamanho; i++){
        cout << array[i] << " ";
    }
    return 0;
}
