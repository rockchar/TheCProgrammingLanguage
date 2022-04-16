//
//  range.c
//  Ex2-1
//
//  Created by Rohit Kumar on 15/04/22.
//

#include "range.h"


void RangeChar(void)
{
    printf("Range of char is between %.0d and %.0d\n",CHAR_MIN,CHAR_MAX);
}
void RangeShort(void)
{
    printf("Range of short is between %.0d and %.0d\n",SHRT_MIN,SHRT_MAX);
}
void RangeInt(void)
{
    printf("Range of Int is between %.0d and %.0d\n",INT_MIN,INT_MAX);
}
void RangeLong(void)
{
    printf("Range of long is between %.0ld and %.0ld\n",LONG_MIN,LONG_MAX);
}
void RangeFloat(void)
{
    printf("Range of Float is between %.0f and %.0f\n",FLT_MIN,FLT_MAX);
}
void RangeUnsignedChar(void)
{
    printf("Range of Char is between %.0d and %.0d\n",CHAR_MIN,CHAR_MAX);
}
void RangeUnsignedShort(void)
{
    printf("Range of Unsigned short is between %.0d and %.0d\n",0,USHRT_MAX);
}
void RangeUnsignedInt(void)
{
    printf("Range of unsigned int is between %.0d and %.0d\n",0,UINT_MAX);
}
void RangeUnsignedLong(void)
{
    printf("Range of Unsigned long is between %.0d and %.0lu\n",0,ULONG_MAX);
}
void RangeUnsignedFloat(void)
{
    printf("No unsigned float");
}
