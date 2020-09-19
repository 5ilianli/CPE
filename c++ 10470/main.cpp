#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(void)
{
    int num;
    cin>>num;
    while(num>0){
        char a[16],b[16];
        cin>>a;
        getchar();
        cin>>b;
        if(strcmp(a,b)==0)
            cout<<"=\n";
        else if(strcmp(a,b)>0)
            cout<<">\n";
        else
            cout<<"<\n";
        num--;
    }

    return 0;
}
