#include <iostream>

int main(){
    int i, a[5];
    int *p;
    for (i=0 ; i<5 ; i++){
        a[i]=i*2;
    }
    p = a;
    for (i=0 ; i<5 ; i++){
        std::cout << *p << std::endl;
        p++;
    }
    return 0;
}
