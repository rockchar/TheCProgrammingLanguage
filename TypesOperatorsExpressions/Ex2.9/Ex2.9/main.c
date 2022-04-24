//
//  main.c
//  Ex2.9
//
//  Created by Rohit Kumar on 23/04/22.
//

#include <stdio.h>

int bitcount(unsigned x);
int bitcount2scompliment(int x);
int get2sCompliment(int x);

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("%d\n",bitcount(11));
    return 0;
}

/* bitcount:  count 1 bits in x */
int bitcount(unsigned x)
{
    int count = 0 ;
    for( ;x!=0;x>>=1)
    {
        if ( x & 0x1 ) {
            count++;
        }
    }
    return count;
}

int get2sCompliment(int x)
{
    return 0;
}

int bitcount2scompliment(int x)
{
    return 0;
}
