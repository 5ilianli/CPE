#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

//這題用暴力解,開四層迴圈的做法,不會比較慢
//且這題的set裡面只有三個數字,算是少了
int f(vector<int> v)
{
    int len=v.size();
    for(int i=len-1;i>=0;i--)
        for(int j=0;j<len;j++)
        for(int k=j+1;k<len;k++)
        for(int p=k+1;p<len;p++)
        if(v[i]==v[j]+v[k]+v[p]&&i!=j&&i!=k&&i!=p)//這就是題目條件,要看清楚
        return v[i];
    return INT_MAX;
}

int main(void)
{
    vector<int> v;
    int n;

    while(cin>>n,n){
        int a;
        for(int i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        //這裡建議用呼叫function的方式做,
        //因為function得到值以後就可以直接return
        //若是用break四層迴圈,會太麻煩
        int d=f(v);
        if(d==INT_MAX) cout<<"no solution\n";
        else cout<<d<<endl;
        v.clear();
    }

    return 0;
}
