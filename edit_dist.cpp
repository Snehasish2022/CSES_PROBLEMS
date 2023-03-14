#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int n1 = a.size();
    int n2 = b.size();
    vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, 1e9));
    for (int i = 0; i <= n1; i++)
    {
        dp[i][0] = i;
    }
    for (int i = 0; i <= n2; i++)
    {
        dp[0][i] = i;
    }
    for (int i = 1; i <= n1; i++)
    {
        for (int j = 1; j <= n2; j++)
        {
            if (a[i - 1] == b[i - 1])
            {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else
            {
                int x = 1 + dp[i - 1][j];
                int y = 1 + dp[i][j - 1];
                int z = 1 + dp[i - 1][j - 1];
                dp[i][j] = min(x, min(y, z));
            }
        }
    }
    cout << dp[n1][n2] << endl;
    return 0;
}