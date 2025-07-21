#include <iostream>
using namespace std;

int somar(int n, int soma){
  if(n==0){
    return soma;
  }
  else{
    soma = soma + n;
    return somar(n-1, soma);
  }
}

int main(){
  int n, res;

  cout << "Digite até qual numero você quer somar: ";
  cin >> n;

  res = somar(n, 0);
  cout << '\n' << "Resultado: " << res;
  return 0;
}
