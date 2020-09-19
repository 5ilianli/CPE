#include <iostream>
#include<cstring>
using namespace std;

int main(void)
{
    char str[1000001];
    int Case=1;

    while(cin>>str){
        int test;
        cin>>test;
        int a[test][2];
        for(int i=0;i<test;i++){
            a[i][0]=0;
            a[i][1]=0;
        }
        for(int i=0;i<test;i++)
            cin>>a[i][0]>>a[i][1];
        cout<<"Case "<<Case<<":"<<endl;

        int index=0;
        while(index<test){
            int minNum,maxNum;
            if(a[index][0]>a[index][1]){
                minNum=a[index][1];
                maxNum=a[index][0];
            }else{
                minNum=a[index][0];
                maxNum=a[index][1];
            }
            int detect=0;
            for(int i=minNum+1;i<=maxNum;i++)
            if(str[minNum]!=str[i]){
               detect++;
               break;
            }
            if(detect)
                cout<<"No\n";
            else
                cout<<"Yes\n";
            index++;
        }
        Case++;
    }

    return 0;
}
