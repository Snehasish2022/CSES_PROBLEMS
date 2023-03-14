#include<iostream>
#include<vector>
using namespace std;
int solve(int dp[],int n){
    int mod=1e9+7;
    dp[0]=1;
    for(int i=1;i<=n;i++){
        dp[i]=0;
        for(int j=1;j<=6;j++){
            if(i-j>=0){
                dp[i]+=dp[i-j];
                dp[i]%=mod;
            }
        }
    }
    return dp[n]%mod;
}
int main(){
    int n;
    cin>>n;
    int dp[n+1]={0};
    cout<<solve(dp,n);
}