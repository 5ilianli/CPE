#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    char astr[251],bstr[251];

    while(cin>>astr>>bstr){
        int sum[501]={0};
        int al=strlen(astr),bl=strlen(bstr);
        int num=0,index;//由num為起點,index紀錄目前最高位
        if(al>=bl){
           for(int i=bl-1;i>=0;i--){
              index=num;
              for(int j=al-1;j>=0;j--){
                 sum[index++]+=(astr[j]-'0')*(bstr[i]-'0');
              }
              num++;
           }
        }else{
            for(int i=al-1;i>=0;i--){
              index=num;
              for(int j=bl-1;j>=0;j--){
                 sum[index++]+=(astr[i]-'0')*(bstr[j]-'0');
              }
              num++;
           }
        }
        for(int i=0;i<index;i++)
           if(sum[i]>=10){
              sum[i+1]+=sum[i]/10;//這裡要小心!已經不是sum[i+1]++而已喔
              sum[i]%=10;
           }
        int i;
        for(i=index;sum[i]==0;i--) ;//不要印出開頭多餘的0
        if(i<0){
            cout<<0<<endl;
            continue;
        }
        for(;i>=0;i--)
            cout<<sum[i];

        cout<<endl;
    }

    return 0;
}
