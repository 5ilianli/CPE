#include <iostream>
using namespace std;

int addf(int a);

int main(void)
{
    int a,b,sum;

    while(cin>>a>>b)
    {
        sum=0;
        if(a<0&&b<0)
            break;
        while(a<=b)
        {
            sum+=addf(a);
            a++;
        }
        cout<<sum<<endl;
    }
    return 0;
}

int addf(int a)
{
    if(a==0)
        return 0;
    else if(a%10)
        return a%10;
    else
        return addf(a/10);
}
