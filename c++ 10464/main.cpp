#include <iostream>
using namespace std;

int main(void)
{
    int num;

    while(cin>>num&&num>0){
        long int female=1,male=0,fb=0,mb=0;
        while(num--){
            fb=male+1;
            mb=male+female;
            male=mb;
            female=fb;
        }
        cout<<male<<" "<<male+female<<endl;
    }

    return 0;
}
