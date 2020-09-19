#include <iostream>
#include<cstdlib> /* to use abs() */
using namespace std;

int main(void)
{
    long long int a,b;/* 2^32 => 4294967296
                         long int => -2147483648~2147483647
                         long long int => -9223372036854775808~9223372036854775807*/

    while(cin>>a>>b)
      cout<<abs(a-b)<<endl;

    return 0;
}
