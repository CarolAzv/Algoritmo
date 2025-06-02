#include <iostream>

int main(){
    int normal, extra;
    double salario, exsalario, total;

    std::cout << "Infrome a quantidade de horas normais trabalhadas, a quantidade de horas extras e o preço das horas normais";
    std::cin >> normal, extra, salario;

    exsalario = ((salario*0.5)+salario)*extra;
    total = (salario*normal)+exsalario;
    std::cout << "Você Ganhará R$" << total;
}
