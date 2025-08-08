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

int linearR(int array[], int tamanho, int want){
    if(array[tamanho-1]==want){
        return tamanho-1;
    }
    else if(tamanho-1==0){
        return -1;
    }
    return linearR(array, tamanho-1, want);
}

int main(){
    int n, resultI, tocheck, resultR;
    cout << "Informe o tamanho da lista: "; // << "\n";
    cin >> n;
    int array[n];

    randomArray(array, n);
    tocheck = randomNum(n, array);
    resultI = linearI(array,  n, tocheck);
    resultR = linearR(array,  n, tocheck);

    cout << '\n' << "Resultado de Linear Iterativa: " << resultI;
    cout << '\n' << "Resultado de Linear Recursiva: " << resultI;
  
    return 0;
}
