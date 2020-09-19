#include <iostream>
#include <map>//使用map容器
#include <cstring>
using namespace std;

int main(void)
{
    int n;
    cin>>n;
    map<string,int> record;//使用map容器
    string country,tmp;
    while(n--){
        cin>>country;
        record[country]++;//這個用法要記住
        getline(cin,tmp);
    }
    for(map<string,int>::iterator i=record.begin();i!=record.end();i++)//注意iterator的寫法 用來指向map容器的指針
        cout<<i->first<<" "<<i->second<<endl;//i->first表示key值 i->second表示value

    return 0;
}
