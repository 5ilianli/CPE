#include <iostream>
using namespace std;

int main(void)
{
    int num;
    cin>>num;

    while(num>0){
        int farmer;
        cin>>farmer;
        long long int a[farmer][3];
        for(int i=0;i<farmer;i++)
            for(int j=0;j<3;j++)
            a[i][j]=0;
        for(int i=0;i<farmer;i++)
            for(int j=0;j<3;j++)
            cin>>a[i][j];
        long long int sum=0;
        for(int i=0;i<farmer;i++)
            sum+=a[i][0]*a[i][2];
        cout<<sum<<endl;
        num--;
    }

    return 0;
}
