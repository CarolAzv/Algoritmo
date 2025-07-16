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
  long long ;
  for(int i = 1; i<a; i++){
    
  }
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
