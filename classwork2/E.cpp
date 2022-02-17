#include <iostream>

using namespace std;

int main()
{
    int x, m, ans = 0;
    while (cin >> x){
        if (x == 0){
            break;
        }
        if (m < x){
            m = x;
            ans = 0;
            ans++;
        } else if (m == x){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
