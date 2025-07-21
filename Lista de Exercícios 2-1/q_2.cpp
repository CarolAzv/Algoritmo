#include <iostream>
using namespace std;

int soma(int num1, int num2){
  int resultado = num1 + num2;
  return resultado;
}

int main(){
  int num1, num2, result, again;

  cout << "Digite o primerio numero para a soma: ";
  cin >> num1;

  cout << "Digite o segundo numero para a soma: ";
  cin >> num2;

  result = soma(num1, num2);
  cout << '\n' << "Resultado: " << result << '\n';

  cout << "Digite 1 para rodar o programa novamente: ";
  cin >> again;

  if(again==1){
    return main();
  }
  else{
    return 0;
  }
  
}
