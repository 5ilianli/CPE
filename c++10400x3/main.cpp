#include <iostream>
using namespace std;

unsigned long f(unsigned long a,unsigned long b);

int main(void)
{
    unsigned long a,b,aa,bb,cc;
    unsigned long c=0,d=0;
    int i=0;

    while(cin>>a>>b)
    {
        cc=a;
        bb=b;
        if(a>b)
        {
            aa=a;
            a=b;
            b=aa;
        }
        while(a<=b)
        {
            c=f(a,i);
            if(c>d)
               d=c;
            a++;
        }
        cout<<cc<<" "<<bb<<" "<<d<<endl;
        d=0;
    }

    return 0;
}

unsigned long f(unsigned long a,unsigned long b)
{
        if(a==1)
            return b+1;
        else if(a%2!=0)
        {
            a=3*a+1;
            b++;
            return f(a,b);
        }else{
            a=a/2;
            b++;
            return f(a,b);
        }
}

/*不知道錯在哪裡==
#include <iostream>
using namespace std;

int main(void)
{
    unsigned long aa,bb;

    while(cin>>aa>>bb){
        if(aa>bb){
            unsigned long t=aa;
            aa=bb;
            bb=t;
        }
        unsigned long max=0,aatmp=aa,bbtmp=bb;
        int i;
        for(i=aa;i<=bb;i++){
            unsigned long tmp=1;
            aa=i;
            while(aa!=1){
                if(aa%2==1)
                    aa=3*aa+1;
                else
                    aa/=2;
                tmp++;
            }
            if(tmp>max)
                max=tmp;
        }
        cout<<aatmp<<" "<<bbtmp<<" "<<max<<endl;
    }

    return 0;
}
*/
