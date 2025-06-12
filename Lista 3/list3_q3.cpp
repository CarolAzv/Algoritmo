#include <iostream>

double mediad3(int a, int b, int c){
    return (a+b+c)/3;
}

int main(){
    int a, b, c;
    double media;
    std::cout << "Informe 3 notas: ";
    std:: cin >> a;
    std:: cin >> b;
    std:: cin >> c;
    
    media = mediad3(a, b, c);
    std::cout << "Media = " << media << '\n';

    return 0;
}
