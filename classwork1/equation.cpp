#include <iostream>
#include <cmath>
int main()
{
    int a, b, c, d = 0;
    double x1, x2 = 0.;
    std::cin >> a >> b >> c;
    if (a == 0, b == 0, c == 0){
        std::cout << "R" << std::endl;
    } else if (a == 0 and b == 0 and c != 0) {
        std::cout << "empty set" << std::endl;
    } else if (a == 0 and b != 0 and c == 0) {
        x1 = 0;
        std::cout << x1 << std::endl;
    } else if (a == 0 and b != 0 and c != 0) {
        x1 = -c / b;
        std::cout << x1 << std::endl;
    } else if (a != 0 and b == 0 and c == 0) {
        x1 = 0;
        std::cout << x1 << std::endl;
    } else if (a != 0 and b != 0 and c == 0) {
        x1 = 0;
        x2 = -b / a;
        std::cout << x1 << x2 << std::endl;
    } else if (a != 0 and b == 0 and c != 0) {
        if (a > 0 and c > 0 or a < 0 and c < 0) {
            x1 = std::sqrt(-c / a);
            x2 = - std::sqrt(-c / a);
            std::cout << x1 << x2 << std::endl;
        } else {
            std::cout << "empty set" << std::endl;
        }
    } else {
        if (b * b - 4 * a * c >= 0) {
            d = std::sqrt(b * b - 4 * a * c);
            x1 = (-b + d) / (2 * a);
            x2 = (-b - d) / (2 * a);
        if (x1 == x2) {
            std::cout << x1 << std::endl;
        } else {
            std::cout << x1 << x2 << std::endl;
        }
        } else {
            std::cout << "empty set" << std::endl;
        }
        }
    return 0;
}
