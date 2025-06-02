#include <iostream>
#include <random>

int main(){
    int x, test;
    x = 1+new Random().nextInt(100);

    std::cout << "Tente descobrir o numero aleatorio! Você tem 10 chances: ";
    std::cin >> test;

    if(test != x){
        std::cout << "Errou! Tente novamente! Você tem 9 chances: ";
        std::cin >> test;
    }
    else if(test = x){
        std::cout << "Acertou!!! Parabens!";
    }
    if(test != x){
        std::cout << "Errou! Tente novamente! Você tem 8 chances: ";
        std::cin >> test;
    }
    else if(test = x){
        std::cout << "Acertou!!! Parabens!";
    }
    if(test != x){
        std::cout << "Errou! Tente novamente! Você tem 7 chances: ";
        std::cin >> test;
    }
    else if(test = x){
        std::cout << "Acertou!!! Parabens!";
    }
    if(test != x){
        std::cout << "Errou! Tente novamente! Você tem 6 chances: ";
        std::cin >> test;
    }
    else if(test = x){
        std::cout << "Acertou!!! Parabens!";
    }
    if(test != x){
        std::cout << "Errou! Tente novamente! Você tem 5 chances: ";
        std::cin >> test;
    }
    else if(test = x){
        std::cout << "Acertou!!! Parabens!";
    }
    if(test != x){
        std::cout << "Errou! Tente novamente! Você tem 4 chances: ";
        std::cin >> test;
    }
    else if(test = x){
        std::cout << "Acertou!!! Parabens!";
    }
    if(test != x){
        std::cout << "Errou! Tente novamente! Você tem 3 chances: ";
        std::cin >> test;
    }
    else if(test = x){
        std::cout << "Acertou!!! Parabens!";
    }
    if(test != x){
        std::cout << "Errou! Tente novamente! Você tem 2 chances: ";
        std::cin >> test;
    }
    else if(test = x){
        std::cout << "Acertou!!! Parabens!";
    }
    if(test != x){
        std::cout << "Errou! Tente novamente! Você tem 1 chances: ";
        std::cin >> test;
    }
    else if(test = x){
        std::cout << "Acertou!!! Parabens!";
    }
    if(test != x){
        std::cout << "Acabou as chances! Tente de novo";
    }
}