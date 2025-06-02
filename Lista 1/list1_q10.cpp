#include <iostream>

int main(){
    double gasolina, km, kmporgas, trocaoleo, seguro, ipva, concerto, a, b, anual, mes;

    std::cout << "informe o preço da gasolina, quantos Km o carro anda por mes e quantos Kms ele faz por litro";
    std::cin >> gasolina, km, kmporgas;
    std::cout << "informe o preço da troca de óleo, seguro, IPVA e concertos";
    std::cin >> trocaoleo, seguro, ipva, concerto;

    a = (km/kmporgas)*gasolina*12;
    b = (trocaoleo*2)+seguro+ipva+concerto;
    anual = a+b;
    mes = anual/12;

    std::cout << "O carro gastara R$"<< mes << " por mês";
}
