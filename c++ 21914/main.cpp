#include<iostream>
#include<cstring>
using namespace std;

int main(void)
{
    char str[100][101];
    int index=0,Max=0;
    int len[100]={0};

    while(cin.getline(str[index],101)){
        len[index]=strlen(str[index]);
        if(len[index]>Max)
            Max=len[index];
        for(int add=len[index];add<Max;add++){
            str[index][add]=' ';
            len[index]++;
        }
        index++;
    }

    for(int j=0;j<Max;j++){
        for(int i=index-1;i>=0;i--)
           if(j<len[i])
            cout<<str[i][j];
        cout<<endl;
    }

    return 0;
}
