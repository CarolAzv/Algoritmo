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

void randomArray(int array[], int tamanho){
  srand(time(0));
  for (int i = 0; i < tamanho; ++i){
    array[i] = rand() % 1001; 
  }
}

void minmaxI(int array[],  int tamanho, int mmI[]){
  for(int i = 0; i<tamanho; i++){
    if(array[i] > mmI[1]){
      mmI[1] = array[i];
    }
    if(array[i] < mmI[0]){
      mmI[0] = array[i];
    }
  }
}

void minmaxR(int array[],  int tamanho, int mmR[], int i){
  if(array[i] > mmR[1]){
    mmR[1] = array[i];
  }
  if(array[i] < mmR[0]){
     mmR[0] = array[i];
  }
  if(i!=tamanho){
    minmaxR(array, tamanho, mmR, i+1);
  }
}

int main(){
  int tamanho, num, mmI[2], mmR[2];
  long long fibo;

  cout << "Informe o tamanho da array: ";
  cin >> tamanho;
  int array[tamanho];

  randomArray(array, n);
  mmI[0] = array[0];
  mmI[1] = array[0];
  mmR[0] = array[0];
  mmR[1] = array[0];
  minmaxI(array,  tamanho, mmI);
  minmaxR(array, tamanho, mmR, 1);

  for(i)aaaaaaaaaaa

  cout << "Informe o numero de fibonacci desejado: ";
  cin >> num;

  fibo = fibonacciI(num, 0, 1, 0);
  cout << '\n' << fibo;

  fibo = fibonacciR(num, 0, 1, 0);
  cout << '\n' << fibo;
  
  return 0;
}
