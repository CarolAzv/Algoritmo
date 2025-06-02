#include <iostream>

int main(){
    double vista, prazo, preço, total, parte;
    int parcela;
    vista = 0.10;
    prazo = 0.20;

    std::cout << "indique o preço da compra e quantas parcelas: ";
    std::cin >> preço >> parcela;

    if(parcela = 1){
        total = preço - (preço*vista);
        std::cout << "o valor da compra a vista será R$" << total;
    }
    else{
        total = preço + (preço*prazo);
        parte = total/parcela;
        std::cout << "o valor da compra será R$" << total << " e cada parcela cera R$" << parte;
    }
}
