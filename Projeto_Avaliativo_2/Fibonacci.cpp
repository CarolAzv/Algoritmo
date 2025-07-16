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

int main(){
  int n;
  long long fibo;

  cout << "Informe o numero de fibonacci desejado: ";
  cin >> n;

  fibo = fibonacci(n, 0, 1, 0);
  cout << '\n' << fibo;
  
  return 0;
}
