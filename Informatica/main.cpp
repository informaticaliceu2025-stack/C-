#include <iostream>
#include <math.h>

void tiparTablou(int x[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << x[i] << " ";
    }
    std::cout << "\n";
    return;
}

bool estePrim(int q) {
    int h = 0;
    for (int i = 1; i <= q; i++) {
        if (q % i == 0) h++;
        if (h == 2) return true; else return false;
    }
}

void numerePrime(int x[], int n) {
    int p[n];
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (estePrim(x[i]) == true) {
            p[j] = x[i]; j++;
        }
        tiparTablou(p, j);
    }
    return;
}

int main() {
    int a[10] = {27, 12, 13, 8, 9, 148, 7, 23, 55, 5};
    int n = 10;

    tiparTablou(a, n);
    numerePrime(a, n);
    return 0;
}


/*
double putere (double x, int n) {
    double p = 1.0;
    for (int i = 1; i <= n; i++) {
        p = p * x;
    }
    return p;
}

int main() {
    int x, y;
    double a = 3.0, c;
    int b = 2;
    c = putere(a, b);
    std::cout << a << '^' << b << " = " << c << std::endl;
    int s = 2, t = 4;
    c = putere(s, t);
    std::cout << s << "^" << t << " = " << c << std::endl;

    std::cout << "enter number ";
    std::cin >> x;
    std::cout << "enter power";
    std::cin >> y;

    c = putere(x, y);
    std::cout << x << "^" << y << " = " << c << std::endl;

    return 0;
}
*/