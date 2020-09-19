#include <iostream>
using namespace std;

int main(void)
{
    /*
    long long int a= 2147483647,i;

    for(i=1;a;i++)
        a/=2;
    cout<<i<<endl;
    */

    int n;

    while(cin>>n,n){
        int tmp=n,num;
        for(num=1;tmp;num++)
            tmp/=2;

        int a[num],p=0;
        for(int i=0;i<num;i++){
            a[i]=n%2;
            if(a[i]==1)
                p++;
            n/=2;
        }
        cout<<"The parity of ";
        for(int i=num-2;i>=0;i--)
            cout<<a[i];

        cout<<" is "<<p<<" (mod 2).\n";

    }

    return 0;
}
