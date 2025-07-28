#include <iostream>
#include <cstring>
using namespace std;

void divisor(char letras[], char vogais[], char consoantes[]){
    char vogais[6]= "aeiou";
    for(int b=0; b<strlen(letras)-1; b++){
        char temp[2];
        temp[0] = letras[b];
        temp[1] = '\0';
        if(letras[b]==vogais[0] || letras[b]==vogais[1] || letras[b]==vogais[2] || letras[b]==vogais[3] || letras[b]==vogais[4]){
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
