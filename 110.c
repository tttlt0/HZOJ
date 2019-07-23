/*************************************************************************
	> File Name: 110.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月22日 星期一 00时17分05秒
 ************************************************************************/

#include<stdio.h>
int main()
{
float X,price;
scanf("%f",&X);
if (X<=15)
price = 6*X;
else if (X>15)
price = 6*15 + 9*(X-15);
printf("%.2f\n",price);
return 0;
}
