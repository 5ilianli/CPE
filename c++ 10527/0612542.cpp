#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
    long int a;
    long int store[10000]={0};
    int i=0;

    cin>>a;
    store[i]=a;
    cout<<store[i]<<endl;
    i++;

    while(cin>>a){
        store[i++]=a;
        sort(store,store+i);
        if(i%2!=0)
            cout<<store[i/2]<<endl;
        else
            cout<<(store[i/2]+store[i/2-1])/2<<endl;
    }


    return 0;
}
