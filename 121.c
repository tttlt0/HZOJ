/*************************************************************************
	> File Name: 121.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月24日 星期三 20时43分27秒
 ************************************************************************/

#include<stdio.h>

int main () {
    char a,b;
    scanf ("%c %c", &a, &b);
    if (a == 'O'){
        if (b == 'Y')
        printf ("MING\n");
        else if (b == 'O')
        printf ("TIE\n");
        else if (b == 'H')
        printf ("LI\n");
    } 
    else if (a == 'Y') {
        if (b == 'Y')
        printf ("TIE\n");
        else if (b == 'O')
        printf ("LI\n");
        else if (b == 'H')
        printf ("MING\n");
    }
    else if (a == 'H') {
        if (b == 'Y')
        printf ("LI\n");
        else if (b == 'O')
        printf ("MING\n");
        else if (b == 'H')
        printf ("TIE\n");
    }
    return 0;
}
