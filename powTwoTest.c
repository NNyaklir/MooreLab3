#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int runPowTest() {
    srand(time(NULL)); //rand nums

    unsigned int num = rand();
    printf("number : ", num);

    int result = powerOfTwo(num);

    if (result!=0){
        printf("%u is a power of two , the log is %d. \n",num,result);
        }
    else {
        printf("%u is not a power of two. \n",num);
    }

}
