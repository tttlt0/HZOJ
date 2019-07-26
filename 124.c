/*************************************************************************
	> File Name: 124.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月26日 星期五 23时10分54秒
 ************************************************************************/

#include<stdio.h>

int main () {
    int education, rate, age, year;
    scanf ("%d %d %d %d", &education, &rate, &age, &year);
    if ((education == 1 || education == 2 || rate <= 50) && (age <= 25 || year >= 5)) {
        printf ("ok\n");
    } else
        printf ("pass\n");

    return 0;
}
