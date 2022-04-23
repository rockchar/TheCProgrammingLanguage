//
//  main.c
//  Ex2-7
//
//  Created by Rohit Kumar on 20/04/22.
//

#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("%d\n",invert(796,10,4));
    return 0;
}


/*
 Returns x with the n bits that begin at position p inverted
 (i.e., 1 changed into 0 and vice versa), leaving the others
 unchanged
 */

unsigned invert(unsigned x, int p, int n)
{
    
    //extract the n bits from poition p
    
    return (x^(~(~0 << n))<<(p+1-n));
}
