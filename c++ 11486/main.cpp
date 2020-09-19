#include <iostream>
using namespace std;

int main(void)
{
    int num,Case=1;
    cin>>num;

    while(num--){
        int walls;
        cin>>walls;
        int a[walls];
        for(int i=0;i<walls;i++)
            a[i]=0;
        for(int i=0;i<walls;i++)
            cin>>a[i];
        int high=0,low=0,start=0;
        while(start+1<walls){
            if(a[start]<a[start+1])
                high++;
            else if(a[start]>a[start+1])
                low++;
            start++;
        }
        cout<<"Case "<<Case<<": "<<high<<" "<<low<<endl;
        Case++;
    }

    return 0;
}
