#include<iostream>
#include<math.h>
using namespace std;

int is_integer(double x);

int main(void)
{
    int a,b,i=0;

    cin>>a>>b;
    while(a!=0&&b!=0){
        while(a<=b)
        {
            if(is_integer(sqrt(a)))
                i++;
            a++;
        }
        cout<<i<<endl;
        i=0;
        cin>>a>>b;
    }

    return 0;
}

int is_integer(double x)
{
    return x==(int)x;
}
