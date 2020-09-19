#include<iostream>
#include<stdlib.h>
using namespace std;

int main(void)
{
    int a,i=0,y,x;

    while(cin>>a)
    {
    int array[a],brray[a+1];
    x=0;
    i=0;
    while(i<a)
    {
        cin>>array[i];
        i++;
    }

    i=0;
    while(i<a+1)
    {
        brray[i]=0;
        i++;
    }

    for(i=0;i<a;i++)
    {
        if(i+1>=a)
            break;
        y=abs(array[i]-array[i+1]);
        brray[y]++;
        if(y>=a||brray[y]>1)
        {
            cout<<"Not jolly\n";
            x=1;
            break;
        }

    }

    if(x!=1)
        cout<<"Jolly\n";

    }

    return 0;
}
