#include <iostream>

int main(){
    int p;

    std::cout << "Qual função você quer utilizar?";
    std::cout << "|------------------------|";
    std::cout << "|              Soma [1]  |";
    std::cout << "| Checar duplicatas [2]  |";
    std::cout << "|          fibonacc [3]  |";
    std::cout << "|     Inverte lista [4]  |";
    std::cout << "|          Potencia [5]  |";
    std::cout << "|------------------------|";
    std::cin >> p;

    if(p = 1){
        int a, i, array[100], total = 0;
        std::cout << "quantos itens tera na lista?: ";
        std::cin >> a;
        std::cout << "Ensira sua lista: ";
        for(int i=0; i<a; i++){
            std::cin>>array[i];
            return 0;
        }
        for(int i=0; i<a; i++){
            total = total + array[i];
            return total;
        }
        std::cout << "Total da soma: " << total;
    }

    if(p = 2){
        int a, i, j, array[100], total = 0;
        std::string c = "FALSO";
        std::cout << "quantos itens tera na lista?: ";
        std::cin >> a;
        std::cout << "Ensira sua lista: ";
        for(int i=0; i<a; i++){
            std::cin>>array[i];
            return 0;
        }
        for(int i=0; i<a; i++){
            for(int j=0; j<a; j++){
                if(array[i] = array[j]){
                    c = "VERDADEIRO";
                }
            }
        }
        std::cout << c;
    }

    if(p = 3){}

    if(p = 4){
        int a, i,array[100], yarra[100]; 
        std::string c = "FALSO";
        std::cout << "quantos itens tera na lista?: ";
        std::cin >> a;
        std::cout << "Ensira sua lista: ";
        for(int i=0; i<a; i++){
            std::cin>>array[i];
            return 0;
        }
        for(int i=0; i<a; i++){
            yarra.append(back.end());
            array.pop_back();
            return 0;
        }
        std::cout << yarra;
    }

    if(p = 5){
        int num, pot, x, res, fim, c;
        x = pot%2;
        std::cout << "informe um numero e seu potencial: ";
        std::cin >> num >> pot;
        if(pot = 0){
            res = 1;
        }
        else if(x = 0){
            res = num*(pot/2);
            c = res * res;
        }
        else{
            res = num * (pot-1);
            c = num * res;
        }
        std::cout << c;
    }
}