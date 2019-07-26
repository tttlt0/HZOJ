/*************************************************************************
	> File Name: 122.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月24日 星期三 21时01分41秒
 ************************************************************************/

#include<stdio.h>
int main () {
int t,h,m,s; 
    scanf ("%d", &t);
    if (t/60 < 1) {
        h = 0;
        m = 0;
        s = t;
        printf ("%02d:%02d:%02d am\n", h, m, s);
    }  else if (t/3600 < 1) {
        h = 0;
        m = t / 60;
        s = t % 60 ;
        printf ("%02d:%02d:%02d am\n", h, m, s);
    } else if (t/3600 < 12) {
        h = t / 3600;
        m = t % 3600 / 60;
        s = t % 3600 % 60;
        printf ("%02d:%02d:%02d am\n", h, m, s);
    } else if (t/3600 < 13) {
        h = t / 3600;
        m = t % 3600 / 60;
        s = t % 3600 % 60;
        printf ("%02d:%02d:%02d midnoon\n", h, m, s);
    } else if (t/3600 <= 24) {
        h = t / 3600 -12;
        m = t % 3600 / 60;
        s = t % 3600 % 60;
        printf ("%02d:%02d:%02d pm\n", h, m, s);
    }

return 0;
}
