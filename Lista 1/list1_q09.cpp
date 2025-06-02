#include <iostream>

int main(){
    double salario, mensal;

    std::cout << "Infrome seu salario anual: ";
    std::cin >> salario;

    mensal = salario/12;
    std::cout << "Você ganhara R$" << mensal << "por mes";
}
