#include <iostream>

int main(){
    double total, ladoq, lado1, lado2, base, altura, raio;
    int p;

    std::cout << "Qual função você quer utilizar?";
    std::cout << "|-----------------|";
    std::cout << "|  Quadrado [1]   |";
    std::cout << "| Retângulo [2]   |";
    std::cout << "|   Triângu [3]   |";
    std::cout << "|   Círculo [4]   |";
    std::cout << "|     Sair [5]    |";
    std::cout << "|-----------------|";
    std::cin >> p;

    if(p = 1){
        std::cout << "Lado do quadrado: ";
        std::cin >> ladoq;
        total = ladoq*ladoq;
        std::cout << "Aréa do quadrado é igual a " << total;
    }
    if(p = 2){
        std::cout << "lados do retângulo: ";
        std::cin >> lado1 >> lado2;
        total = lado1*lado2;
        std::cout << "Aréa do retângulo é igual a " << total;
    }
    if(p = 3){
        std::cout << "base e altura do triângulo: ";
        std::cin >> base >> altura;
        total = (base*altura)/2;
        std::cout << "Aréa do triângulo é igual a " << total;
    }
    if(p = 4){
        std::cout << "raio do circulo: ";
        std::cin >> raio;
        total = (raio*raio)*3.14;
        std::cout << "Aréa do circulo é igual a " << total;
    }
}
