#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int,int> p1,pair<int,int> p2)
{
    return p1.second>p2.second;
}

int main(void)
{
    int n;

    while(cin>>n){
        while(n--){
            vector<pair<int,int> > ans,v;
            ans.clear();
            v.clear();
            int M,L,R;
            cin>>M;
            while(cin>>L>>R,L||R){
                //只找和[0,M]區間有相關的
                if(!(R<=0||L>=M))
                    v.push_back(make_pair(L,R));
            }
            //這裡是由座標的第二個點為基準去由大排到小的
            sort(v.begin(),v.end(),cmp);
            //先由原點開始,再逐一擴大區間
            int now=0;

            while(now<M){
                bool flag=false;
                for(int i=0;i<v.size();i++){
                    //這裡的v[i].second>now不能改成v[i].second>=now
                    //因為要試測資輸入一個點的話(零區間),會多算segment
                    if(v[i].first<=now&&v[i].second>now){
                        ans.push_back(v[i]);
                        now=v[i].second;
                        //刪除掉已經存入ans裡面的pair
                        //這一步是重要的,因為迴圈是在now>=M才停止
                        //所以可能會重複測試vector裡面的pair
                        v.erase(v.begin()+i);
                        flag=true;
                        //因為vector已經刪除ith元素,所以原先i+1th會遞補到ith的位置
                        i--;
                    }
                }
                if(!flag) break;
            }
            if(now>=M){
                cout<<ans.size()<<endl;
                for(int i=0;i<ans.size();i++)
                    cout<<ans[i].first<<" "<<ans[i].second<<endl;
            }else{
                cout<<0<<endl;
            }
            if(n) cout<<endl;
        }
    }

    return 0;
}

/* failure
#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

struct Seg{
    int start;
    int end;
};

bool cmp(Seg a,Seg b)
{
    if(a.start<b.start)
        return true;
    else return false;
}

int main(void)
{
    int n;
    cin>>n;

    while(n--){
        if(n!=1) cout<<endl;
        int M;
        cin>>M;
        vector<Seg> line,answer;
        Seg input;
        line.clear();
        answer.clear();
        while(cin>>input.start>>input.end,input.start||input.end){
            line.push_back(input);
        }
        sort(line.begin(),line.end(),cmp);
        int L=0,R=0,tmp=-1;
        for(int i=0;i<line.size();i++){
            for(;i<line.size()&&line[i].start<=L;i++)
                if(line[i].end>R){
                    R=line[i].end;
                    tmp=i;
                }
            if(tmp==-1) break;
            answer.push_back(line[tmp]);
            if(R>=M) break;
            L=R;
            i--;
        }
    }

    return 0;
}
*/
