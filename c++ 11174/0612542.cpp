#include <iostream>
#include <cstring>
#include <iomanip>
#define MAX(x,y) (((x)>(y))?(x):(y));
using namespace std;

int dp[10005];

int main(void)
{
    int m,n,t;

    while(cin>>m>>n>>t){
        memset(dp,-1,sizeof(dp));
        dp[0]=0;
        for(int i=m;i<=t;i++)
           if(dp[i-m]!=-1)
             dp[i]=MAX(dp[i-m]+1,dp[i]);
//        for(int i=0;i<=t;i++)
//            cout<<setw(3)<<dp[i]<<" ";
//        cout<<endl;
        for(int i=n;i<=t;i++)
           if(dp[i-n]!=-1)
             dp[i]=MAX(dp[i-n]+1,dp[i]);
//        for(int i=0;i<=t;i++)
//            cout<<setw(3)<<dp[i]<<" ";
//        cout<<endl;
        if(dp[t]!=-1)
            cout<<dp[t]<<endl;
        else
            for(int i=t;i>=0;i--)
              if(dp[i]!=-1){
                cout<<dp[i]<<" "<<t-i<<endl;
                break;
             }
    }

    return 0;
}
