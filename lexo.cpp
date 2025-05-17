#include <iostream>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    int res;

    for (auto &c : str1)
    {
        c = tolower(c);
    }

    for (auto &c : str2)
    {
        c = tolower(c);
    }

    if (str1 > str2)
        res = 1;
    else if (str1 < str2)
        res = -1;
    else
        res = 0;

    cout << res;
}