#include <iostream>
using namespace std;

int main(void)
{
    long long int a,b;

    while(cin>>a>>b){
        int aa[32]={0};
        int bb[32]={0};
        int result[32]={0};
        int ia;
        for(ia=0;a>0;ia++){
            aa[ia]=a%2;
            a/=2;
        }
        int ib;
        for(ib=0;b>0;ib++){
            bb[ib]=b%2;
            b/=2;
        }
        if(ia>ib){
            int i=0;
            while(i<ia){
                if(aa[i]!=bb[i])
                    result[i]=1;
                else
                    result[i]=0;
                i++;
            }
            long long int sum=0;
        for(i=ia-1;i>=0;i--){
            sum=sum*2+result[i];
        }
        cout<<sum<<endl;
        }else{
            int i=0;
            while(i<ib){
                if(aa[i]!=bb[i])
                    result[i]=1;
                else
                    result[i]=0;
                i++;
            }
            long long int sum=0;
        for(i=ib-1;i>=0;i--){
            sum=sum*2+result[i];
        }
        cout<<sum<<endl;
        }

    }

    return 0;
}
