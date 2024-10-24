#include "FuncA.h"
#include <cmath>

FuncA::FuncA(){
}

double FuncA::Calculate(double x, int terms){
double sum = 0.0;

    for (int n = 0; n < terms; ++n) {
        // Обчислюємо (-1)^n
        double sign = pow(-1, n);
        
        // Обчислюємо (2n)!
        double numerator = tgamma(2 * n + 1); // tgamma(n+1) = n!

        // Обчислюємо (n!)^2
        double denominator = pow(tgamma(n + 1), 2);

        // Член ряду
        double term = (sign * numerator * pow(x, n)) / (pow(4, n) * denominator);

        // Додаємо до суми
        sum += term;
    }

    return sum;
}
