#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> pages(n);
    vector<int> price(n);
    for (auto &i : price)
    {
        cin >> i;
    }
    for (auto &i : pages)
    {
        cin >> i;
    }
    vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= x; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (j >= price[i - 1])
            {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - price[i - 1]] + pages[i - 1]);
            }
        }
    }
    cout << dp[n][x] << endl;
}