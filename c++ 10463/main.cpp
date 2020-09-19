#include <iostream>
using namespace std;

int main(void)
{
    long int a,b;

    while(cin>>a>>b)
    {
        if(a<0&&b<0)
            break;
        long int sum=0;
        a--;
        while(a>0){
            sum=sum-(a/10)*45-(a%10+1)*(a%10)/2;
            a/=10;
        }
        while(b>0){
            sum=sum+(b/10)*45+(b%10+1)*(b%10)/2;
            b/=10;
        }

        cout<<sum<<endl;
    }
    return 0;
}
