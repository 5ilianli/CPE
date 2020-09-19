#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    char str[1001];

    while(cin>>str){
        if(str[0]=='0') break;
        int n=0,len=strlen(str);
        for(int i=0;i<len;i++) n+=(str[i]-'0');
        if(n%9!=0) cout<<str<<" is not a multiple of 9.\n";
        else{
            //以下是depth的算法
            int num=1;
            while(n!=9){
                int tmp=n,m=0;
                while(tmp!=0){
                m+=tmp%10;
                tmp/=10;
                }
                n=m;
                num++;
            }
            cout<<str<<" is a multiple of 9 and has 9-degree "<<num<<"."<<endl;
        }

    }


    return 0;
}
