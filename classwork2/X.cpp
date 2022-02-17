#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float x1, n1, i1 = 0.;
    double x2, n2, i2 = 0.;
    cin >> n1;
    n2 = n1;
    for (i1 = 1; i1 <= n1; i1++){
        x1 += (1 / (i1 * i1));
    }
    for (i2 = 1; i2 <= n2; i2++){
        x2 += (1 / (i2 * i2));
    }
    cout << setprecision(10) << endl;
    cout << "float:  " << x1 << endl;
    cout << "double: " << x2 << endl;
    return 0;
}
