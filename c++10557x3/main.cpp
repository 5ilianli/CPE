#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#define FUNC(x) ((x)*(x)+(x)+(41))
using namespace std;

bool isPrime(int n)
{
    //這裡先%2的條件很重要,這等於是將藥測的總數減去一半
    if(n%2==0)
        return false;
    else{
        //d=3很重要,因為接下來是5,7,9.....
        for(int d=3;d*d<=n;d+=2)
            if(n%d==0)
               return false;
        return true;
    }
}

int main(void)
{
    int a,b;

    while(cin>>a>>b){
        double diff=abs(b-a)+1.0;
        int num=0;
        for(int i=a;i<=b;i++){
            int tmp=FUNC(i);
            //其實有時候也不用特意存成質數表,直接測試是否為質數,也是一種可行的方式
            if(isPrime(tmp))
                num++;
        }
        //這裡的精度要加上0.00000005喔
        cout<<fixed<<setprecision(2)<<double(num/diff+0.00000005)*100.0<<endl;
    }

    return 0;
}
