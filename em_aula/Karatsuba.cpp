#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
#include <windows.h>
#include <Psapi.h>
using namespace std;

void tic(int mode=0) {
    static std::chrono::_V2::system_clock::time_point t_start;
    
    if (mode==0)
        t_start = std::chrono::high_resolution_clock::now();
    else {
        auto t_end = std::chrono::high_resolution_clock::now();
        std::cout << "Elapsed time is " << (t_end-t_start).count()*1E-9 << " seconds\n";
    }
}
void toc() { tic(1); }

long long randomnum(){
    gen(rd());
    long long min_val = 100000;
    long long max_val = 999999;
    distrib(min_val, max_val);
    long long randomNumber = distrib(gen);

  return randomNumber;
}

long long mulcomun(long long u, long long v){
    return u * v;
}

long long karatsuba(long long u, long long v, int n){
    int m;
    long long p, q, r, s;
    if(n <=3){
        return u * v;
    }
    m = n/2;
    p = u/static_cast<long long>(std::pow(10, m));
    q = u%static_cast<long long>(std::pow(10, m));
    r = v/static_cast<long long>(std::pow(10, m));
    s = v%static_cast<long long>(std::pow(10, m));
    long long pr = karatsuba(p, r, m);
    long long qs = karatsuba(q, s, m);
    long long y = karatsuba(p+q, r+s, m+1);
    long long uv = pr * static_cast<long long>(std::pow(10, 2*m)) + (y - pr - qs) * static_cast<long long>(std::pow(10, m)) + qs;
    return uv;
}

int main(){
    long long u, v, result;
    int n = std::max(std::to_string(u).size(), std::to_string(v).size());
    int qual;

    u = randomnum();
    v = randomnum();
    cout << u << '\n' << v;

    cout <<"----------------------------";
    cout <<"| Multiplicação comun   1  |";
    cout <<"|       Karatsuba       2  |";
    cout <<"----------------------------";
    cin >> qual;

    tic()

    if(qual == 1){
        result = karatsuba(u, v, n);
    }

    if(qual == 2){
        result = mulcomun(u, v);
    }
    
    cout << result;
    
    toc()
    return 0;
}
