#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int addf(char a[],int index);
int carry(int a[],int b[],int x,int y);

int main(void)
{
    char add1[11],add2[11];
    int x,y,i,checkX,checkY;
    char ch;

    for(;;)
    {
        cin>>add1>>add2;

        x=strlen(add1);
        checkX=addf(add1,x); /* has already inverse the order */
        y=strlen(add2);
        checkY=addf(add2,y); /* has already inverse the order */

        if((checkX==-1)&&(checkY==-1))
            break;

        int Add1[11]={0},Add2[11]={0}; /* must declare everytime to clear the array */

        for(int i=0;i<x;i++)
            Add1[i]=add1[i]-'0';
        for(int i=0;i<y;i++)
            Add2[i]=add2[i]-'0';

        x=strlen(add1); /* a good way to check the number of element */
        y=strlen(add2);

        i=carry(Add1,Add2,x,y);
        if(i==0)
            cout<<"No carry operation.\n";
        else{
            if(i>1)
              cout<<i<<" carry operations.\n";
            else
              cout<<i<<" carry operation.\n";
        }
    }

    return 0;
}

int addf(char a[],int index)
{
    if(a[0]=='0'&&index==1)
        return -1;

    char *p=a,*q=a; /* a good way to inverse the order of the array */
    char temp;

    for(p=a,q=a+index-1;p<q;p++,q--)
    {
        temp=*p;
        *p=*q;
        *q=temp;
    }

    return 1;
}

int carry(int a[],int b[],int x,int y)
{
    int t=0;

    if(x>y){
        for(int i=0;i<x;i++)
        {
            int more=0;
            more=(a[i]+b[i])/10;
            a[i+1]+=more; /* if carry!=0, don't forget to add carry to another element */
            t+=more;
        }
    }else{
        for(int i=0;i<y;i++)
        {
            int more=0;
            more=(a[i]+b[i])/10;
            b[i+1]+=more;
            t+=more;
        }
    }
    return t;
}
