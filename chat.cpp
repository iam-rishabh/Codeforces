#include <iostream>
#include <set>
using namespace std;

int main()
{
    string str;
    cin >> str;
    set<char> setStr;

    for (char c : str)
    {
        setStr.insert(c);
    }

    int length = setStr.size();

    if (length % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}