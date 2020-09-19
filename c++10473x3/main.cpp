#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main(void)
{
    int n;

    while(cin>>n,n){
        int tmp=n;
        while(tmp>9){
            int m=0;
            while(tmp!=0){
               m+=tmp%10;
               tmp/=10;
            }
            tmp=m;
        }
        cout<<tmp<<endl;
    }

    return 0;
}
