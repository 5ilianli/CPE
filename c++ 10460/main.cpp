#include<iostream>
#include<stdio.h>
#include<cstdlib> /* to use abs() */
using namespace std;

int check(char a[],int index);

int main(void)
{
    int i=0,isMultiple;
    char ch;

    while(1)
    {
        char digits[1001];
        i=0;
        ch=getchar();
        if(i==0&&ch=='0')
            break;
        digits[i++]=ch;
        while((ch=getchar())!='\n')
            digits[i++]=ch;
        isMultiple=check(digits,i);
        int j=0;
        while(j<i)
            cout<<digits[j++];
        if(isMultiple)
            cout<<" is a multiple of 11.\n";
        else
            cout<<" is not a multiple of 11.\n";
    }

    return 0;
}

int check(char a[],int index)
{
    int odd=0,even=0;
    if((index-1)%2==0){ /* to check whether it's odd digits or even*/
        for(int i=0;i<index;i++){
            if(i%2==0)
              even+=(a[i]-'0');
            else
              odd+=(a[i]-'0');
        }
    }else{
        for(int i=0;i<index;i++){
            if(i%2==0)
              odd+=(a[i]-'0');
            else
              even+=(a[i]-'0');
        }
    }
    if(abs(odd-even)%11==0)
        return 1;
    else
        return 0;
}
