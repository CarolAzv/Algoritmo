#include <iostream>
//conta tá errando

int main(){
    double tempnow = 0, tempf = 0, t = 0;
    int qual;

    std::cout << "Diga sua temperatura: ";
    std::cin >> tempnow;
    std::cout << "Selecione (1) para converter Fahrenheit para Celsius, ";
    std::cout << "Selecione (2) para converter Celsius para Fahrenheit: ";
    std::cin >> qual;

    if(qual = 1){
        tempf = (tempnow - 32) * 9/5;
        std::cout << "A temperatura convertida é " << tempf << "º" << '\n';
    }
    else if(qual = 2){
        tempf = (tempnow * 9/5) + 32;
        std::cout << "A temperatura convertida é " << tempf << "º" << '\n';
    }
    return 0;
}