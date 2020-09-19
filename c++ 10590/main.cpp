#include <iostream>
#include <algorithm>
#include <cstring>
#include <sstream>
using namespace std;

//dp[i][j]表示i元(price)最多用j個硬幣(付錢)的方法數
long long dp[301][1001]={0};

int main(void)
{
    //construct a table
    dp[0][0]=1;
    for(int i=0;i<=300;i++) // 幣值
        for(int j=0;j+i<=300;j++) // price
            for(int k=1;k<=1000;k++) //總錢幣個數
                dp[j+i][k]+=dp[j][k-1];
    //input&output
    ios::sync_with_stdio(false);
    string line;
    int n[3];
    while(getline(cin,line)){
        stringstream ss(line);
        int i=0;
        while(ss>>n[i])
            i++;
        switch(i){
            case 1:{cout<<dp[n[0]][1000];break;}
            case 2:{cout<<dp[n[0]][n[1]];break;}
            case 3:{
                if(n[1]==0)
                    cout<<dp[n[0]][n[2]];
                else
                    cout<<(dp[n[0]][n[2]]-dp[n[0]][n[1]-1]);
                break;
            }
        }
        cout<<endl;
    }

    return 0;
}
