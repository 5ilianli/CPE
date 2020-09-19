#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    vector<int> p;
    p.push_back(2);
    for(int i=3;i<=100000;i++){
        if(i%2!=0){
            int d;
            for(d=3;d*d<=i;d+=2)
            if(i%d==0) break;
            if(d*d>i) p.push_back(i);
        }
    }

    int n;
    cin>>n;

    while(n--){
        int a,tmp,tsum,aa;
        vector<int> factor;
        cin>>a;
        a++;
        while(1){
            factor.clear();
            tmp=a;tsum=0;aa=a;
            while(tmp){
                tsum+=tmp%10;
                tmp/=10;
            }
            //這裡的話要先建質數表,才能得知質因數個數
            for(int i=0;p[i]*p[i]<=aa;i++){
                if(aa%p[i]==0){
                    while(aa%p[i]==0){
                        factor.push_back(p[i]);
                        aa/=p[i];
                    }
                }
                if(aa==1) break;
            }

            if(aa!=a){
                int sum=0;
                for(int i=0;i<factor.size();i++){
                    int b=factor[i];
                    while(b){
                       sum+=b%10;
                       b/=10;
                    }
                }
                //這裡要小心,因為1不是質因數,先設條件
                if(aa>1)
                while(aa){
                    sum+=aa%10;
                    aa/=10;
                }
                if(tsum==sum) {cout<<a<<endl;break;}
            }
            a++;
        }
    }


    return 0;
}
