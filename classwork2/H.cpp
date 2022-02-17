#include <iostream>
#include <string>

using namespace std;

string reverse_str(string x)
{
    string ans = "";
    int i = 0;
    for (i = x.size() - 1; i >= 0; i--){
        ans.append(x.substr(i, 1));
    }
    return ans;
}
int main()
{
    int n, i = 0;
    string x, ans = "";
    cin >> n >> x;
    if (x == reverse_str(x)){
        cout << 1 << endl;
    } else{
        cout << reverse_str(x) << endl;
    }


}
