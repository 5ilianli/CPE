#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;

int main(void)
{
    char c,k=0;//k=0表示k存入'\0'
    //不要設輸入字串長度,而是針對一個 個字元去做處理
    //因為測資的字串長度可能非常地長
    while(cin.get(c)){
        if(c!='"')
            cout<<c;
        else if(++k%2)//k在數字表示為1
            cout<<"``";
        else//k在數字表示為0
            cout<<"''";
    }

    return 0;
}
/*
char c,str[100001];
    while(cin.getline(str,100001,'\n')){
        int i=0,len=strlen(str);
        bool flag=false;
        while(i<len){
        c=str[i];
        if(c=='"'&&!flag){
            cout<<"``";
            flag=true;
        }else if(c=='"'&&flag){
            cout<<"''";
            flag=false;
        }else cout<<c;
            i++;
        }
        cout<<endl;
    }
*/
