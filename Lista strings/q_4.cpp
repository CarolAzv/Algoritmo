#include <iostream>
#include <cstring>
using namespace std;

void contador(char letras[], int alfabeto[]){
    char check[27]="abcdefghijklmnopqrstuvwxyz";
    char CHECK[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i=0; i<strlen(letras); i++){
        if(letras[i]==check[0] || letras[i]==CHECK[0]){
            alfabeto[0]++;}
        else if(letras[i]==check[1] || letras[i]==CHECK[1]){
            alfabeto[1]++;}
        else if(letras[i]==check[2] || letras[i]==CHECK[2]){
            alfabeto[2]++;}
        else if(letras[i]==check[3] || letras[i]==CHECK[3]){
            alfabeto[3]++;}
        else if(letras[i]==check[4] || letras[i]==CHECK[4]){
            alfabeto[4]++;}
        else if(letras[i]==check[5] || letras[i]==CHECK[5]){
            alfabeto[5]++;}
        else if(letras[i]==check[6] || letras[i]==CHECK[6]){
            alfabeto[6]++;}
        else if(letras[i]==check[7] || letras[i]==CHECK[7]){
            alfabeto[7]++;}
        else if(letras[8]==check[0] || letras[i]==CHECK[9]){
            alfabeto[8]++;}
        else if(letras[9]==check[0] || letras[i]==CHECK[9]){
            alfabeto[9]++;}
        else if(letras[i]==check[10] || letras[i]==CHECK[10]){
            alfabeto[10]++;}
        else if(letras[i]==check[11] || letras[i]==CHECK[11]){
            alfabeto[11]++;}
        else if(letras[i]==check[12] || letras[i]==CHECK[12]){
            alfabeto[12]++;}
        else if(letras[i]==check[13] || letras[i]==CHECK[13]){
            alfabeto[13]++;}
        else if(letras[i]==check[14] || letras[i]==CHECK[14]){
            alfabeto[14]++;}
        else if(letras[i]==check[15] || letras[i]==CHECK[15]){
            alfabeto[15]++;}
        else if(letras[i]==check[16] || letras[i]==CHECK[16]){
            alfabeto[16]++;}
        else if(letras[i]==check[17] || letras[i]==CHECK[17]){
            alfabeto[17]++;}
        else if(letras[i]==check[18] || letras[i]==CHECK[18]){
            alfabeto[18]++;}
        else if(letras[i]==check[19] || letras[i]==CHECK[19]){
            alfabeto[19]++;}
        else if(letras[i]==check[20] || letras[i]==CHECK[20]){
            alfabeto[20]++;}
        else if(letras[i]==check[21] || letras[i]==CHECK[21]){
            alfabeto[21]++;}
        else if(letras[i]==check[22] || letras[i]==CHECK[22]){
            alfabeto[22]++;}
        else if(letras[i]==check[23] || letras[i]==CHECK[23]){
            alfabeto[23]++;}
        else if(letras[i]==check[24] || letras[i]==CHECK[24]){
            alfabeto[24]++;}
        else if(letras[i]==check[25] || letras[i]==CHECK[25]){
            alfabeto[25]++;}
    }
}

int main(){
  char letras[1000];
  int alfabeto[26];
  for(int i=0;i<26;i++){
    alfabeto[i]=0;
  }
  cout << "Digite uma palavra ou frase: ";
  cin >> letras;

  contador(letras, alfabeto);

  cout << '\n';
  cout << "|---------------------" << '\n';
  cout << "| A = " << alfabeto[0] << '\n';
  cout << "| B = " << alfabeto[1] << '\n';
  cout << "| C = " << alfabeto[2] << '\n';
  cout << "| D = " << alfabeto[3] << '\n';
  cout << "| E = " << alfabeto[4] << '\n';
  cout << "| F = " << alfabeto[5] << '\n';
  cout << "| G = " << alfabeto[6] << '\n';
  cout << "| H = " << alfabeto[7] << '\n';
  cout << "| I = " << alfabeto[8] << '\n';
  cout << "| J = " << alfabeto[9] << '\n';
  cout << "| K = " << alfabeto[10] << '\n';
  cout << "| L = " << alfabeto[11] << '\n';
  cout << "| M = " << alfabeto[12] << '\n';
  cout << "| N = " << alfabeto[13] << '\n';
  cout << "| O = " << alfabeto[14] << '\n';
  cout << "| P = " << alfabeto[15] << '\n';
  cout << "| Q = " << alfabeto[16] << '\n';
  cout << "| R = " << alfabeto[17] << '\n';
  cout << "| S = " << alfabeto[18] << '\n';
  cout << "| T = " << alfabeto[19] << '\n';
  cout << "| U = " << alfabeto[20] << '\n';
  cout << "| V = " << alfabeto[21] << '\n';
  cout << "| W = " << alfabeto[22] << '\n';
  cout << "| X = " << alfabeto[23] << '\n';
  cout << "| Y = " << alfabeto[24] << '\n';
  cout << "| Z = " << alfabeto[25] << '\n';
  cout << "|---------------------" << '\n';

  return 0;
}
