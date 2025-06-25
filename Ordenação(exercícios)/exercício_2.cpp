#include <iostream>
#include <vector>
using namespace std;

void troca(int v1, int v2){
    int salva;
    salva = v2;
    v2 = v1;
    v1 =  salva;
}

int numrepetidos(int array[], int n){
    vector<int> arrayr;
    int len;
    bool igual=false;
    for(int i=0; i<n; i++){
        for(int a=0; a<n; a++){
            if(array[i]==arrayr[a]){
                igual = true;
            }
        }
        if(igual==false){
            arrayr.push_back(array[i]);
        }
    }
    len = sizeof(arrayr)/sizeof(arrayr[0]);
    return len;
}

void imprimir(int v[], int n){
    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }
}

int main(){
    int n, nrepet;
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
    nrepet = numrepetidos(v, n);
    cout << nrepet << " elemento(s) não repete(m).";
    imprimir(v, n);
    return 0;
}
