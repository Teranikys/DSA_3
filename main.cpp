#include <iostream>
#include "ADT.h"

int main() {

    ADT A;
    ADT::makerand(A);
    ADT::print(A);
    ADT B;
    ADT::makerand(B);
    ADT::print(B);
    ADT C;
    ADT::makerand(C);
    ADT::print(C);
    std::cout << "||A|| + ||B|| + ||C|| = " << ADT::func(A) + ADT::func(B) + ADT::func(C) << '\n';
    std::cout << "||A + B + C|| = " <<ADT::func(ADT::summ(A, B, C)) << '\n';
    double res = (ADT::func(A) + ADT::func(B) + ADT::func(C)) / ADT::func(ADT::summ(A, B, C));
    std::cout << "The answer is: " << res;

    return 0;
}
