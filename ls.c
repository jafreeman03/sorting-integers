#include <stdio.h>


int main() {

    int w, x, y, z;
    
    int max1, max2, min1, min2, maxfinal, minfinal;
        
    printf("Enter four integers: ");
    scanf("%d, %d, %d, %d", &w, &x, &y, &z); 

    // compare w and x

    if  (w > x) {
        max1 = w; 
        min1 = x;  
     } else { 
        max1 = x; 
        min1 = w; 
     }

     //compre y ans z
     if (y > z) {
        max2 = y;
        min2 = z;
     } else { 
        max2 = z;
        min2 = y;
     }

     //compare the max and min values of the groups
     if (max1 > max2) {
        maxfinal = max1; 
     } else { 
        maxfinal = max2; 
     }

     if (min1 < min2) { 
        minfinal = min1; 
     } else { 
        minfinal = min2; 
     }


    printf("Largest: %d\n Smallest: %d", maxfinal, minfinal);

    return 0;
   }