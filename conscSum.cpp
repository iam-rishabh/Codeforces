#include <iostream>
using namespace std;

int main()
{
    int t;
    long long n;
    cin >> t;

    while (t != 0)
    {
        cin >> n;
        cout << -(n - 1) << " " << n << endl;
        t--;
    }
}