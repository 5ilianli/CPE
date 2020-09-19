#include <iostream>
using namespace std;
long int f91(long int a);
int main(void)
{
    long int a;

    while(cin>>a&&a!=0){
        long int original=a;
        long int b;
        b=f91(a);
        cout<<"f91("<<original<<") = "<<b<<endl;
    }

    return 0;
}

long int f91(long int a)
{
    if(a>=101)
        return (a-10);
    else
        return f91(f91(a+11));
}
