#include <iostream>
using namespace std;
//exercício 2

void troca(int *v1, int *v2){
    int salva;
    salva = *v2;
    *v2 = *v1;
    *v1 =  salva;
}

void numrepetidos(int array, int n){
    int arrayr;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            a
        }
    }
}

void imprimir(int lista, int n){
    for(int i=0; i<n; i++){
        cout << lista[i] << " ";
    }
}

int main(){
    int n, v;
    cout << "Quantos numeros tem a array: ";
    cin >> n;
    cout << "Digite os numeros: ";
    for(int i=1; i<n; i++){
        cin >> v;
    }

    for(int i=1; i<n; i++){
        int j = i;
        while(j>0 && v[j] < v[j-1]){
            troca(v[j], v[j-1]);
            j = j-1;
        }
    }

    imprimir(v, n);
    return 0;
}
