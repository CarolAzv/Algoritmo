#include <iostream>

int main(){
    double nota1, nota2, nota3, nota4, total;

    std::cout << "informe suas notas: ";
    std::cin >> nota1, nota2, nota3, nota4;
    total = (nota1*3)+(nota2*4)+(nota3*5)+(nota4*6);
    total = total/18;

    if(total >= 6){
        std::cout << "APROVADO";
    }
    else if(total > 4){
        std::cout << "REPROVADO";
    }
    else{
        std::cout << "PROVA FINAL";
    }
}
