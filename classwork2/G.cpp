#include <iostream>

using namespace std;

int main()
{
    int x, i = 0;
    cin >> x;
    for (int i = x - 1; i > ; i--){
        if (x % i == 0){
            cout << i << " ";
        }
    }
    return 0;
}
