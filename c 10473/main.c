#include <stdio.h>

int f(int x);

int main(void)
{
    int a[11]={0};
    char ch;

    for(;;)
    {
        int sum=0,result,i=0;
        while((ch=getchar())!='\n'){
        if(i==0&&ch=='0')
            return 0;
        else
            a[i++]=ch-'0';
        }
    --i;
    while(i>=0){
        sum+=a[i--];
    }

    if(sum>=10){
        result=f(sum);
        printf("%d\n",result);
    }else
        printf("%d\n",sum);
    }

    return 0;
}

int f(int x)
{
    int sum=0;

    while(x!=0)
    {
        sum+=x%10;
        x/=10;
    }

    if(sum>=10)
        return f(sum);
    else
        return sum;
}
