#include <iostream>
using namespace std;

int main(){
  char letras[1000];
  cout << "Digite uma palavra ou frase: ";
  cin.getline(letras);

  for(int i=0; i<strlen(letras); i++){
    if(letras[i]==" "){
      cout << '\n';
    }
    else{
      cout << letras[i];
    }
  }
  
  return 0
}
