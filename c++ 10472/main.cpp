#include <iostream>
using namespace std;

int main(void)
{
    int num;
    cin>>num;

    while(num--){
        int a,b;
        cin>>a>>b;
        int Count=0; // count number of show
        while(a>=b){
            a-=(b-1); // candidate minus (the cook joiner-1) since one will win
            Count++;
        }
        if(a==1) // only one winner
            cout<<Count<<endl;
        else
            cout<<"cannot do this\n";
    }

    return 0;
}
