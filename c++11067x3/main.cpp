#include <iostream>
using namespace std;

int main(void)
{
    int cola;

    while(cin>>cola){
        int empty=cola;
        //這裡的設界要小心,應該是>=2,因為差一瓶就可以成3,所以還可以繼續!
        while(empty>=2){
            int exchange=empty/3;
            cola+=exchange;
            empty=empty%3+exchange;
            if(empty+1==3)
               empty++;
        }
        cout<<cola<<endl;
    }

    return 0;
}
