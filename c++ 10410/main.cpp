#include<iostream>
#include<algorithm>
#include<cstring>
#include<stdio.h> /* to use getchar() */
using namespace std;

bool compare(int a,int b)
{
    return a>b;
}

int main(void)
{
    char str[1001];
    int blank=0; /* for the special output form */

    while(cin>>str){
           if(blank)
           cout<<endl;
           int ascii[96]={0},check[96]={0};
           int num=0;
           for(int i=0;i<strlen(str);i++){
              int index=str[i]-'!';
              ascii[index]++;
              check[index]++;
              num++;
           }

           sort(check,check+96,compare);

           for(int i=0;i<96;i++){
               if(check[i]==0){
                 num=i-1;
                 break;
               }
           }

           for(int i=num;i>=0;i--)
            for(int j=95;j>=0;j--)
              if(check[i]==ascii[j]){
                 cout<<('!'+j)<<" "<<check[i]<<endl;
                 ascii[j]=0;
                 break;
              }
           blank=1;
    }

    return 0;
}
/* old idea */
/*int sort(int a[],int check[]);*/
/*
int sort(int a[],int check[])
{
    int temp,num=0;

    for(int i=0;i<95;i++){
        check[i]=a[i];
        if(a[i]!=0)
           num++;/ to reduce the range of check[] (we only have to check nonzero number)/
    }

    for(int i=0;i<95;i++)
        for(int j=i+1;j<95;j++)
        if(check[i]<check[j]){/ to print the number from most to least /
            temp=check[i];
            check[i]=check[j];
            check[j]=temp;
        }
    return num-1;/ to convert int to index /
}
*/
