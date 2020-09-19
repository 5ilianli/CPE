#include <iostream>
#include <cstring>
using namespace std;


int main(void)
{
    char a[1000],b[1000];

    while(cin>>b>>a){
        int alen=strlen(a),blen=strlen(b);
        bool flag=false;

        //function 傳入char字串,不能用參數char str[],
        //要用char *str傳入,之後在function內就可以正常用str[]了
        int i=0,j=0;
        while(j<blen&&i<alen)
           if(a[i]==b[j]) {i++;j++;}
           else i++;

        if(j==blen) flag=true;

        if(flag) cout<<"Yes\n";
        else cout<<"No\n";
    }

    return 0;
}
