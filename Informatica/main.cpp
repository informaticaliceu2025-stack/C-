#include <iostream>

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