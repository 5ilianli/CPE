#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    int num,Case=1;

    while(cin>>num&&num){
        char a[num][101];
        cin.get();
        for(int i=0;i<num;i++)
            cin.getline(a[i],101);
        cout<<"Case "<<Case<<":\n";
        cout<<"#include<string.h>\n";
        cout<<"#include<stdio.h>\n";
        cout<<"int main()\n";
        cout<<"{\n";
        for(int i=0;i<num;i++){
            cout<<"printf(\"";
            int j=0;
            while(a[i][j]!='\0'){
                switch(a[i][j]){
                case '\"':{cout<<"\\\"";break;}
                case '\\':{cout<<"\\\\";break;};
                default:{cout<<a[i][j];break;}
                }
                j++;
            }
            cout<<"\\n";
            cout<<"\");";
            cout<<endl;
        }
        cout<<"printf(\"\\n\");\n";
        cout<<"return 0;\n";
        cout<<"}\n";
        Case++;
    }

    return 0;
}
