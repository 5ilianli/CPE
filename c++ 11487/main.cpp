#include <iostream>
using namespace std;

int F[5005][1001]={0}; //must declare int F[5005][1001]={0}; globally

int main(void)
{
    F[1][0]=1;
    F[2][0]=1;

    for(int i=3;i<=5000;i++){
        for(int j=0;j<=1000;j++)
            F[i][j]=F[i-1][j]+F[i-2][j];
        for(int j=0;j<=1000;j++){
            if(F[i][j]>9){
                F[i][j+1]+=F[i][j]/10;
                F[i][j]%=10;
            }
        }
    }
    int t;
    while(cin>>t){
        int endNum=1000;
        while(endNum>0&&!F[t][endNum])
            endNum--;
        for(int i=endNum;i>=0;i--)
            cout<<F[t][i];
        cout<<endl;
    }


    return 0;
}
