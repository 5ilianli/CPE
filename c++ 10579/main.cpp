#include <iostream>
#include <cstring>
#include <map>
using namespace std;

int main(void)
{
    int m,n;
    cin>>m>>n;

    map<string,int> hay;
    string s;

    while(m--){
        int p;
        cin>>s>>p;
        hay[s]=p;
    }

    while(n--){
        int ans=0;
        while(cin>>s&&s!=".")
            ans+=hay[s]; //對於不存在的index值 將建新建值對 值為空
        cout<<ans<<endl;
    }

    return 0;
}
