#include <iostream>
#include <chrono>
using namespace std;

void tic(int mode=0) {
    static std::chrono::_V2::system_clock::time_point t_start;
    
    if (mode==0)
        t_start = std::chrono::high_resolution_clock::now();
    else {
        auto t_end = std::chrono::high_resolution_clock::now();
        std::cout << "Tempo:  " << (t_end-t_start).count()*1E-9 << " secundos";
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

  cout << "|--------------------------------------------|" << '\n';
  cout << "| Fazer uma análise do algoritmo desempenho? |" << '\n';
  cout << "|             SIM = 1    NAO != 1            |" << '\n';
  cout << "|--------------------------------------------|" << '\n';
  cin >> sn;

  if(sn==1){
      int tamanho1, tamanho2, tamanho3, tamanho4, tamanho5
      int num1, num2, num3, num4, num5, 
      int mmI1[2], mmI2[2], mmI3[2], mmI4[2], mmI5[2], mmR1[2], mmR2[2], mmR3[2], mmR4[2], mmR5[2];
      long long fiboI1, fiboI2, fiboI3, fiboI4, fiboI5, fiboR1, fiboR2, fiboR3, fiboR4, fiboR5;
      cout << "Informe os números de fibonacci desejados: ";
      cin >> num1 >> num2 >> num3 >> num4 >> num5;

      cout << "Informe o tamanho da array: ";
      cin >> tamanho1 >> tamanho2 >> tamanho3 >> tamanho4 >> tamanho5;
      int array1[tamanho1], array2[tamanho2], array3[tamanho3], array4[tamanho4], array5[tamanho5];
      randomArray(array1, tamanho1);
      randomArray(array2, tamanho2);
      randomArray(array3, tamanho3);
      randomArray(array4, tamanho4);
      randomArray(array5, tamanho5);

      cout << "|================================================================" << '\n' ;
      cout << "| fibonacci Interativo 1" << '\n' << "| ";
      tic();
      fiboI1 = fibonacciI(num1, 0, 1, 0);
      toc();
      cout << " | Número de fibonacci Interativo: " << fiboI1 << '\n' ;
      cout << "|================================================================" << '\n' ;
      cout << "| fibonacci Interativo 2" << '\n' << "| ";
      tic();
      fiboI2 = fibonacciI(num2, 0, 1, 0);
      toc();
      cout << " | Número de fibonacci Interativo: " << fiboI2 << '\n' ;
      cout << "|================================================================" << '\n' ;
      cout << "| fibonacci Interativo 3" << '\n' << "| ";
      tic();
      fiboI3 = fibonacciI(num3, 0, 1, 0);
      toc();
      cout << " | Número de fibonacci Interativo: " << fiboI3 << '\n' ;
      cout << "|================================================================" << '\n' ;
      cout << "| fibonacci Interativo 4" << '\n' << "| ";
      tic();
      fiboI4 = fibonacciI(num4, 0, 1, 0);
      toc();
      cout << " | Número de fibonacci Interativo: " << fiboI4 << '\n' ;
      cout << "|================================================================" << '\n' ;
      cout << "| fibonacci Interativo 5" << '\n' << "| ";
      tic();
      fiboI5 = fibonacciI(num5, 0, 1, 0);
      toc();
      cout << " | Número de fibonacci Interativo: " << fiboI5 << '\n' ;
      cout << "|================================================================" << '\n' ;
      cout << "|================================================================" << '\n' ;
      cout << "| fibonacci Recursivo 1" << '\n' << "| ";
      tic();
      fiboR1 = fibonacciR(num1, 0, 1, 0);
      toc();
      cout << " | Número de fibonacci Recursivo: " << fiboI1 << '\n' ;
      cout << "|================================================================" << '\n' ;
      cout << "| fibonacci Recursivo 2" << '\n' << "| ";
      tic();
      fiboR2 = fibonacciR(num2, 0, 1, 0);
      toc();
      cout << " | Número de fibonacci Recursivo: " << fiboI2 << '\n' ;
      cout << "|================================================================" << '\n' ;
      cout << "| fibonacci Recursivo 3" << '\n' << "| ";
      tic();
      fiboR3 = fibonacciR(num3, 0, 1, 0);
      toc();
      cout << " | Número de fibonacci Recursivo: " << fiboI3 << '\n' ;
      cout << "|================================================================" << '\n' ;
      cout << "| fibonacci Recursivo 4" << '\n' << "| ";
      tic();
      fiboR4 = fibonacciR(num4, 0, 1, 0);
      toc();
      cout << " | Número de fibonacci Recursivo: " << fiboI4 << '\n' ;
      cout << "|================================================================" << '\n' ;
      cout << "| fibonacci Recursivo 5" << '\n' << "| ";
      tic();
      fiboR5 = fibonacciR(num5, 0, 1, 0);
      toc();
      cout << " | Número de fibonacci Recursivo: " << fiboI5 << '\n' ;
      cout << "|================================================================" << '\n' ;
      
      cout << "|================================================================" << '\n' ;
      cout << "| Min/Max Interativo 1" << '\n' << "| ";
      tic();
      mmI1[0] = array1[0]; //menor número Interativo
      mmI1[1] = array1[0]; //maior número Interativo
      minmaxI(array1,  tamanho1, mmI1);
      toc();
      cout << '\n' << "| Menor número Interativo: "<< mmI1[0] << " | Maior número Interativo: " << mmI1[1] << '\n' ;
      cout << "|================================================================" << '\n' ;
      cout << "| Min/Max Interativo 2" << '\n' << "| ";
      tic();
      mmI2[0] = array2[0]; //menor número Interativo
      mmI2[1] = array2[0]; //maior número Interativo
      minmaxI(array2,  tamanho2, mmI2);
      toc();
      cout << '\n' << "| Menor número Interativo: "<< mmI2[0] << " | Maior número Interativo: " << mmI2[1] << '\n' ;
      cout << "|================================================================" << '\n' ;
      cout << "| Min/Max Interativo 3" << '\n' << "| ";
      tic();
      mmI3[0] = array3[0]; //menor número Interativo
      mmI3[1] = array3[0]; //maior número Interativo
      minmaxI(array3,  tamanho3, mmI3);
      toc();
      cout << '\n' << "| Menor número Interativo: "<< mmI3[0] << " | Maior número Interativo: " << mmI3[1] << '\n' ;
      cout << "|================================================================" << '\n' ;
      cout << "| Min/Max Interativo 4" << '\n' << "| ";
      tic();
      mmI4[0] = array4[0]; //menor número Interativo
      mmI4[1] = array4[0]; //maior número Interativo
      minmaxI(array4,  tamanho4, mmI4);
      toc();
      cout << '\n' << "| Menor número Interativo: "<< mmI4[0] << " | Maior número Interativo: " << mmI4[1] << '\n' ;
      cout << "|================================================================" << '\n' ;
      cout << "| Min/Max Interativo 5" << '\n' << "| ";
      tic();
      mmI5[0] = array5[0]; //menor número Interativo
      mmI5[1] = array5[0]; //maior número Interativo
      minmaxI(array5,  tamanho5, mmI5);
      toc();
      cout << '\n' << "| Menor número Interativo: "<< mmI5[0] << " | Maior número Interativo: " << mmI5[1] << '\n' ;
      cout << "|================================================================" << '\n' ;
      cout << "|================================================================" << '\n' ;
      cout << "| Min/Max Recursivo 1" << '\n' << "| ";
      tic();
      mmR1[0] = array1[0]; //menor número Recursivo
      mmR1[1] = array1[0]; //maior número Recursivo
      minmaxR(array1, tamanho1-1, mmR1, 0);
      toc();
      cout << '\n' << "| Menor número Recursivo: "<< mmR1[0] << " |Maior número Recursivo: " << mmR1[1] << '\n' ;
      cout << "|================================================================" << '\n' ;
      cout << "| Min/Max Recursivo 2" << '\n' << "| ";
      tic();
      mmR2[0] = array2[0]; //menor número Recursivo
      mmR2[1] = array2[0]; //maior número Recursivo
      minmaxR(array2, tamanho2-1, mmR2, 0);
      toc();
      cout << '\n' << "| Menor número Recursivo: "<< mmR2[0] << " |Maior número Recursivo: " << mmR2[1] << '\n' ;
      cout << "|================================================================" << '\n' ;
      cout << "| Min/Max Recursivo 3" << '\n' << "| ";
      tic();
      mmR3[0] = array3[0]; //menor número Recursivo
      mmR3[1] = array3[0]; //maior número Recursivo
      minmaxR(array3, tamanho3-1, mmR3, 0);
      toc();
      cout << '\n' << "| Menor número Recursivo: "<< mmR3[0] << " |Maior número Recursivo: " << mmR3[1] << '\n' ;
      cout << "|================================================================" << '\n' ;
      cout << "| Min/Max Recursivo 4" << '\n' << "| ";
      tic();
      mmR4[0] = array4[0]; //menor número Recursivo
      mmR4[1] = array4[0]; //maior número Recursivo
      minmaxR(array, tamanho4-1, mmR4, 0);
      toc();
      cout << '\n' << "| Menor número Recursivo: "<< mmR4[0] << " |Maior número Recursivo: " << mmR4[1] << '\n' ;
      cout << "|================================================================" << '\n' ;
      cout << "| Min/Max Recursivo 5" << '\n' << "| ";
      tic();
      mmR5[0] = array5[0]; //menor número Recursivo
      mmR5[1] = array5[0]; //maior número Recursivo
      minmaxR(array5, tamanho5-1, mmR5, 0);
      toc();
      cout << '\n' << "| Menor número Recursivo: "<< mmR5[0] << " |Maior número Recursivo: " << mmR5[1] << '\n' ;
  }

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
  return 0;
}
