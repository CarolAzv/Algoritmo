#include <iostream>
using namespace std;

void troca(int *v1, int *v2){
    int salva;
    salva = *v2;
    *v2 = *v1;
    *v1 =  salva;
}

void imprimir(int v[], int n){
    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }
}

int main(){
    int n;
    int v[n];
    cout << "Quantos numeros tem a array: ";
    cin >> n;
    cout << "Digite os numeros: ";
    cin >> v[0];
    for(int i=1; i<n; i++){
        cout << " ";
        cin >> v[i];
    }

    for(int i=1; i<n; i++){
        int j=i;
        while(j>0 && v[j] < v[j-1]){
            troca(v[j], v[j-1]);
            j = j-1;
        }
    }

    imprimir(v, n);
    return 0;
}
