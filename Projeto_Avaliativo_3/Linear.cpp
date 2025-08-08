#include <iostream>
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
    int n, resultI, tocheck, resultR;
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
  
    return 0;
}
