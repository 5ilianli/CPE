#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int n,q,Case=1;

    while(cin>>n>>q&&n&&q){
        int a[n];
        for(int i=0;i<n;i++)
            a[i]=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int ask[q];
        for(int i=0;i<q;i++)
            ask[i]=0;
        for(int i=0;i<q;i++)
            cin>>ask[i];
        cout<<"CASE# "<<Case<<":"<<endl;
        for(int i=0;i<q;i++){
            int j;
            for(j=0;j<n;j++)
            if(ask[i]==a[j]){
                cout<<ask[i]<<" found at "<<j+1<<endl;
                break;
            }
            if(j==n)
                cout<<ask[i]<<" not found\n";
        }
        Case++;
    }

    return 0;
}
