#include <iostream>
using namespace std;

int main(void)
{
    int vtotal,v0;

    while(cin>>vtotal>>v0&&vtotal&&v0){
        int r=vtotal%(2*v0);
        if(r==v0){
            cout<<0<<endl;
        }else if(r<v0){
            cout<<vtotal/(2*v0)<<endl;
        }else{
            cout<<vtotal/(2*v0)+1<<endl;
        }
    }

    return 0;
}
