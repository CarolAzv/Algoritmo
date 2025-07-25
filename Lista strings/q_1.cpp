#include <iostream>
#include <cstring>
using namespace std;

void divisor(char letras[], char vogais[], char consoantes[]){
    for(int b=0; b<strlen(letras)-1; b++){
        char temp[2];
        temp[0] = letras[b];
        temp[1] = '\0';
        if(letras[b]==char("a") || letras[b]==char("e") || letras[b]==char("i") || letras[b]==char("o") || letras[b]==char("u")){
            strcat(vogais, temp);
        }
        else{
            strcat(consoantes, temp);
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
