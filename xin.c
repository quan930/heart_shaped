#include <stdio.h>
#include <math.h>
#define BIG 40//1~60
void forfor(char,int,int);
int main(int argc, char const *argv[])
{
    char map = '*';
    char blank = ' ';
    for (int i = BIG; i >= 0; --i) {
        double y = (double) i / BIG;
        double x = sqrt(1 - y * y) + 1;
        int end = (int) (BIG * x)-BIG;
        forfor(blank,0,(BIG+1)-end);
        forfor(map,1,end);
        forfor(map,1,end);
        forfor(blank,0,(BIG+1)-end);
        forfor(blank,0,(BIG+1)-end);
        forfor(map,1,end);
        forfor(map,1,end);
        printf("\n");
    }
    for (int i = 0; i > (-3*BIG) ; --i) {
        double y = (double) i/BIG;
        double x = 1-cos(y+3);
        int end = (int)(BIG*x);
        forfor(blank,0,(2*BIG)-end);
        forfor(map,0,end);
        forfor(map,0,end);
        printf("\n");
    }
}
void forfor(char symbol,int start,int count)
{
    for (int i = start; i < count; ++i) {
        printf("%c ",symbol);
    }
}