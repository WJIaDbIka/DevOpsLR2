#include <iostream>
#include "FuncA.h"

int main() {
    double x;
    int terms;

    std::cout << "Введіть значення x: ";
    std::cin >> x;
    terms = 3;

    FuncA func; // Створюємо об'єкт класу FuncA
    double result = func.Calculate(x, terms); // Викликаємо метод через об'єкт
    std::cout << "Сума ряду: " << result << std::endl;

    return 0;
}

