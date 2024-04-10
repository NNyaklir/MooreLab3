#include <stdio.h>
#include <math.h>
#include "powTwo.h"

int powerOfTwo(unsigned int n) {
    if (n == 0)
        return 0;
    
    // Check if there's only one bit set in the binary representation
    // A power of two will have only one bit set
    int ret;
    if ((n & (n - 1)) == 0){
        ret= log2(n);
        return ret; // Return the logarithm to base 2
    }
    else{
        return 0; // Not a power of 2
    }
}