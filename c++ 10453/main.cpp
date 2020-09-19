#include <iostream>
using namespace std;

int main(void)
{
    int a,i,b,c;

    cin>>a;

    for(i=1;i<=a;i++)
    {
        cin>>b;
        cin>>c;

        if(b%2==0)
          b++;

        if(c%2==0)
          c--;

        int n,sum;

        n=(c-b)/2+1;
        sum=(c+b)*n/2;
        cout<<"Case "<<i<<": "<<sum<<endl;
    }

    return 0;
}
