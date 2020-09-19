#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
    int a;

    while(cin>>a&&a!=0)
    {
        int factor=0,aCopy;
        int limit;
        limit=sqrt(a); /* directly test factor from 2 to sqrt(a) */
        aCopy=a;
        for(int i=2;i<=limit;i++)
        {
            if(a%i==0){
                factor++;
                while(a%i==0)
                    a/=i;
            }
        }
        if(a!=1) /* it means that a itself is also a factor */
            factor++;
        cout<<aCopy<<" : "<<factor<<endl;
    }

    return 0;
}
