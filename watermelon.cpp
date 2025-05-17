#include <iostream>
using namespace std;

int main()
{
    int w, count = 0;
    cin >> w;

    for (int i = 1; i < w; i++)
    {
        if ((i % 2 == 0) && ((w - i) % 2 == 0))
        {
            count++;
        }
        else
            continue;
    }
    if (count >= 1)
    {
        cout << "Yes";
    }
    else
        cout << "No";
}