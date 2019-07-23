/*************************************************************************
	> File Name: 111.cmZ
	> Mail: 
	> Created Time: 2019年07月22日 星期一 00时24分32秒
 ************************************************************************/

#include<stdio.h>
int main()
{
int N,price1;
float price2;
scanf("%d",&N);
if (N<=3)
{price1 = 13+1;
printf("%d\n",price1);
}
else if (N>3)
{price2 = 13+2.3*(N-3)+1;
printf("%.1f\n",price2);}
return 0; 
}
