#include <iostream>

int main(){
    int num, i, no = 0;
    double c;

    std::cout << "Escreva um numero: ";
    std::cin >> num;

    for(int i=2; i<num; i++){
        c = i%num;
        if(c=0){
            no = 1;
        }
    }

    if(no=1){
        std::cout << "Numero " << num << "Não é primo";
    }
    else{
        std::cout << "Numero " << num << "é primo!";
    }
    return 0;
}