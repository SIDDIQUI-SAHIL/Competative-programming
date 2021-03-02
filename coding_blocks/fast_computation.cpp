#include <bits/stdc++.h>
using namespace std;
void matt(string str1, string str2)
{
    int n = str1.length();
    int m = str2.length();
    for (int i = 0; i < n; i++)
    {
        if (str1[i] != str2[i])
        {
            cout << '1';
        }
        else
        {
            cout << '0';
        }
    }
    cout << endl;
    return;
}
int main()
{
    int t;
    cin >> t;
    cin.get();
    while (t != 0)
    {
        string str1;
        string str2;
        getline(cin, str1, ' ');
        getline(cin, str2);
        matt(str1, str2);
        t--;
    }
    return 0;
}
