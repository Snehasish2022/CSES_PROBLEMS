#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dp[1005][1005];
    int mod=1e9+7;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char c;
            cin>>c;
            if(i*j==1 && c!='*'){
                dp[i][j]=1;
            }
            else if(c=='*'){
                dp[i][j]=0;
            }
            else{
                dp[i][j]+=(dp[i-1][j]+dp[i][j-1])%mod;
            }
            
            
        }
    }
    cout<<dp[n][n]<<endl;
}