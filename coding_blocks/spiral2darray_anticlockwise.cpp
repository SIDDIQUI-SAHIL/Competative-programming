#include <bits/stdc++.h>
using namespace std;
void spiralprint(int a[][1000], int m, int n)
{
    int startcol = 0;
    int startrow = 0;
    int endcol = n - 1;
    int endrow = m - 1;
    while (startrow <= endrow and startcol <= endcol)
    {

        //first col
        for (int i = startrow; i <= endrow; i++)
        {
            cout << a[i][startcol] << ", ";
        }
        startcol++;

        //endrow
        for (int i = startcol; i <= endcol; i++)
        {
            cout << a[endrow][i] << ", ";
        }
        endrow--;

        //endcol
        if (endcol >= startcol)
        {
            for (int i = endrow; i >= startrow; i--)
            {
                cout << a[i][endcol] << ", ";
            }
            endcol--;
        }

        //startrow
        if (startrow <= endrow)
        {
            for (int i = endcol; i >= startcol; i--)
            {
                cout << a[startrow][i] << ", ";
            }
            startrow++;
        }
    }
    cout << "END";
}
int main()
{
    int m, n;
    cin >> m >> n;
    int a[1000][1000];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    spiralprint(a, m, n);
    return 0;
}