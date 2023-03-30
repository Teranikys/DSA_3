//
// Created by Влад on 28/03/2023.
//

#include "ADT.h"
#include "iostream"
#include <cstdlib>
#include "ctime"

void ADT::make(ADT& x) {
    std::cout << "Enter " << x.n << " numbers" << '\n';
    for (int i = 0; i < x.n; ++i)
        for (int j = 0; j < x.m; ++j)
            std::cin >> x.A[i][j];
}

void ADT::makerand(ADT &x) {
//    srand((unsigned)time(nullptr));
    for (int i = 0; i < x.n; i++)
        for (int j = 0; j < x.m; ++j)
//            x.A[i][j] = rand() % 100;
            x.A[i][j] = 1;
}

void ADT::print(ADT x) {
//    std::cout << "Array " << x.n << "x" << x.m << ":\n";
    for (int i = 0; i < x.n; i++) {
        for (int j = 0; j < x.m; ++j){
            std::cout << x.A[i][j] << ' ';
            }
        std::cout << '\n';
    }
    std::cout << '\n';
}

double max_element(const std::vector<double>& x){
    double res = 0;
    for (double elem : x){
        if (elem > res){
            res = elem;
        }
    }
    return res;
}

double ADT::func(const ADT& x) {
    double res = 0;
    for (int i = 0; i < x.n; ++i){
        res = res + max_element(x.A[i]);
    }

    return res;
}

ADT ADT::summ(ADT &x, ADT &y) {
    ADT res;
    for (int i = 0; i < x.n; ++i){
        for (int j = 0; j < x.m; ++j){
            res.A[i][j] = x.A[i][j] + y.A[i][j];
        }
    }
    return res;
}

ADT ADT::summ(ADT &x, ADT &y, ADT &z) {
    ADT res;
    for (int i = 0; i < x.n; ++i){
        for (int j = 0; j < x.m; ++j){
            res.A[i][j] = x.A[i][j] + y.A[i][j] + z.A[i][j];
        }
    }
    return res;
}

