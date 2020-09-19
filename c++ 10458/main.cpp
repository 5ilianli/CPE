#include <iostream>
#include<cstdio>
using namespace std;

int main(void)
{
    char original[1000];
    char ch;

    while(1){
        int i=0;
        int sum=0,degree=0;
        original[i]=getchar();
        if(i==0&&original[i]=='0')
            break;
        i++;
        while((ch=getchar())!='\n')
            original[i++]=ch;
        original[i]='\0';
        i--;
        while(i>=0)
            sum+=original[i--]-'0';
        if(sum%9==0)
            degree++;

        if(sum==9)
            cout<<original<<" is a multiple of 9 and has 9-degree 1.\n";
        else if(sum%9==0){
            int rsum=0;
            while(rsum!=9){
                rsum=0;
                while(sum!=0){
                   rsum+=sum%10;
                   sum/=10;
                }
                if(rsum%9==0)
                   degree++;
                sum=rsum;
            }
            cout<<original<<" is a multiple of 9 and has 9-degree "<<degree<<".\n";
        }else
           cout<<original<<" is not a multiple of 9.\n";
    }

    return 0;
}
