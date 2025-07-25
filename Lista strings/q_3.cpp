#include <iostream>
using namespace std;

str palindromo(char letras[]){
  int tamanho = strlen(letras)-1, check=0;
  int metade = tamanho/2
  char div1[metade], div2[metade];

  for(int i=0; i<metade; i++){
    if(div1[i] != div2[metade-i-1]){
      check++
    }
  }

  if(check==0){
    return "Verdadeiro";
  }
  else{
    return "Falso";
  }
}

int main(){
  char letras[1000];
  str vf;
  cout << "Digite uma palavra ou frase: ";
  cin >> letras;

  vf = palindromo(letras);
  cout << '\n' << vf;
  
  return 0
}
