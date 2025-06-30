#include <cmath>
#include <iostream>
using namespace std;

int função(int x){
    cout << "\n" << x;
    if(abs(x) < 10){
        return 1;
    }
    else{
        return(1 + função(x/10));
    }
}
int main(){
    int num;
    num = 10145;
    cout << "Total " << função(num) << endl;

    return 0;
}
