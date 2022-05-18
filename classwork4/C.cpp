#include <iostream>

using namespace std;

void counter()
{
    static int nm = 0;
    nm++;
    cout << nm <<endl;
}
int main()
{
    for (int i = 1; i <= 10; i++){
        counter();
    }
    return 0;
}
