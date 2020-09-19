#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int n;
    cin>>n;

    while(n--){
        int a;
        cin>>a;
        int b[a];
        for(int i=0;i<a;i++)
            cin>>b[i];
        sort(b,b+a);
        int mid=b[a/2],sum=0;
        for(int i=0;i<a;i++)
            sum+=abs(mid-b[i]);
        cout<<sum<<endl;
    }

    return 0;
}
