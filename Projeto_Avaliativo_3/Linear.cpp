#include <iostream>
using namespace std;

void randomArray(int array[], int tamanho){
    srand(time(0));
    for (int i = 0; i < tamanho; ++i){
        array[i] = rand() % 1001; 
    }
}

int randomNumFromArray(int tamanho, int array[]){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, tamanho);
    int randomNumber = dis(gen);

    return array[randomNumber];
}

int linearI(int array[], int tamanho, int want){
    for(int i=0; i<tamanho; i++){
        if(array[i]==want){
            return i;
        }
    }
    return -1;
}

int main(){
    int n, result, tocheck;
    cout << "Informe o tamanho da lista: "; // << "\n";
    cin >> n;
    int array[n];

    randomArray(array, n);
    tocheck = randomNum(n, array);
    result = linearI(array,  n, tocheck);
  
    return 0;
}
