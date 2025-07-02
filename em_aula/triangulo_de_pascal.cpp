#include <iostream>
using namespace std;

int fatorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n * fatorial(n - 1);
    }
}

int termo(int i, int j){
    return fatorial(i)/(fatorial(i-j)*fatorial(j));
}

void imprimeTriPascal(int l){
    int linha = 1, coluna = 0, maxc = 1;
    cout << 1;
    cout << '\n';
    while(linha < l+1){
        coluna = 0;
        while(coluna < maxc+1){
            cout << termo(linha, coluna);
            coluna++;
        }
        cout << '\n';
        maxc++;
        linha++;
    }
}

int main () {
    int nlinhas;
    cin >> nlinhas;
    imprimeTriPascal(nlinhas);
    return 0;
}
