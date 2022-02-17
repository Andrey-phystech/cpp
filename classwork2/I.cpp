#include <iostream>

using namespace std;

int simple_numbers(int x)
{
    int p = 2;
    while (p * p <= x){
        if (x % p == 0){
            return p;
            p = 0;
            break;
        }else{
            p++;
        }
    }
    if (p != 0){
        return x;
    }
}
int main()
{
    int x, p, y = 0;
    cin >> x;
    while (x != 1){
        y = simple_numbers(x);
        if (p != y){
            p = y;
            cout << p << " ";
        }
        x /= y;
    }
    return 0;
}
