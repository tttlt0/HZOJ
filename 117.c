/*************************************************************************
	> File Name: 117.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月23日 星期二 14时11分56秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int a,ag,ah,ab,aq;
    scanf("%d",&a);
    if ((a/1000>=1) && (a/1000<10))
    {ag = a%1000%100%10;
    ah = a%1000%100/10;
    ab = a%1000/100;
    aq = a/1000;
    if(ag*1000+ah*100+ab*10+aq*1 == a)
    printf ("YES\n");
     else
     printf ("NO\n");
    }
    else if ((a/100>=1) && (a/100<10))
    {
    ag = a%100%10; 
    ah = a%100/10;
    ab = a/100;
    if (ag*100+ah*10+ab == a)
    printf ("YES\n");   
    else
    printf ("NO\n");    
    }
    else if ((a/10>=1)&& (a/10<10))
    {
        ag = a%10;
        ah = a/10;
        if (ag*10+ah == a)
        printf ("YES\n");
        else
        printf ("NO\n");
    }
    else if (a>=1 && a<10)
    {
     printf ("YES\n");   
    }
    
return 0;    
}
