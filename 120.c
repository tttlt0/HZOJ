/*************************************************************************
	> File Name: 120.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月24日 星期三 09时04分41秒
 ************************************************************************/

#include<stdio.h>

int main () {
    int y,m,d;
    scanf("%d %d %d", &y,&m,&d);
    if ((m<=12) && (m>=1)) {
    if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) {
        if ((d <= 31) && (d >= 1))
        printf ("YES\n");
        else 
        printf ("NO\n");
    }
    else if (m==4 || m==6 || m==9 || m==11) {
        if ((d <= 30) && (d>=1)) 
        printf ("YES\n");
        else      
        printf ("NO\n");       
    }
    else if (m==2) {
        if (((y%100!=0) && (y%4==0)) || ((y%100==0) && (y%400==0))) {
            if ((d<=29) && (d>=1)) 
                printf ("YES\n");
            else
                printf ("NO\n");   
        }
        else {
            if ((d <= 28) && (d >= 1))
            printf ("YES\n");
            else
           printf ("NO\n");
        }       
    }   
 }

else 
   printf ("NO\n"); 
return 0;
}
