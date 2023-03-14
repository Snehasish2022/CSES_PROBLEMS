#include<iostream>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int coins[n];
    long long mod=1e9+7;
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    long long  dp[1000001]={0};
    // cout<<dp[1];
    dp[0]=1;
    for(int i=0;i<n;i++){
        for(int w=1;w<=x;w++){
            if(w-coins[i]>=0){
                dp[w]+=dp[w-coins[i]];
                dp[w]%=mod;
            }
        }
    }
    cout<<dp[x]%mod<<endl;
}