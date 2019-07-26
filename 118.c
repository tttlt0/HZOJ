/*************************************************************************
	> File Name: 118.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月23日 星期二 18时11分03秒
 ************************************************************************/

#include <stdio.h>
 
int main() {
    int year;
    scanf ("%d", &year);
   
   if ((year == 1900) || ((year>1900) && ((year-1900)%12 == 0)) || ((year<1900) && ((1900-year)%12 == 0)))
   printf ("rat\n");

   else if (((year>1900) && ((year-1900)%12 == 1)) || ((year<1900) && ((year-1900)%12 == -11)))
   printf ("ox\n");
    
   else if (((year>1900) && ((year-1900)%12 == 2)) || ((year<1900) && ((year-1900)%12 == -10)))
    printf ("tiger\n");
    
   else if (((year>1900) && ((year-1900)%12 == 3)) || ((year<1900) && ((year-1900)%12 == -9)))

    printf ("rabbit\n");
    
   else if (((year>1900) && ((year-1900)%12 == 4)) || ((year<1900) && ((year-1900)%12 == -8)))
   printf ("dragon\n");

    else if (((year>1900) && ((year-1900)%12 == 5)) || ((year<1900) && ((year-1900)%12 == -7)))
    printf ("snake\n");
    
   else if (((year>1900) && ((year-1900)%12 == 6)) || ((year<1900) && ((year-1900)%12 == -6)))
    printf ("horse\n");

    else if (((year>1900) && ((year-1900)%12 == 7)) || ((year<1900) && ((year-1900)%12 == -5)))
    printf ("sheep\n");
    
    else if (((year>1900) && ((year-1900)%12 == 8)) || ((year<1900) && ((year-1900)%12 == -4)))
    printf ("monkey\n");
    
    else if (((year>1900) && ((year-1900)%12 == 9)) || ((year<1900) && ((year-1900)%12 == -3)))
    printf ("rooster\n");

    else if (((year>1900) && ((year-1900)%12 == 10)) || ((year<1900) && ((year-1900)%12 == -2)))
    printf ("dog\n");
   
    else if (((year>1900) && ((year-1900)%12 == 11)) || ((year<1900) && ((year-1900)%12 == -1)))
    printf ("pig\n");
    return 0;
}



