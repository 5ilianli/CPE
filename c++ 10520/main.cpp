#include <iostream>
#include <map>
#include <set>
using namespace std;

int main(void)
{
    int n;

    while(cin>>n,n){
        map<set<int>,int> Count; // Count 是這個map的名稱
        int M=0,MC=0;
        while(n--){
            set<int> suit;
            for(int i=0;i<5;i++){
                int course;
                cin>>course;
                suit.insert(course);
            }
            Count[suit]++; // suit 是集合 在map裡面當作 index 用
                           // ++ 表示 map的index 對應到的 值(int)+1
            int h=Count[suit];
            if(h==M)
                MC++;
            if(h>M){
                M=h;
                MC=1;
            }
        }
        cout<<M*MC<<endl;
    }

    return 0;
}
