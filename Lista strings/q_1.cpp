#include <iostream>
using namespace std;

void divisor(char letras[], char vogais[], char consoantes[]){
  for(int b = 0; b<strlen(letras)-1; b++){
    if(letras[b]==a || letras[b]==e || letras[b]==i || letras[b]==o || letras[b]==u){
      vogais.push_back(letras[b]);
    }
    else{
      consoantes.push_back(letras[b]);
    }
  }
}

int main(){
  char letras[1000], vogais[1000], consoantes[1000];
  cout << "Digite uma palavra ou frase: ";
  cin >> letras;

  divisor(letras, vogais, consoantes);

  for(int i=0; i<strlen(vogais)-1; i++){
    cout << vogais[i] << " ";
  }
  for(int g=0; g<strlen(consoantes)-1; g++){
    cout << consoantes[g] << " ";
  }

  return 0;
}
