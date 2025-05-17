#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    vector<string> arr;

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        arr.push_back(str);
    }

    for (int i = 0; i < n; i++)
    {
        int length = arr[i].length();

        if (length > 10)
        {
            cout << arr[i][0] << (length - 2) << arr[i][length - 1] << endl;
        }
        else
            cout << arr[i] << endl;
    }
}