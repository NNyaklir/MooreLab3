#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "powTwo.h"
#include "powTwoTest.h"

int runPowTest() {
    srand(time(NULL)); //rand nums

    unsigned int num = rand();
    printf("number : ", num);

    
    //nvm just gonna hard code it
   showTestResults(2,1);
   showTestResults(4,2);
   showTestResults(8,3);
   showTestResults(16,4);
   showTestResults(256,5);

   showTestResults(38,6);
   showTestResults(939,7);
   showTestResults(0,8);
   showTestResults(65,9);
   showTestResults(1,10);
    

}

int showTestResults( int num, int testNum){
    int result = powerOfTwo(num);
    printf ("Test %d:\n",testNum);
    if (result!=0){
    
        printf("%u is a power of two , the log is %d. \n",num,result);
        }
    else {
        printf("%u is not a power of two. \n",num);
    }

}