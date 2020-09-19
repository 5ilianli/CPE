#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

int main(void)
{
    int m,n;
    cin>>m>>n;

    map<string,int> money;

    while(m--){
        string str;
        cin>>str;
        cin>>money[str];
    }

    while(n--){
        int sum=0;
        char str[20];
        while(1){
            cin>>str;int len=strlen(str);
            if(str[0]=='.') break;
            cin.get();
            for(map<string,int>::iterator itr=money.begin();itr!=money.end();itr++)
            if(itr->first==str){
                sum+=money[str];
                break;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
