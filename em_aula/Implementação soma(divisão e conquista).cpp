#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void random_array(int array[], int tamanho){
  srand(time(0));
  for (int i = 0; i < tamanho; ++i){
    array[i] = rand() % 501; 
  }
}

int soma_array(int a[], int primeiro, int ultimo){
    int soma = 0;
    if(primeiro == ultimo){
        soma = a[primeiro];
    }
    else{
        int meio = (primeiro + ultimo) / 2;
        soma = soma_array(a, primeiro, meio) + soma_array(a, meio+1, ultimo);
    }
    return soma;
}

int main(){
    int quantos, sn, size, soma;

    cout << "Digite 1 para gerar uma array aleatoria: ";
    cin >> sn;

    if(sn == 1){
        cout << "Informe o tamanho da array: ";
        cin >> size;
        int lista[size];
        
        random_array(lista, size);
        for(int i=0; i<size; i++){
        cout << lista[i] << " ";
        }

        cout << '\n';
        cout << soma_array(lista, 0, size-1);
    }

    else{
        cout << "Informe o tamanho da array: ";
        cin >> size;
        int lista[size];
        cout << "Informe a array: ";

        for(int i=0; i<size; i++){
            cin >> lista[i];
        }

        cout << soma_array(lista, 0, size-1);
    }
    
    return 0;
}
