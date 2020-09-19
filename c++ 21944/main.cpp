#include <iostream>
#include <queue>
using namespace std;

bool find(int n,int m)
{
    queue<int> crisis;
    for(int tmp=1;tmp<=n;tmp++)
        crisis.push(tmp);
    int cnt=0;
    while(crisis.size()!=1){
        int target=crisis.front(); // 先得到頭值 儲存在target裡面
        crisis.pop(); // 先將第一個值直接移除 後面的值會往前遞補 挪出最後一個空位
        if(cnt%m!=0)
            crisis.push(target); // 因為不是第m個值 所以要再把頭值加回到尾巴
        cnt++;
    }
    return crisis.front()==13;
}

int main(void)
{
    int n;
    while(cin>>n,n){
        for(int m=1;;m++)
        if(find(n,m)){
            cout<<m<<endl;
            break;
        }
    }
    return 0;
}
