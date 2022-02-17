#include <iostream>

using namespace std;

int main()
{
    int x, ans = 0;
    while (cin >> x){
        if (x == 0){
            break;
        }
        if (x % 2 == 0){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
