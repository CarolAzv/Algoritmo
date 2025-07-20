#include <iostream>
using namespace std;

long long fatorialR(int a){
  if(a == 0){
    return 1;
  }
  else{
    return a * fatorial(a-1);
  }
}

long long fatorialI(int a){
  long long result = a;
  for(int i = 1; i<a; i++){
    result = result * i;
  }
  return result;
}

int main(){
    int n;
    long long total;

    cout << "Informa seu numero fatorial: ";
    cin >> n;

    total = fatorial(n);

    cout << '\n' << total;
    
    return 0;
}
