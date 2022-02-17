#include <iostream>

using namespace std;

int main()
{
    int x, p = 2;
    cin >> x;
    while (p * p <= x){
        if (x % p == 0){
            p = 0;
            cout << "NO" << endl;
            break;
        }else{
            p++;
        }
    }
    if (p != 0){
        cout << "YES" << endl;
    }
    return 0;
}
