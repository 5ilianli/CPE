#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
    int n;
    cin>>n;
    //硂肈程螟碞Α,﹚璶癘ㄓΤ//***よ
    getchar();//***

    while(n--){
        int num;
        cin>>num;
        int a[num][2],t[num+1];
        for(int i=0;i<num;i++)
            cin>>a[i][0]>>a[i][1];
        for(int i=0;i<=num;i++)
            t[i]=0;

        for(int i=num-1;i>=0;i--){
            int tmp=a[i][0]+a[i][1];
            t[i+1]+=tmp;
            //р场Ч∕﹚琌秈!
            if(t[i+1]>=10){
               t[i]++;
               t[i+1]%=10;
            }
        }

        if(t[0]!=0)
            cout<<t[0];
        for(int i=1;i<=num;i++)
            cout<<t[i];
        //whilen程近,ㄤ龟n琌0(nwhile柑ゑЧ琌箂搭),
        //┮代刚璶み!
        if(n-1>=0)
            cout<<endl<<endl;//***
        //玡 endl琌outputぇ︽,τendl琌inputぇ玡︽
        else
            cout<<endl;//***
    }

    return 0;
}
