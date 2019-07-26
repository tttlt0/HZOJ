/***********************************************************************
	> File Name: 98.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月22日 星期一 00时44分26秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define pi 3.14
int main()
{
    double r, h;
    double s,v;
    scanf ("%lf %lf",&r,&h);
    s = pow(r,2)*pi;
    v = pow(r,2)*pi*h;
    printf("%.2lf\n%.2lf\n",s,v);
    return 0; 
}
