#include <iostream>
using namespace std;

void bubbleSort(int a[], int m){
    for (int i = 0; i < m - 1; i++){
        for (int j = 0; j < m - i - 1; j++){
            if (a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
            }
        }
    }
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

    bubbleSort(array, tamanho);
    for(int i=0; i<tamanho; i++){
        cout << array[i] << " ";
    }
    return 0;
}
