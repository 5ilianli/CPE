#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    char a[1000],b[1000];
    char sub[1000];

    while(cin>>a>>b){
       for(int k=0;k<1000;k++)
         sub[k]='\0';
       int index=0,j,i;
       for(i=0;i<strlen(a);i++){
           for(j=index;j<strlen(b);j++){
              if(a[i]==b[j]){
                sub[i]=a[i];
                index=j+1;
                break;
              }
           }
       }
       sub[i]='\0';
       if(strcmp(sub,a)==0)
        cout<<"Yes\n";
       else
        cout<<"No\n";
    }


    return 0;
}
