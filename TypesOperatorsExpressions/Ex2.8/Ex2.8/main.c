//
//  main.c
//  Ex2.8
//
//  Created by Rohit Kumar on 23/04/22.
//

#include <stdio.h>
#define MAX_BITS sizeof(int)*8
unsigned rightot(unsigned x,unsigned n);

int main(int argc, const char * argv[]) {
    // insert code here...
    unsigned x = 28;
    unsigned result = rightot(x,2);
    printf("%u\n",result);
    return 0;
}

/*
 function rightrot(x,n) that returns the value of the integer
 x rotated to the right by n bit positions
 */
unsigned rightot(unsigned x,unsigned n)
{
    // return ((~(~0 << n)) & x) << (MAX_BITS - n) | (x >> n);
    return ((x << (MAX_BITS - n)) | (x >> n));
}
