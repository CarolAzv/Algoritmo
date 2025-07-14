#include <iostream>
using namespace std;

int Fatorial(int a, int b, int mul){
  if(b <= 0){
    return 0
  }
  else{
    mul= a*b
      return mul + Fatorial(a-2, b-2, mul)
  }
}

int main(){
    int numero=0; //numeros fechados

    cout << numero << "\n";
    
    return 0;
}
