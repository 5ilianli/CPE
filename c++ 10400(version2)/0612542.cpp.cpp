#include <iostream>
using namespace std;

unsigned long f(unsigned long a);

int main(void)
{
    unsigned long a,b,aa,bb,cc;
    unsigned long c=0,d=0;

    while(cin>>a>>b)
    {
        cc=a;
        bb=b;
        if(a>b)
        {
            aa=a;
            a=b;
            b=aa;
        }
        while(a<=b)
        {
            c=f(a);
            if(c>d)
               d=c;
            a++;
        }
        cout<<cc<<" "<<bb<<" "<<d<<endl;
        d=0;
    }

    return 0;
}

unsigned long f(unsigned long a)
{
    unsigned long b=0;
    while(a!=1)
    {
        if(a%2!=0)
        {
            a=3*a+1;
            b++;
        }else{
            a=a/2;
            b++;
        }
    }
    return b+1;
}
