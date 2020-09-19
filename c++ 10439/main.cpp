#include <iostream>
using namespace std;

int main(void)
{
    int n,k;

    while(cin>>n>>k){
        int more=n;
        int total=n;
        while(more>=k){
            total+=more/k;
            more=more%k+more/k;
        }
        cout<<total<<endl;
    }

    return 0;
}
