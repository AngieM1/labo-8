#include <iostream>
using namespace std;

int numero() {
    int n;
    cout << "Ingrese un nnmero:";
    cin >> n;
    return n;
}
int divisores(int n) {
    int suma = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0)
        suma += i;
    return suma;
}
bool perfecto(int n) {
    return sumardivisores(n) == n;
}

