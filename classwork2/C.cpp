#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    cin >> x;
    if (x == 0){
        cout << "YES" << endl;
    }
    while (x != 1 and x != 0){
        if (x % 2 == 1){
            cout << "NO" << endl;
            break;
        } else {
            x /= 2;
        }
    }
    if (x == 1){
        cout << "YES" << endl;
    }
    return 0;
}
