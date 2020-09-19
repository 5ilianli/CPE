#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    /*
    int a=10000,i;
    for(i=1;a!=0;i++) a/=2;
    cout<<i<<endl;
    */

    int n;
    cin>>n;

    while(n--){
        char a[15],b[15];
        cin>>a>>b;
        int la=strlen(a),lb=strlen(b),aa=0,bb=0;
        for(int i=0;i<la;i++)
            aa=aa*2+(a[i]-'0');
        for(int i=0;i<lb;i++)
            bb=bb*2+(b[i]-'0');
        if(aa<bb){
            int tmp=aa;
            aa=bb;
            bb=aa;
        }
        while(aa>3)
            aa-=bb;
        if(aa==3)
           cout<<"All you need is love!\n";
        else
           cout<<"Love is not all you need!\n";
    }

    return 0;
}
