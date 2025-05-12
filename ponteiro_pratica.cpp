#include <iostream>

int main(){
    int a = 20;
    int *p;
    p = &a;
    std::cout << "valor de *p:" << std::endl
              << *p << std::endl;
    *p = 50;
    std::cout << "valor de a:" << std::endl
              << a << std::endl;
    return 0;
}