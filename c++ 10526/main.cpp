#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    char a[251],c[251];

    while(cin>>a>>c){
        int sum[505]={0},b[251]={0},d[251]={0};
        int j=0;
        for(int i=strlen(a)-1;i>=0;i--)
            b[j++]=a[i]-'0';
        j=0;
        for(int i=strlen(c)-1;i>=0;i--)
            d[j++]=c[i]-'0';
        int index;
        if(strcmp(a,c)){
            for(int x=0;x<strlen(c);x++){
            index=x;
            for(int y=0;y<strlen(a);y++){
               sum[index]+=d[x]*b[y];
               index++;
            }
          }
        }else{
            for(int x=0;x<strlen(a);x++){
            index=x;
            for(int y=0;y<strlen(c);y++){
               sum[index]+=b[x]*d[y];
               index++;
            }
          }
        }


        for(int i=0;i<index;i++){
            if(sum[i]/10){
                sum[i+1]+=sum[i]/10;
                sum[i]%=10;
            }
        }
        for(int i=index-1;i>=0;i--)
            cout<<sum[i];
        cout<<endl;
    }

    return 0;
}
