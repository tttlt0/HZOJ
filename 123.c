/*************************************************************************
	> File Name: 123.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月26日 星期五 22时43分21秒
 ************************************************************************/

#include<stdio.h>

int main () {
    double a, b, c, d;
    scanf ("%lf %lf\n%lf %lf", &a, &b, &c, &d);
    if (a < c && b < d || a > c && b > d) {
        printf ("NO\n");
    }
    else {
        printf ("YES\n");
    }
    return 0;
}
