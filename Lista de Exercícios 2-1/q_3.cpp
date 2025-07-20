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
  long long ;
  for(int i = 1; i<a; i++){
    
  }
}

int main(){}
