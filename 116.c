/*************************************************************************
	> File Name: 116.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月22日 星期一 14时29分11秒
 ************************************************************************/

#include<stdio.h>
int main()
{
int a, b, c,t1,t2,t3;
scanf("%d %d %d", &a, &b, &c);
if ((a>=b)&&(a>=c))
   { t1 = a;
     t2 = b;
     t3 = c;
   }
else if ((b>=a)&&(b>=c))
    {t1 = b;
     t2 = a;
     t3 = c;
}
else if((c>=a) && (c>=b))
    {t1 = c;
    t2 = a;
    t3 = b;
    }
if (t2+t3>t1)
    {
       if (t2*t2+t3*t3 > t1*t1)
        printf ("acute triangle\n");
       else if (t2*t2+t3*t3 == t1*t1)
        printf ("right triangle\n");
       else if (t2*t2+t3*t3 < t1*t1) 
       printf ("obtuse triangle\n");
    }    
else
{printf("illegal triangle\n");
}    
}

