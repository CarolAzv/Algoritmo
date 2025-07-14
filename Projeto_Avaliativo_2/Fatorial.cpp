#include <iostream>
using namespace std;

long long fatorial(int a, int b, int mul){
  if(b <= 0){
    return 0
  }
  else{
    mul= a*b
      return mul + fatorial(a-2, b-2, mul)
  }
}

int main(){
    int n;
    long long total;

    cout << "Informa seu numero fatorial: ";
    cin >> n;

    total = fatorial(n, n-1, 0);

    cout << '\n' << total;
    
    return 0;
}
