#include <iostream>

using namespace std;

int main()
{
    int x, ans = 0;
    while (cin >> x){
        if (x == 0){
            break;
        }
        if (ans <= x and x % 2 == 0){
            ans = x;
        }
    }
    cout << ans << endl;
    return 0;
}
