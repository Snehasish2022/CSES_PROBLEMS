#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    char temp = s[0];
    int count = 1;
    int maxi = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (temp == s[i])
        {
            count++;
            maxi = max(maxi, count);
        }
        else
        {
            count = 1;
            temp = s[i];
        }
    }
    cout << maxi << endl;
}