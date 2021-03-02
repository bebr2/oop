#include <iostream>
#include <algorithm>
#include "tou.h"
using namespace std;


int main()
{

    sort(x, x + 9, cmp);
    int min = 0;
    int l;
    int y[n];
    for (int i = 0; i < n; i++)
    {
        y[i] = 0;
    }

    for (int i = 0; i < m; i++)
    {
        int k = 0;
        for (int j = 0; j < n; j++)
        {
            if (y[j] == 0)
            {
                y[j] = x[i];
                min = x[i];
                l = i;
                k = 1;
                break;
            }
        }
        if (k == 1)
            continue;
        y[l] += x[i];
        min = y[0];
        for (int p = 0; p < n; p++)
        {
            if (y[p] <= min)
            {
                l = p;
                min = y[p];
            }
        }
    }
    int max = y[0];
    for (int p = 0; p < n; p++)
    {
        if (y[p] >= max)
        {
            max = y[p];
        }
    }
    cout << max;
    return 0;
}