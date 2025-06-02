#include <iostream>

int main(){
    int idade1, favnum1, idade2, favnum2, point;
    double tamanho1, peso1, tamanho2, peso2;
    bool ler1, gato1, ler2, gato2, inicial1, inicial2, nome1, sobrenome1, nome2, sobrenome2, favletra1, favletra2;

    idade1 = 19;
    favnum1 = 5;
    tamanho1 = 1,70;
    peso1 = 80,0;
    ler1 = "sim";
    gato1 = "sim";
    inicial1 = "c";
    favletra1 = "i";
    nome1 = "carol";
    sobrenome1 = "azevedo";
    point = 0;

    std::cin >> idade2 >> "Quantos anos você tem?";
    std::cin >> favnum2 >> "qual seu numero favorito?";
    std::cin >> tamanho2 >> "Qual sua altura?";
    std::cin >> peso2 >> "Quanto você pesa?";
    std::cin >> ler2 >> "Você gostar de ler?";
    std::cin >> gato2 >> "Qual seu animal favorito?";
    std::cin >> inicial2 >> "Qual sua inicial?";
    std::cin >> favletra2 >> "Qual sua vogal favorita";
    std::cin >> nome2 >> "Qual seu nome";
    std::cin >> sobrenome2 >> "Qual seu sobrenome?";

    if(idade1 = idade2){
        point = point + 1;
    }
    if(favnum1 = favnum2){
        point = point + 1;
    }
    if(tamanho1 = tamanho2){
        point = point + 1;
    }
    if(peso1 = peso2){
        point = point + 1;
    }
    if(ler1 = ler2){
        point = point + 1;
    }
    if(gato1 = gato2){
        point = point + 1;
    }
    if(inicial1 = inicial2){
        point = point + 1;
    }
    if(favletra1 = favletra2){
        point = point + 1;
    }
    if(nome1 = nome2){
        point = point + 1;
    }
    if(sobrenome1 = sobrenome2){
        point = point + 1;
    }

    if(point >= 5){
        std::cout << "Essa pessoa é parecida comigo" << std::endl;
    }
    else{
        std::cout << "Essa pessoa é diferente de mim" << std::endl;
    }
}
