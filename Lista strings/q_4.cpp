#include <iostream>
using namespace std;

void contador(char letras[], int alfabeto[]){
  for(int i; i<strlen(letras); i++){
    if(letras[i]=="a" || letras[i]=="A"){
      alfabeto[0] = alfabeto[0]+1}
    else if(letras[i]=="b" || letras[i]=="B"){
      alfabeto[1] = alfabeto[1]+1}
    else if(letras[i]=="c" || letras[i]=="C"){
      alfabeto[2] = alfabeto[2]+1}
    else if(letras[i]=="d" || letras[i]=="D"){
      alfabeto[3] = alfabeto[3]+1}
    else if(letras[i]=="e" || letras[i]=="E"){
      alfabeto[4] = alfabeto[4]+1}
    else if(letras[i]=="f" || letras[i]=="F"){
      alfabeto[5] = alfabeto[5]+1}
    else if(letras[i]=="g" || letras[i]=="G"){
      alfabeto[6] = alfabeto[6]+1}
    else if(letras[i]=="h" || letras[i]=="H"){
      alfabeto[7] = alfabeto[7]+1}
    else if(letras[i]=="i" || letras[i]=="I"){
      alfabeto[8] = alfabeto[8]+1}
    else if(letras[i]=="j" || letras[i]=="J"){
      alfabeto[9] = alfabeto[9]+1}
    else if(letras[i]=="k" || letras[i]=="K"){
      alfabeto[10] = alfabeto[10]+1}
    else if(letras[i]=="l" || letras[i]=="L"){
      alfabeto[11] = alfabeto[11]+1}
    else if(letras[i]=="m" || letras[i]=="M"){
      alfabeto[12] = alfabeto[12]+1}
    else if(letras[i]=="n" || letras[i]=="N"){
      alfabeto[13] = alfabeto[13]+1}
    else if(letras[i]=="o" || letras[i]=="O"){
      alfabeto[14] = alfabeto[14]+1}
    else if(letras[i]=="p" || letras[i]=="P"){
      alfabeto[15] = alfabeto[15]+1}
    else if(letras[i]=="q" || letras[i]=="Q"){
      alfabeto[16] = alfabeto[16]+1}
    else if(letras[i]=="r" || letras[i]=="R"){
      alfabeto[17] = alfabeto[17]+1}
    else if(letras[i]=="s" || letras[i]=="S"){
      alfabeto[18] = alfabeto[18]+1}
    else if(letras[i]=="t" || letras[i]=="T"){
      alfabeto[19] = alfabeto[19]+1}
    else if(letras[i]=="u" || letras[i]=="U"){
      alfabeto[20] = alfabeto[20]+1}
    else if(letras[i]=="v" || letras[i]=="V"){
      alfabeto[21] = alfabeto[21]+1}
    else if(letras[i]=="w" || letras[i]=="W"){
      alfabeto[22] = alfabeto[22]+1}
    else if(letras[i]=="x" || letras[i]=="X"){
      alfabeto[23] = alfabeto[23]+1}
    else if(letras[i]=="y" || letras[i]=="Y"){
      alfabeto[24] = alfabeto[24]+1}
    else if(letras[i]=="z" || letras[i]=="Z"){
      alfabeto[25] = alfabeto[25]+1}
  }
}

int main(){
  char letras[1000];
  int alfabeto[26];
  cout << "Digite uma palavra ou frase: ";
  cin >> letras;

  contador(letras, alfabeto);

  cout << '\n';
  cout << "|--------------------"; << '\n';
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
  cout << "|--------------------"; << '\n';

  return 0;
}
