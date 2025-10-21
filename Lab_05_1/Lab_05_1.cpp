// Lab_03_2.cpp
// Дюдюк Владислав
// Лабораторна робота № 5.1
// Функції, що містять арифметичний вираз
// Варіант 7

#include <iostream>
#include <cmath>

using namespace std;

double f(const double a, const double b, const double c); // прототип

int main() {
    double s, t;
    cout << "Enter s: "; cin >> s;
	cout << "Enter t: "; cin >> t;

    double result = (f(1.0, t * t, s) + f(t, s * s, t)) / (1.0 + pow(f(1.0, t * s, 1.0), 2));
    
    cout << result << endl;

    return 0;
}

double f(const double a, const double b, const double c) {
    return (sin(a * b * c)) / (a * a + b * b + c * c);
}
