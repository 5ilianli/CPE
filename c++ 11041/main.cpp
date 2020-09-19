#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(string a,string b)
{
    return (a+b)>(b+a); //排列數字的字串: > 就是由大到小
}

int main(void)
{
    ios::sync_with_stdio(false);

    int n;

    while(cin>>n){
        if(!n)
            break;
        vector<string> num;
        string temp;
        for(int i=0;i<n;i++){
            cin>>temp;
            num.push_back(temp);
        }
        sort(num.begin(),num.end(),cmp);
        for(int i=0;i<n;i++)
            cout<<num[i];
        cout<<endl;
    }

    return 0;
}
