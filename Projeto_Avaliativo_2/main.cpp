#include <iostream>
#include <chrono>
using namespace std;

void tic(int mode=0) {
    static std::chrono::_V2::system_clock::time_point t_start;
    
    if (mode==0)
        t_start = std::chrono::high_resolution_clock::now();
    else {
        auto t_end = std::chrono::high_resolution_clock::now();
        std::cout << "Elapsed time is " << (t_end-t_start).count()*1E-9 << " seconds\n";
    }
}
void toc() { tic(1); }

//gerador de array aleatoria
void randomArray(int array[], int tamanho){
  srand(time(0));
  for (int i = 0; i < tamanho; ++i){
    array[i] = rand() % 1001; 
  }
}

// função fibonacci Recursiva
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

// função fibonacci Interativa
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

// função Min/Max Interativa
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

// função Min/Max Recursiva
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
  int sn;
  int tamanho, num, mmI[2], mmR[2];
  long long fiboI, fiboR;

  cout << " Fazer uma análise do algoritmo desempenho? SIM=1 NAO!=1 ";
  cin >> sn;

  if(sn==1){}

  else{
      int qual, ver;
      cout << '\n';
      cout << "|-----------------------------|" << '\n';
      cout << "| Algoritmo de fibonacci    1 |" << '\n';
      cout << "| Algoritmo de Min/Max      2 |" << '\n';
      cout << "|-----------------------------|" << '\n';
      cin >> qual;

      if(qual==1){
          cout << '\n';
          cout << "|------------------------|" << '\n';
          cout << "| Verção Interativa    1 |" << '\n';
          cout << "| Verção Recursiva     2 |" << '\n';
          cout << "|------------------------|" << '\n';
          cin >> ver;
          int num;
          cout << '\n' << "Informe o número de fibonacci desejado: ";
          cin >> num;
          
          if(ver==1){
              long long fiboI;
              fiboI = fibonacciI(num, 0, 1, 0);
              cout << "Número de Fibonacci Interativo: " << '\n' << fiboI;
          }
          else{
              long long fiboR;
              fiboR = fibonacciR(num, 0, 1, 0);
              cout << "Número de Fibonacci Recursivo: " << '\n' << fiboR;
          } 
      }

      else{
          cout << '\n';
          cout << "|------------------------|" << '\n';
          cout << "| Verção Interativa    1 |" << '\n';
          cout << "| Verção Recursiva     2 |" << '\n';
          cout << "|------------------------|" << '\n';
          cin >> ver;
          int tamanho;
          cout << '\n' << "Informe o tamanho da array: ";
          cin >> tamanho;
          int array[tamanho];
          randomArray(array, tamanho);

          if(ver==1){
              int mmI[2];
              mmI[0] = array[0]; //menor número Interativo
              mmI[1] = array[0]; //maior número Interativo
              minmaxI(array,  tamanho, mmI);
              cout << '\n' << "Menor número Interativo: "<< mmI[0] << "Maior número Interativo: " << mmI[1];
          }
          else{
              int mmR[2];
              mmR[0] = array[0]; //menor número Recursivo
              mmR[1] = array[0]; //maior número Recursivo
              minmaxR(array, tamanho-1, mmR, 0);
              cout << '\n' << "Menor número Recursivo: " << mmR[0] << "Maior número Recursivo: " << mmR[1];
          }
      }
  }

  cout << "Informe o número de fibonacci desejado: ";
  cin >> num;

  cout << "Informe o tamanho da array: ";
  cin >> tamanho;
  int array[tamanho];
  randomArray(array, tamanho);

  
  tic();
  fiboI = fibonacciI(num, 0, 1, 0);
  toc();
  cout << "Número de fibonacci Interativo: " << '\n' << fiboI;
  tic();
  fiboR = fibonacciR(num, 0, 1, 0);
  toc();
  cout << "Número de fibonacci Recursivo: " << '\n' << fiboR;


  tic();
  mmI[0] = array[0]; //menor número Interativo
  mmI[1] = array[0]; //maior número Interativo
  minmaxI(array,  tamanho, mmI);
  toc();
  cout << '\n' << "Menor número Interativo: "<< mmI[0] << "Maior número Interativo: " << mmI[1];

  tic();
  mmR[0] = array[0]; //menor número Recursivo
  mmR[1] = array[0]; //maior número Recursivo
  minmaxR(array, tamanho-1, mmR, 0);
  toc();
  cout << '\n' << "Menor número Recursivo: " << mmR[0] << "Maior número Recursivo: " << mmR[1];
  
  return 0;
}
