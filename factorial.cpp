#include <iostream>
#include <cmath>
int main()
{
    int x, ans = 1;
    std::cin >> x;
    while (x > 1) {
        ans *= x;
        x--;
    }
    std::cout << ans << std::endl;
    return 0;
}
