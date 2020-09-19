#include <iostream>
using namespace std;

int main(void)
{
    int num;
    cin>>num;

    while(num>0){
        int e,f,c;
        cin>>e>>f>>c;
        int thirsty=e/c;
        f=f+e/c+e%c;
        while(f>=c){
            thirsty+=f/c;
            f=f%c+f/c;
        }
        cout<<thirsty<<endl;
        num--;
    }

    return 0;
}
