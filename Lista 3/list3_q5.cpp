#include <iostream>

#include <ctime>
clock_t startTimer;
time_t beginTimer;
void tic()
{
 beginTimer = time(&beginTimer);
 struct tm * timeinfo;
 timeinfo = localtime(&beginTimer);
 std::cout << "simulation start at: " << asctime(timeinfo) << std::endl;
}
double toc()
{
 time_t finishTimer = time(&finishTimer);
 double simTime = difftime(finishTimer, beginTimer) / 60.0;
 struct tm * timeinfo;
 timeinfo = localtime(&finishTimer);
 std::cout << "simulation finished at: " << asctime(timeinfo) << std::endl;
 std::cout << "Time elapsed: " << simTime << " minutes" << std::endl;
 return simTime;
}

//=========================================================================//
int main(){
    tic()
    double velo, dist, temp;

    std::cout << "Distancia pecorida: ";
    std::cin >> dist;
    std::cout << "Tempo de viagem: ";
    std::cin >> temp;

    velo = dist/temp;
    std::cout << "A velocidade media é: " << velo << '\n';
    
    toc()
    return 0;
}