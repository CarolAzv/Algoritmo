#include <iostream>

int main(){
    double gasolina, alcool, qgas, qalc, pregas, prealc;

    std::cout << "Infrome o valor da gasolina e do álcool:";
    std::cin >> gasolina, alcool;
    std::cout << "Informe a quilometragem que o carro faz com gasolina e a com álcool.";
    std::cin >> qgas, qalc;

    pregas = gasolina * qgas;
    prealc = alcool * qalc;

    if(pregas < prealc){
        std::cout << "Você deve utilizar gasolina, que ficara R$" << pregas;
    }
    else{
        std::cout << "Você deve utilizar álcool, que ficara R$" << prealc;
    }
}
