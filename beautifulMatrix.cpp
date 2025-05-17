#include <iostream>
using namespace std;

int main()
{
    int _i, _j, count = 0;
    int arr[5][5];

    // input matrix and save index of 1
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                _i = i;
                _j = j;
            }
        }
    }

    // adjust i
    while (_i != 2)
    {
        if (_i > 2)
        {
            _i--;
            count++;
        }
        else if (_i < 2)
        {
            _i++;
            count++;
        }
    }

    // adjust j
    while (_j != 2)
    {
        if (_j > 2)
        {
            _j--;
            count++;
        }
        else if (_j < 2)
        {
            _j++;
            count++;
        }
    }
    cout << count;
}