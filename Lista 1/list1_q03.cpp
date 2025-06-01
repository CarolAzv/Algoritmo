#include <iostream>

int main(){
    double gas, alcool, disel, r, res;
    int p;
    gas = 4.75;
    alcool = 4.00;
    disel = 3.50;

    std::cout << "Qual combustíveis você quer? gasolina(1), álcool(2) ou disel(3)";
    std::cin >> p;
    std::cout << "Quantos reais você ira abastecer?";
    std::cin >> r;

    if(p = 1){
        res = p/gas;
        std::cout << "Você pode comprar " << res << "litos de gasolina" <<std::endl;
    }
    else if(p = 2){
        res = p/alcool;
        std::cout << "Você pode comprar " << res << "litos de álcool" <<std::endl;
    }
    else{
        res = p/disel;
        std::cout << "Você pode comprar " << res << "litos de disel" <<std::endl;
    }
}
