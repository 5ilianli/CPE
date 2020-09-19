#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    char s[1000001];
    int i,j,k,len,flag;

    while(cin>>s){
        if(strcmp(s,".")==0)
           break;
        len=strlen(s);
        flag=0;
        for(i=1;i<=len;i++){
            if(len%i!=0)
                continue;
            flag=1;
            for(j=i;j<len&&flag==1;j+=i){
                for(k=0;k<i&&flag==1;k++)
                    if(s[k]!=s[j+k])
                    flag=0;
            }
            if(flag){
            cout<<len/i<<endl;
            break;
            }
        }
    }

    return 0;
}
