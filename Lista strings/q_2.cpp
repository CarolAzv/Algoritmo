#include <iostream>
#include <cstring>

using namespace std;

int main(){
  char letras[1000], space[4]="a b";
  cout << "Digite uma palavra ou frase: ";
  cin.getline(letras, 1000);

  for(int i=0; i<strlen(letras); i++){
    if(letras[i]==space[1]){
      cout << '\n';
    }
    else{
      cout << letras[i];
    }
  }
  
  return 0;
}
