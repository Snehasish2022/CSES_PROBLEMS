#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<vector<bool>> dp(n + 1, vector<bool>(1e5 + 1, false));
    dp[0][0] = true;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= 1e5; j++)
        {
            dp[i][j] = dp[i - 1][j];
            int left = j - a[i - 1];
            if (left >= 0 && dp[i - 1][left])
            {
                dp[i][j] = true;
            }
        }
    }
    vector<int> possible;
    for (int i = 1; i <= 1e5; i++)
    {
        if (dp[n][i])
        {
            possible.push_back(i);
        }
    }
    cout << possible.size() << endl;
    for (auto &i : possible)
    {
        cout << i << " ";
    }
    return 0;
}