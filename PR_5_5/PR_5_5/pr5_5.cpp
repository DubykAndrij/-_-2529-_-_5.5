#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int recursion_depth = 0;

int sumOfDigitsRecursive(int n) {
    if (n == 0) {
        return 0;
    }

    recursion_depth++;

    return (n % 10) + sumOfDigitsRecursive(n / 10);
}

void findSumAndDepth(int n) {
    if (n < 0) {
        cout << "Введіть натуральне число (>= 0)." << endl;
        return;
    }

    recursion_depth = 0;

    int sum = sumOfDigitsRecursive(n);

    if (n == 0) {
        recursion_depth = 0;
    }

    cout << "\n--- Результати для n = " << n << " ---" << endl;
    cout << "Сума цифр числа n: " << sum << endl;
    cout << "Глибина рекурсії: " << recursion_depth << endl;
    cout << "--------------------------------\n" << endl;
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int n;

    cout << "Введіть натуральне число n: ";
    cin >> n;

    findSumAndDepth(n);

    return 0;
}