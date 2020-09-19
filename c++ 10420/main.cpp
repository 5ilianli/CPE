#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n;
char str[12345];
int time[12345][2];
int cmp(const void*a,const void*b){
    int *p = (int*)a;
    int *q = (int*)b;
    return p[0]-q[0];
}
int main(){
    int i;
    int max;
    int maxTime;
    int h,m;
    int Case = 0;
    while(scanf("%d",&n)!=EOF){
        time[0][0] = 0;
        time[0][1] = 10*60;
        for(i=1;i<=n;++i){
            scanf("%d%*c%d",&h,&m);
            time[i][0] = h*60+m;
            scanf("%d%*c%d",&h,&m);
            time[i][1] = h*60+m;
            gets(str);
        }
        time[n+1][0] = 18*60;
        time[n+1][1] = 24*60;
        n = n+2;
//      for(int i=0;i<n+2;i++)
//          printf("%.2d:%.2d %.2d:%.2d\n",time[i][0]/60,time[i][0]%60,time[i][1]/60,time[i][1]%60);
        qsort(time,n,sizeof(time[0]),cmp);
//      for(int i=1;i<=n;i++)
//          printf("%.2d:%.2d %.2d:%.2d\n",time[i][0]/60,time[i][0]%60,time[i][1]/60,time[i][1]%60);

        max = 0;
        for(i=1;i<=n;++i){
            if(max < time[i][0]-time[i-1][1]){
                max = time[i][0]-time[i-1][1];
                maxTime = time[i-1][1];
            }
        }
        printf("Day #%d: the longest nap starts at %.2d:%.2d and will last for ",++Case,maxTime/60,maxTime%60);
        if(max<60)printf("%d minutes.\n",max);
        else printf("%d hours and %d minutes.\n",max/60,max%60);
    }

    return 0;
}
