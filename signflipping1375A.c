# include <stdio.h>

int t, n, a[ 110 ];

inline  int  abs ( int x) { return x> 0 ? x: -x;}

int  main () {
     scanf ( " %d " , &t);
     while (t--) {
         scanf ( " %d " , &n);
         for ( int i = 1 ; i <= n; i++) scanf ( " %d " , &a[i]);
         for ( int i = 1 ; i <= n; i++) {
             if (i% 2 ) printf ( " %d " , abs (a[i]));
            else  printf ( " %d " ,- abs (a[i]));
             
        }
        printf ( " \n " );
    }
    return  0 ;
}