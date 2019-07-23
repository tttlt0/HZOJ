/*************************************************************************
	> File Name: 115.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月22日 星期一 14时13分07秒
 ************************************************************************/

#include<stdio.h>
int main()
{
int x,y,price;
int xg,yg,xh,yh;    
scanf("%d %d",&x,&y);
xg = x%10;
xh = x/10;
yg = y%10;
yh = y/10;
if (xg==yg && xh==yh)
price = 100;
else if (xg==yh && xh==yg )
price = 20;
else if (xg==yg || xh==yh || xg==yh || xh==yg)
price = 2;
else
price = 0;    
printf("%d\n",price);    
return 0;    
}
