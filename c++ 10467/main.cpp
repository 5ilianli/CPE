#include <iostream>
using namespace std;

int main(void)
{
    int num;
    cin>>num;

    while(num--){
        int x,y;
        cin>>x>>y;
        cout<<(x/3)*(y/3)<<endl;
    }

    return 0;
}
