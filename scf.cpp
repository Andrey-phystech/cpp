#include <iostream>
#include <cmath>
int gcd(int a, int b);
int scf(int a, int b);

int gcd(int a, int b) {
    int c = a % b;
    if (c == 0) {
        return b;
    } else {
        return gcd(b, c);
    }
}
int scf(int a, int b) {
    return a * b / gcd(a, b);
}
int main()
{
    int a, b;
    std::cin >> a >> b;
    if (a > b) {
        std::cout << scf(a, b) <<std::endl;
    } else {
        std::cout << scf(b, a) <<std::endl;
    }
    return 0;
}
