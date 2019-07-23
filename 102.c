/*************************************************************************
	> File Name: 102.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月22日 星期一 15时31分34秒
 ************************************************************************/

#include<stdio.h>
int main()
{
int a,b,c,t;
float tout;
scanf("%d %d %d %d", &a, &b, &c, &t);
tout = 1.0*(a*b*c-a*b*t) / (b*c+a*c-a*b);    
printf("%.2f\n", tout);
return 0;    
}
