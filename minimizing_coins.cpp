#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int solve(vector<int>&dp,int coins[],int n,int x){
    if(x==0){
        return 0;
    }
    if(x<0){
        return 9999999;
    }
    if(dp[x]!=-1){
        return dp[x];
    }
    int hello=9999999;
    for(int i=0;i<n;i++){
        hello=min(hello,1+(solve(dp,coins,n,x-coins[i])));
    }
    dp[x]=hello;
    return dp[x];
}
int main(){
    int n,x;
    cin>>n>>x;
    int coins[n];
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    vector<int>dp(x+1,-1);
    int ans=solve(dp,coins,n,x);
    if(ans!=9999999){
        cout<<ans<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}