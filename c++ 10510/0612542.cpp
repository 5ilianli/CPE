#include <iostream>
#include<cstdio>

using namespace std;

int main(void)
{
    int num,index=0;
    cin>>num;
    getchar();

    while(index<num){
        int digit;
        cin>>digit;
        int a[digit][2],sum[digit];
        for(int i=0;i<digit;i++)
            for(int j=0;j<2;j++)
                a[i][j]=0;
        for(int i=0;i<digit;i++)
            sum[i]=0;
        for(int i=0;i<digit;i++)
            for(int j=0;j<2;j++)
            cin>>a[i][j];

        int carry=0;
        for(int i=digit-1;i>=0;i--){
           sum[i]=(a[i][0]+a[i][1]+carry)%10;
           if((a[i][0]+a[i][1]+carry)>=10)
            carry=1;
           else
            carry=0;
        }
        if(carry==1)
            cout<<"1";
        for(int i=0;i<digit;i++)
            cout<<sum[i];

        if(index+1==num)
          cout<<endl;
        else
          cout<<endl<<endl;
        index++;
    }

    return 0;
}
