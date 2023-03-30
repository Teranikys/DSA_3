//
// Created by Влад on 28/03/2023.
//

#ifndef DSA_3_ADT_H
#define DSA_3_ADT_H

#include "vector"

const unsigned int N = 10;
const unsigned int M = 20;
typedef double typeitem;

struct ADT {
    std::vector<std::vector<typeitem> > A;
    unsigned int n = 0;
    unsigned int m = 0;
    explicit ADT() {
        n = N;
        A.resize(n);
        m = M;
        for (int i = 0; i < n; ++i){
            A[i].resize(m);
        }
    }

    static void make(ADT &x);
    static void makerand(ADT &x);
    static void print(ADT x);
    static double func(const ADT& x);
    static ADT summ(ADT &x, ADT &y);
    static ADT summ(ADT &x, ADT &y, ADT &z);
};


#endif //DSA_3_ADT_H
