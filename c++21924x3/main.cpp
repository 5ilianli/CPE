#include <iostream>
#include <map>
#include <cstring>
#include <string>
using namespace std;

int main(void)
{
    int n,Case;
    cin>>n;
    Case=n;

    map<string,int> t;//map超好用,一定要會!
    string country[n];

    for(int i=0;i<n;i++){
        string str1;
        char str2[100];
        cin>>str1;
        cin.getline(str2,100,'\n');//cin.getline的用法要記住
        t[str1]++;
        country[i]=str1;
    }

    int i=0;
    //以下迭代的 方式要記熟!!!!
    for(map<string,int>::iterator itr=t.begin();itr!=t.end();itr++){
        cout<<itr->first<<" "<<itr->second;
        if(i+2!=n)//沒事不要多印一行
           cout<<endl;
        i++;
    }

    //for(int i=0;i<Case;i++)
        //cout<<country[i]<<" "<<t[country[i]]<<endl;


    return 0;
}
