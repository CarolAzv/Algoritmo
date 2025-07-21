#include <iostream>
using namespace std;

void randomArray(int array[], int tamanho){
  srand(time(0));
  for (int i = 0; i < tamanho; ++i){
    array[i] = rand() % 1001; 
  }
}

int inverte(int vetor[], int rotev[], int i, int v){
  int save;
  if(v==-1){
    return 0;
  }

save = vetor[v];
rotev[i] = save;
return inverte(vetor, rotev, i+1, v=1);
}

int main(){
  int tamanho;

  cout << "Tamanho do vetor: ";
  cin >> tamanho;
  int vetor[tamanho], rotev[tamanho];
  randomArray(vetor, tamanho);

  inverte(vetor, rotev, 0, tamanho-1);
  for(int i=0; i<tamanho; i++){
    cout << vetor[i] << " ";
  }
  cout << '\n' << '\n';
  for(int i=0; i<tamanho; i++){
    cout << rotev[i] << " ";
  }
  
  return 0;
}
