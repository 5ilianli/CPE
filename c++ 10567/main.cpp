#include<iostream>
#include<cstdlib>
#include<cstring>
#include<stdio.h>
using namespace std;

int main(void)
{
    char a[1001],b[1001];
    int count_a[123],count_b[123];
    int i,j;

    while(gets(a)){
        memset(count_a,0,sizeof(count_a));
        memset(count_b,0,sizeof(count_b));
        for(i=0;i<strlen(a);i++){
            count_a[a[i]]++;  /* a[i] char will convert to int */
        }
        gets(b);
        for(i=0;i<strlen(b);i++){
            count_b[b[i]]++;
        }
        for(i=97;i<123;i++){ /* a brilliant idea ! */
            j=0;
            while(j<count_a[i]&&j<count_b[i]){ /* a brilliant idea ! */
                printf("%c",i);
                j++;
            }
        }
        printf("\n");
    }

    return 0;
}
