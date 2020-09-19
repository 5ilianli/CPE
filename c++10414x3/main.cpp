#include <iostream>
using namespace std;

//這題解到最後就是presentation error的問題了QQ
//還有,但後面不要沒事多印ㄧ個空格-->那就是ㄧ個presentation error!!!!

void b(long long int a){
     if(a/10000000!=0){
        cout<<a/10000000<<" kuti";
        if(a%10000000!=0)
           cout<<" ";
        b(a%10000000);
     }else if(a/100000!=0){
        cout<<a/100000<<" lakh";
        if(a%100000!=0)
           cout<<" ";
        b(a%100000);
     }else if(a/1000!=0){
        cout<<a/1000<<" hajar";
        if(a%1000!=0)
           cout<<" ";
        b(a%1000);
     }else if(a/100!=0){
        cout<<a/100<<" shata";
        if(a%100!=0)
           cout<<" ";
        b(a%100);
     }else if(a!=0)
        cout<<a;
}

int main(void)
{
    long long int n;//long long int 有19位
    int Case=1;

    while(cin>>n){
            cout<<Case<<". ";
            if(n==0)
               cout<<"0";
            else if(n/10000000!=0){
               b(n/10000000);
               cout<<" kuti ";
               b(n%10000000);
            }else
               b(n%10000000);
            Case++;
            cout<<endl;
    }

    return 0;
}
