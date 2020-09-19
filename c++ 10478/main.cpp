#include<iostream>
#include<cstdio>
#include<stdio.h>
using namespace std;

int main(void)
{
    int num,TEST=1;
    cin>>num;

    while(TEST<=num){
        int Size;
        int check=0;
        char temp[1000];

        scanf("%s%s%d",temp,temp,&Size);

        long long int a[Size][Size];
        for(int i=0;i<Size;i++)
            for(int j=0;j<Size;j++)
            a[i][j]=0;

        for(int i=0;i<Size;i++)
            for(int j=0;j<Size;j++)
            cin>>a[i][j];

        if(Size%2!=0){
            int core=(Size-1)/2;
            if(a[core][core]<0)
              check++;
        }
        if(check==0){
            for(int i=0;i<Size;i++)
            for(int j=0;j<Size;j++)
            if(a[i][j]!=a[Size-1-i][Size-1-j]){
                check++;
                break;
            }
        }

        if(check==0)
            cout<<"Test #"<<TEST<<": Symmetric.\n";
        else
            cout<<"Test #"<<TEST<<": Non-symmetric.\n";
        TEST++;
    }

    return 0;
}
