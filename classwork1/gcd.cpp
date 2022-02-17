#include <iostream>
#include <cmath>
int gcd(int a, int b) {
    int c = a % b;
    if (c == 0) {
        return b;
    } else {
        return gcd(b, c);
    }
}
int main()
{
    int a, b;
    std::cin >> a >> b;
    if (a > b) {
        std::cout << gcd(a, b) <<std::endl;
    } else {
        std::cout << gcd(b, a) <<std::endl;
    }
    return 0;
}
