//暴力建表
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100000

struct point
{
   int x, y;
};
struct point p[SIZE + 1];//建立array 有100000個元素 每個元素都是 struct point 型
int index;
void create()//暴力法建表
{
    p[1].x = 0, p[1].y = 0;
    index = 2;
    int nowI = 0, nowJ = 0, count, num;
    for (num = 1; index <= SIZE; num ++)
    {
        for (count = 0; count < num && index <= SIZE; count ++, index ++)//下
            p[index].x = nowI, p[index].y = ++ nowJ;
        for (count = 0; count < num - 1 && index <= SIZE; count ++, index ++)//左下 每次都比別人少1 所以第一次沒有
            p[index].x = -- nowI, p[index].y = ++ nowJ;
        for (count = 0; count < num && index <= SIZE; count ++, index ++)//上
            p[index].x = -- nowI, p[index].y = nowJ;
        for (count = 0; count < num && index <= SIZE; count ++, index ++)//右上
            p[index].x = nowI, p[index].y = -- nowJ;
        for (count = 0; count < num && index <= SIZE; count ++, index ++)//右
            p[index].x = ++ nowI, p[index].y = -- nowJ;
        for (count = 0; count < num && index <= SIZE; count ++, index ++)//右下
            p[index].x = ++ nowI, p[index].y = nowJ;
    }
}

int main()
{
    create();
    int n;

    while (scanf("%d", &n) == 1)
        printf("%d %d\n", p[n].x, p[n].y);
}
