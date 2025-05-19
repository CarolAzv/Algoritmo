#include <iostream>

int main(){
    int *n, t, i;
    std::cin >> t;
    n = new int[t];
    if (t == 0){
         std::cout << "ERRO ao alucar memória" << std::endl;
         exit(1);
    }
    for (i=0; i<t; i++)
        std::cin >> n[i];
    /*...*/
    for (i=0; i<t; i++){
        std::cout << n[i] << " ";
    }
    std::cout << std::endl;
    /*...*/
    delete [] n;
    std::cout << n[i] << std::endl;
    return 0;
}