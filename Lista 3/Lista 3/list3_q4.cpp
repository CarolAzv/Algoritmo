#include <iostream>

int rand(void);

int main(){
    int atp, num;
    num = rand() % 10 + 1;

    std::cout << "Tente adivinhar o numero entre 1 e 10! ";
    std::cin >> atp;

    while(atp != num){
        std::cout << "Você errou! tente novamente: ";
        std::cin >> atp;
    }
    std::cout << "Você acertou! Parabens! ";
}