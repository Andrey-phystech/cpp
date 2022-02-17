#include <iostream>

using namespace std;

int main()
{
    int year = 0;
    cin >> year;
    if (year % 100 == 0 and year % 400 != 0){
        cout << "NO" << endl;
    } else if (year % 4 == 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
