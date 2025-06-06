#include <iostream>

int main(){
    double tempnow, tempf, t;
    int qual;

    std::cout << "Diga sua temperatura: ";
    std::cin >> tempnow;
    std::cout << "Selecione (1) para converter Fahrenheit para Celsius, ";
    std::cout << "Selecione (2) para converter Celsius para Fahrenheit: ";
    std::cin >> qual;

    if(qual = 1){
        tempf = (tempnow - 32) * 1.8;
        return tempf;
    }
    else if(qual = 2){
        tempf = (tempnow * 1.8) + 32;
        return tempf;
    }
    std::cout << "A temperatura convertida é " << tempf << "º";

    return 0;
}
