#include <iostream>

int main(){
    int idade1, idade2, p;
    std::string gosto1, filme1, gosto2, filme2, comida1, comida2, inte1, inte2;

    idade1 = 19;
    idade2 = 25;
    gosto1 = "gatos";
    gosto2 = "lobos";
    filme1 = "Godzilla";
    filme2 = "Planeta do tesouro";
    comida1 = "cheesecake";
    comida2 = "chocolate quente";
    inte1 = "Jogos";
    inte2 = "Artes";


    std::cout << "Você gostaria de ver as informações de Carol(1) ou de Taynah(2)?";
    std::cin >> p;

    if(p = 1){
        std::cout << "Carol tem " << idade1 << " anos e gosta de " << gosto1 << ", " << filme1 << ", " << comida1 << ", " << inte1 << std::endl;
    }
    else{
        std::cout << "Taynah tem " << idade2 << " anos e gosta de " << gosto2 << ", " << filme2 << ", " << comida2 << ", " << inte2 << std::endl;
    }
}
