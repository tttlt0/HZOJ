/*************************************************************************
	> File Name: 119.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月24日 星期三 07时50分15秒
 ************************************************************************/

#include<stdio.h>

int main() {
int y,m,d;
int ly,lm,ld;
int ny,nm,nd;
scanf ("%d %d %d", &y, &m, &d);
if (m==1){
   if (d == 1) {
      ly = y-1;
      lm = 12;
      ld = 31;
      ny = y;
      nm = m;
      nd = d+1;
   }
   else if (d == 31) {
      ly = y;
      lm = m;
      ld = 31;
      ny = y;
      nm = m+1;
      nd = 1;
   }
   else if (d < 31 && d > 1) {
      ly = y;
      lm = m;
      ld = d-1;
      ny = y;
      nm = m;
      nd = d+1;
   }
}
else if (m==2) {
     if (((y%100!=0)&&(y%4==0)) || ((y%100==0)&&(y%400==0))){
          if (d == 1) {
          ly = y;
          lm = m-1;
          ld = 31;
          ny = y;
          nm = m;
          nd = d+1;
          }
          else if (d == 29) {
          ly = y;
          lm = m;
          ld = d-1;
          ny = y;
          nm = m+1;
          nd = 1;
          }
          else if (d < 29 && d > 1) {
          ly = y;
          lm = m;
          ld = d-1;
          ny = y;
          nm = m;
          nd = d+1;
          }
     } 
     else {
          if (d == 1) {
          ly = y;
          lm = m-1;
          ld = 31;
          ny = y;
          nm = m;
          nd = d+1;
          }
          else if (d == 28) {
          ly = y;
          lm = m;
          ld = d-1;
          ny = y;
          nm = m+1;
          nd = 1;
          }
          else if (d < 28 && d > 1) {
          ly = y;
          lm = m;
          ld = d-1;
          ny = y;
          nm = m;
          nd = d+1;
          }
     }
}
else if (m==3) {
     if (d == 1) {
         if (((y%100!=0)&&(y%4==0)) || ((y%100==0)&&(y%400==0))) {
            ly = y;
            lm = m-1;
            ld = 29;
            ny = y;
            nm = m;
            nd = d+1;
         }
         else {
            ly = y;
            lm = m-1;
            ld = 28;
            ny = y;
            nm = m;
            nd = d+1; 
         }
   } 
   else if (d == 31) {
      ly = y;
      lm = m;
      ld = d-1;
      ny = y;
      nm = m+1;
      nd = 1;
   }
   else if (d < 31 && d > 1) {
      ly = y;
      lm = m;
      ld = d-1;
      ny = y;
      nm = m;
      nd = d+1;
   }
}
else if (m==4) {
     if (d == 1) {
      ly = y;
      lm = m-1;
      ld = 31;
      ny = y;
      nm = m;
      nd = d+1;
   }
     else if (d == 30) {
      ly = y;
      lm = m;
      ld = d-1;
      ny = y;
      nm = m+1;
      nd = 1;
   }
     else if (d < 30 && d > 1) {
      ly = y;
      lm = m;
      ld = d-1;
      ny = y;
      nm = m;
      nd = d+1;
   }
}
else if (m==5) {
     if (d == 1) {
      ly = y;
      lm = m-1;
      ld = 30;
      ny = y;
      nm = m;
      nd = d+1;
   }
   else if (d == 31) {
      ly = y;
      lm = m;
      ld = d-1;
      ny = y;
      nm = m+1;
      nd = 1;
   }
   else if (d < 31 && d > 1) {
      ly = y;
      lm = m;
      ld = d-1;
      ny = y;
      nm = m;
      nd = d+1;
   }  
}
else if (m==6) {
     if (d == 1) {
      ly = y;
      lm = m-1;
      ld = 31;
      ny = y;
      nm = m;
      nd = d+1;
   }
     else if (d == 30) {
      ly = y;
      lm = m;
      ld = d-1;
      ny = y;
      nm = m+1;
      nd = 1;
   }
     else if (d < 30 && d > 1) {
      ly = y;
      lm = m;
      ld = d-1;
      ny = y;
      nm = m;
      nd = d+1;
   }
}
else if (m==7) {
     if (d == 1) {
      ly = y;
      lm = m-1;
      ld = 30;
      ny = y;
      nm = m;
      nd = d+1;
   }
     else if (d == 31) {
      ly = y;
      lm = m;
      ld = d-1;
      ny = y;
      nm = m+1;
      nd = 1;
   }
     else if (d < 31 && d > 1) {
      ly = y;
      lm = m;
      ld = d-1;
      ny = y;
      nm = m;
      nd = d+1;
   }   
}
else if (m==8) {
      if (d == 1) {
      ly = y;
      lm = m-1;
      ld = 31;
      ny = y;
      nm = m;
      nd = d+1;
   }
     else if (d == 31) {
      ly = y;
      lm = m;
      ld = d-1;
      ny = y;
      nm = m+1;
      nd = 1;
   }
     else if (d < 31 && d > 1) {
      ly = y;
      lm = m;
      ld = d-1;
      ny = y;
      nm = m;
      nd = d+1;
   }   
}
else if (m==9) {
      if (d == 1) {
      ly = y;
      lm = m-1;
      ld = 31;
      ny = y;
      nm = m;
      nd = d+1;
   }
     else if (d == 30) {
      ly = y;
      lm = m;
      ld = d-1;
      ny = y;
      nm = m+1;
      nd = 1;
   }
     else if (d < 30 && d > 1) {
      ly = y;
      lm = m;
      ld = d-1;
      ny = y;
      nm = m;
      nd = d+1;
   }     
}
else if (m==10) {
      if (d == 1) {
      ly = y;
      lm = m-1;
      ld = 30;
      ny = y;
      nm = m;
      nd = d+1;
   }
     else if (d == 31) {
      ly = y;
      lm = m;
      ld = d-1;
      ny = y;
      nm = m+1;
      nd = 1;
   }
     else if (d < 31 && d > 1) {
      ly = y;
      lm = m;
      ld = d-1;
      ny = y;
      nm = m;
      nd = d+1;
   }   
}
else if (m==11) {
      if (d == 1) {
      ly = y;
      lm = m-1;
      ld = 31;
      ny = y;
      nm = m;
      nd = d+1;
   }
     else if (d == 30) {
      ly = y;
      lm = m;
      ld = d-1;
      ny = y;
      nm = m+1;
      nd = 1;
   }
     else if (d < 30 && d > 1) {
      ly = y;
      lm = m;
      ld = d-1;
      ny = y;
      nm = m;
      nd = d+1;
   }
}
else if (m==12) {
     if (d == 1) {
      ly = y;
      lm = m-1;
      ld = 30;
      ny = y;
      nm = m;
      nd = d+1;
   }
   else if (d == 31) {
      ly = y;
      lm = m;
      ld = d-1;
      ny = y+1;
      nm = 1;
      nd = 1;
   }
   else if (d < 31 && d > 1) {
      ly = y;
      lm = m;
      ld = d-1;
      ny = y;
      nm = m;
      nd = d+1;
   }
     
}
printf ("%d %d %d\n",ly,lm,ld);
printf ("%d %d %d\n",ny,nm,nd);
return 0;
}

