#include <iostream>
using namespace std;

int dp[1000001]={0};

int main(void)
{
    int check=1;

    for(int i=2;i<=1000000;i++){
        for(int d=2;d*d<=i;d++)
            if(i%d==0){
               check=0;
               break;
            }
        if(check)
            dp[i]++;
        check=1;
    }


    int n;
    cin>>n;

    while(n--){
        int a,b,Count=0;
        cin>>a>>b;
        for(int i=a;i<=b;i++){
            int x=0;
            if(dp[i]){
                int j=i;
                while(j){
                    x+=j%10;
                    j/=10;
                }
            }
            if(dp[x])
                Count++;
        }
        cout<<Count<<endl;
    }


    return 0;
}
