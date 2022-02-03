#include <iostream>
#include <cmath>
int main()
{
    double x, y, z = 0.;
    std::cin >> x >> y;
    z = std::sqrt(x * x + y * y);
    std::cout << z << std::endl;
    return 0;
}
