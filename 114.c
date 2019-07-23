/*************************************************************************
	> File Name: 114.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月22日 星期一 10时31分00秒
 ************************************************************************/

#include<stdio.h>
int main()
{
char x,h,l,c,d,w;
char str1[]={"He"};
char str2[]={"Li"};
char str3[]={"Cao"};
char str4[]={"Duan"};
char str5[]={"Wang"};
char str6[]={"Not Here"};
scanf("%c",&x);
if (x=='h')
printf("%s\n",str1);
else if(x=='l')
printf("%s\n",str2);
else if (x=='c')
printf("%s\n",str3);
else if (x=='d')
printf("%s\n",str4);   
else if(x=='w') 
printf("%s\n",str5);
else
printf("%s\n",str6);   
return 0;
}
