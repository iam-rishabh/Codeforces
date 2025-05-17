#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x = 0;
    int n;
    cin >> n;
    string str;

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str == "++X" || str == "X++")
            x++;
        else if (str == "--X" || str == "X--")
            x--;
    }
    cout << x;
}