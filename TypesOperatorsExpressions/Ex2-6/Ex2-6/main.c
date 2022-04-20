//
//  main.c
//  Ex2-6
//
//  Created by Rohit Kumar on 16/04/22.
//

#include <stdio.h>

/*
 function getbits to get the n bits from specified position p
 */
unsigned getBits(int x,int p,int n);


unsigned setBits(int x,int p, int n,int y);

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("%d\n",getBits(171,2, 5));
    printf("%d\n",setBits(213, 4, 4, 121));
    return 0;
}

unsigned getBits(int x,int p,int n)
{
    unsigned temp = 0,temp2 = 0,temp3 = 0,temp4 =0,temp5 = 0 ;
    temp = x >> (p-1);//step 1
    temp2 = ~0;
    temp3 = temp2 << n;
    temp4 = ~temp3;
    temp5 = temp & temp4;
    //combining all the steps
    return( (x >> (p - 1)) & ~(~0 << n) );
}

/*
 function setbits(x,p,n,y) that returns x with the n bits
 that begin at position p set to the rightmost n bits of y,
 leaving the other bits unchanged.unsigned x = 213;
 unsigned y = 121;
 int p = 4;
 int n = 4;
 */

unsigned setBits(int x,int p, int n,int y)
{
    //unsigned int result = 0;
    /*unsigned temp0 = 0, temp1 = 0 , temp2 = 0, temp3 = 0, temp4 = 0 ,temp5 =0,temp6=0,temp7=0,temp8=0,temp9=0;
    temp0 = x;//x
    temp1 = y;//y
    temp2 = (~0 << n);
    temp3 = (~0 << n) & y;
    temp4 = ((~0 << n) & y) ^ y;
    temp4 = (((~0 << n) & y) ^ y << (p+1-n));//value of y rightmost bits shifted
    //mask the bits from x
    
    temp5 = ~(~0 << n)<<(p+1-n);
    temp6 = x & ~(~0 << n)<<(p+1-n);
    temp7 = (x & ~(~0 << n)<<(p+1-n)) | (((~0 << n) & y) ^ y << (p+1-n));
    temp8 = (x & ~(x & ~(~0 << n)<<(p+1-n))) | (((~0 << n) & y) ^ y << (p+1-n));
    temp9 = */
    //simplifyng the steps
    //(x & (x & ~(~(~0 << n)<<(p+1-n))) | (( (~0 << n ) & x ) ^ x << (p+1-n)) )|(( (~0 << n ) & x ) ^ x << (p+1-n));
    return (x & ~(x & ~(~0 << n)<<(p+1-n))) | ((((~0 << n) & y) ^ y) << (p+1-n)) |(((~0 << n) & y) ^ y << (p+1-n));
}
