#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    long int n;

    while(cin>>n,n){
        int a[n];
        for(int i=0;i<n;i++)
            a[i]=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n;i++){
            cout<<a[i];
            if(i+1!=n)
                cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
