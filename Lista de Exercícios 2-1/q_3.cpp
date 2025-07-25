#include <iostream>
using namespace std;

long long fibonacci(int n, int a, int b, int check){
  long long fib;
  check++;
  fib = a + b;
  a = b;
  b = fib;
  if(n == 1){
    return 1;
  }
  if(n == check){
    return a;
  }
  else{
    return fibonacci(n, a, b, check);
  }
}

long long fatorial(int a){
  long long result = a;
  for(int i = 1; i<a; i++){
    result = result * i;
  }
  return result;
}

int main(){
  int qual, n;
  
  cout << "|-----------------|" << '\n';
  cout << "|  1 - fibonacci  |" << '\n';
  cout << "|  2 - fatorial   |" << '\n';
  cout << "|-----------------|" << '\n';
  cin >> qual;

  if(qual==1){
    long long fibo;
    cout << "Informe o numero de fibonacci desejado: ";
    cin >> n;

    fibo = fibonacci(n, 0, 1, 0);
    cout << '\n' << fibo;
  }

  else{
    long long total;
    cout << "Informa seu numero fatorial: ";
    cin >> n;

    total = fatorial(n);
    cout << '\n' << total;
  }
  
  return 0;
}
