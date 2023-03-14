#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    if (n <= 3)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        int start1, start2;
        if (n % 2 == 0)
        {
            start1 = n;
            start2 = n - 1;
        }
        else
        {
            start1 = n - 1;
            start2 = n;
        }
        int i = 2;
        while (i <= start1)
        {
            cout << i << " ";
            i += 2;
        }
        i = 1;
        while (i <= start2)
        {
            cout << i << " ";
            i += 2;
        }
    }
}