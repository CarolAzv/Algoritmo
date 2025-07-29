#include <iostream>
#include <cstring>
using namespace std;

int palindromo(char letras[]){
    int tamanho = strlen(letras), check=0;
    int metade = (tamanho)/2;

    for(int i=0; i<metade; i++){
        if(letras[i] != letras[(tamanho-1)-i]){
            check++;
        }
    }

    if(check==0){
        return 1;
    }
    else{
        return 2;
    }
}

int main(){
  char letras[1000];
  int vf;
  cout << "Digite uma palavra ou frase: ";
  cin >> letras;

  vf = palindromo(letras);
  
  if(vf==1){
    cout << '\n' << "Verdadeiro";
  }
  else if(vf==2){
    cout << '\n' << "Falso";
  }
  
  return 0;
}
