#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main(void)
{
    char str[1001];

    while(cin>>str){
        if(str[0]=='0')
           break;
        int a=strlen(str),odd=0,even=0;
        if(a%2==1){
           for(int i=0;i<a;i++){
               if(i%2==0)
                  even+=str[i]-'0';
               else
                  odd+=str[i]-'0';
           }
        }else{
               for(int i=0;i<a;i++){
               if(i%2==1)
                  even+=str[i]-'0';
               else
                  odd+=str[i]-'0';
           }
        }

        if(abs(odd-even)%11==0)
           cout<<str<<" is a multiple of 11.\n";
        else
           cout<<str<<" is not a multiple of 11.\n";
    }

    return 0;
}
