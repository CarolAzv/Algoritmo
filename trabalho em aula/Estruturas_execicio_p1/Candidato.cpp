#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::ios;

const int MAXNOME = 100;
const int MAXCANDIDATO = 20;

struct Candidato{
    char nome[MAXNOME];
    int numero;
    int votos;
};

int main() {
    Candidato cand[MAXCANDIDATO];
    char arquivoEntrada[] = "candidatos.txt";
    char arquivoSaida[] = "votos.txt";

    //Simula leCandidatos()
    ifstream entrada(arquivoEntrada);
    if(!entrada.is_open()){
        cout << "Erro ao abrir arquivo " << arquivoEntrada << endl;
        exit(0);
    }

    int numCandidatos = 0;
    while(entrada >> cand[numCandidatos].numero){
        entrada.getline(cand[numCandidatos].nome, MAXNOME);
        cand[numCandidatos].votos = 0;
        numCandidatos++;
    }
    entrada.close();

    //Cálculo do vencedor
    int vencedor = 0;
    for(int i = 1; i < numCandidatos; i++){
        if (cand[i].votos > cand[vencedor].votos) {
            vencedor = i;
        }
    }

    cout << "O candidato vencedor foi " << cand[vencedor].nome << endl;
    return 0;

    //Loop de votos
    int voto = 0;
    while(voto != -1){
        //tem que ler as informações dos candiatos, como?
        cout << "Em qual candidato você quer votar?" << endl;
        cout << "----------------------------------" << endl;
        cout << "| " << arumar << endl;
        cout << "| " << arumar << endl;
        cout << "| " << arumar << endl;
        cout << "----------------------------------" << endl;
        cin >> voto;

        //Atualização dos votos
        ifstream saida(arquivoSaida);
        if(!entrada.is_open()){
            cout << "Erro ao abrir arquivo " << arquivoSaida << endl;
            exit(0);
        }

        int numCandidatos = 0;
        //arumar
        while(saida >> cand[numCandidatos].numero){
            entrada.getline(cand[numCandidatos].nome, MAXNOME);
            //cand[numCandidatos].votos = 0;
            //numCandidatos++;
        }
        saida.close();
    }
}
