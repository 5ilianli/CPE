#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main(void)
{
    long long int arr[11]={5,10,20,50,100,200,500,1000,2000,5000,10000};
    //這行聲明只有dp[0]=1,其餘都是0喔
    long long int dp[30005]={1};

    for(int i=0;i<11;i++){
        //這裡會聲明j=arr[i],是因為只有數值大於等於arr[i[的時候,才有辦法用錢幣,
        //且只要把付過金額[j-arr[i]的次數相加到現在要付的金額j就好,
        //這樣就是把付錢的方法相加了!!!
        for(int j=arr[i];j<=30000;j+=5){
            dp[j]+=dp[j-arr[i]];
        }
    }

    int a,b;
    //對於浮點數轉換的誤差,直接用scanf來解決
    while(scanf("%d.%2d",&a,&b),a||b){
        int cn=a*100+b;
        cout<<setw(6)<<fixed<<setprecision(2)<<cn/100.0<<setw(17)<<dp[cn]<<endl;
    }

    return 0;
}
/*
#include<stdio.h>

int main()
{
    long long dp[30005] = {1};
    long long possible[15] = { 5, 10, 20, 50,
                               100, 200, 500,
                               1000, 2000, 5000,
                               10000};
    int i, j;
    for( i = 0 ; i < 11 ; i++ )
        for( j = possible[i] ; j <= 30000 ; j++ )
            dp[j] += dp[j-possible[i]];


    int money1, money2;
    while( scanf( "%d.%d", &money1, &money2 ) != EOF && !( money1 == 0 && money2 == 0 ) )
        printf( "%3d.%02d%17lld\n", money1, money2, dp[money1*100+money2] );

    return 0;
}
*/
