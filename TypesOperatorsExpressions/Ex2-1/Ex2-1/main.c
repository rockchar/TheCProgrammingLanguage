//
//  main.c
//  Ex2-1
//
//  Created by Rohit Kumar on 15/04/22.
//

#include <stdio.h>
#include "range.h"
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    RangeChar();
    RangeShort();
    RangeInt();
    RangeLong();
    RangeFloat();
    RangeUnsignedChar();
    RangeUnsignedShort();
    RangeUnsignedInt();
    RangeUnsignedLong();
    RangeUnsignedFloat();
    char a=1;
   
    printf("Using Calculation Range of Float is between %.0f and %.0ld\n",FLT_MIN,my_sizeof(a));
    a = my_sizeof(a);
    printf("%lld and %lld\n",(1LL<<(a*8-1)),llabs(1LL-(1LL<<(a*8-1))));
    return 0;
}
