#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    /*
    int a=2000000000;int n=0;
    for(int i=0;a!=0;i++){a/=2;n++;}
    cout<<n<<endl;
    */

    int n,m;

    while(cin>>n>>m){
        int i=0;
        vector<int> div;
        //vector 超好用,不用預設元素個數,用push_back就能將元素插入尾端
        div.push_back(n);
        bool check;
        while(n!=1){
           if(n%m!=0){
              check=false;
              break;
           }else if(n%m==0){
             n/=m;
             div.push_back(n);
             check=true;
           }
           i++;
        }
        int j=0;
        if(check)
           for(vector<int>::iterator itr=div.begin();itr!=div.end();itr++){
               cout<<*itr;//vector沒有first,second,要用*itr才能印出值
               if(j<i)
                  cout<<" ";//沒事不要多印空格
               j++;
           }
        else
           cout<<"Boring!";
        cout<<endl;
    }


    return 0;
}
