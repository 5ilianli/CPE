#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
    long long int a,b;//用long long比較保險

    while(cin>>a>>b){
        cout<<abs(a-b)<<endl;
    }

    return 0;
}
