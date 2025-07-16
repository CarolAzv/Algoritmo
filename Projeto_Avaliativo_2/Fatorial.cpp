#include <iostream>
using namespace std;

long long fatorial(int a){
  if(a == 0){
    return 1;
  }
  else{
    return a * fatorial(a-1);
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
