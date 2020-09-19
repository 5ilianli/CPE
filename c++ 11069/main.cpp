#include<iostream>
#include<algorithm>
using namespace std;
int N,M;

bool compare(int a,int b)
{
    int aOdd=abs(a%2),bOdd=abs(b%2);

    if(a%M!=b%M)
        return a%M<b%M;
    else if(aOdd!=bOdd)
        return aOdd>bOdd;
    else if(aOdd)
        return a>b;
    else
        return a<b;


    return a>b;
}

int main(void)
{
    int a[10005];

    while(cin>>N>>M&&N!=0&&M!=0){
        for(int i=0;i<N;i++)
            cin>>a[i];
        sort(a,a+N,compare);
        cout<<N<<" "<<M<<endl;
        for(int i=0;i<N;i++)
            cout<<a[i]<<endl;
    }
    cout<<"0 0";

    return 0;
}
