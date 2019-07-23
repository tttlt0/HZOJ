/*************************************************************************
	> File Name: 108.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月21日 星期日 23时56分18秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    char i;
    float m,n,S;
    scanf("%c\n",&i);
    scanf("%f %f",&m, &n);
    if (i == 'r')
    S=m*n;
    else if (i=='t')
    S=m*n/2;
    S=(int)(S*100+0.5)/100.0;
    printf("%.2f\n",S);
    return 0;
}
