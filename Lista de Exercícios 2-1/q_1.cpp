#include <iostream>
using namespace std;

int somar(int n, int fim, int check){
  if(n==check){
    return fim
  }
  else{
    fim = fim + check;
    check++;
    return somar(n, fim, check);
  }
}

int main(){
  int n, res;

  cout << "Digite até qual numero você quer somar: ";
  cin >> n;

  res = somar(n, 0, 0);
  cout << '\n' << "Resultado: " << res;
  return 0;
}
