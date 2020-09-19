#include <iostream>
#include <map>
#include <cstring>
using namespace std;

int main(void)
{
    char key[3][13]={
    {'q','w','e','r','t','y','u','i','o','p','[',']','\\'},
    {'a','s','d','f','g','h','j','k','l',';','\''},
    {'z','x','c','v','b','n','m',',','.','/'}
    };

    map<char,char> t;

    for(int i=0;i<3;i++){
        int n=strlen(key[i]);
        for(int j=2;j<n;j++){
            t[key[i][j]]=key[i][j-2];
        }
        t[key[i][0]]=key[i][n-2];
        t[key[i][1]]=key[i][n-1];
    }

    char str[100000];
    int len;
    cin.getline(str,100000,'\n');
    len=strlen(str);

    for(int i=0;i<len;i++){
        if(isalpha(str[i])) str[i]=tolower(str[i]);
        if(str[i]!=' ') cout<<t[str[i]];
        else cout<<str[i];
    }
    cout<<endl;//這個題目要多印一行QQ



    return 0;
}
