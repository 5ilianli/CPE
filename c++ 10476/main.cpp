#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    int num;
    cin>>num;

    while(num--){
        char s[1001];
        cin>>s;
        int setNum;
        cin>>setNum;
        int a[setNum];
        for(int i=0;i<setNum;i++)
            a[i]=0;
        for(int i=0;i<setNum;i++)
            cin>>a[i];
        int ans=1;
        for(int i=0;i<setNum;i++){
            //這是長除法程式
            int r=0;
            for(int j=0;j<strlen(s);j++){
                r=(r*10+s[j]-'0')%a[i];
            }
            if(r!=0){
                ans=0;
                break;
            }
        }
        cout<<s<<" - ";
        if(ans)
            cout<<"Wonderful.\n";
        else
            cout<<"Simple.\n";

    }


    return 0;
}

/* old idea

    int num;
    cin>>num;

    while(n--){
        char s[1001];
        cin>>s;
        int setNum;
        cin>>setNum;
        int a[setNum];
        for(int i=0;i<setNum;i++)
            a[i]=0;
        for(int i=0;i<setNum;i++)
            cin>>a[i];
        int pass=0;
        for(int i=0;i<setNum;i++){
            switch(a[i]){
            case 1:{pass++;break;}
            case 2:{
                int sum=0;len=strlen(s);
                sum=s[len-1]-'0';
                sum%2?:pass++;
                break;
            }
            case 3:{
                int sum=0;
                for(int j=0;j<strlen(s);j++)
                    sum+=(s[j]-'0');
                sum%3?:pass++;
                break;
            }
            case 4:{
                int sum=0,len=strlen(s);
                sum=(s[len-1]-'0')+(s[len-2]-'0')*10;
                sum%4?:pass++;
                break;
            }
            case 5:{
                int sum=0,len=strlen(s);
                sum=s[len-1]-'0';
                sum%5?:pass++;
                break;
            }
            case 6:{
                int sum=0;len=strlen(s);
                sum=s[len-1]-'0';
                sum%2?break:sum=0;
                for(int j=0;j<strlen(s);j++)
                    sum+=(s[j]-'0');
                sum%3?:pass++;
                break;
            }
            case 7:{

            }
            }

        }
    }

*/
