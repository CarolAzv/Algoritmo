#include <iostream>
using namespace std;

long long fibonacciR(int n, int a, int b, int check){
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
    return fibonacciR(n, a, b, check);
  }
}

long long fibonacciI(int n, int a, int b, int check){
  long long fib;
  while(check<n){
    check++;
    fib = a + b;
    a = b;
    b = fib;
  }
  return a;
}

int main(){
  int n;
  long long fibo;

  cout << "Informe o numero de fibonacci desejado: ";
  cin >> n;

  fibo = fibonacciI(n, 0, 1, 0);
  cout << '\n' << fibo;

  fibo = fibonacciR(n, 0, 1, 0);
  cout << '\n' << fibo;
  
  return 0;
}
