//
//  range.h
//  Ex2-1
//
//  Created by Rohit Kumar on 15/04/22.
//

#ifndef range_h
#define range_h

#include <stdio.h>
#include<float.h>
#include<limits.h>

#define my_sizeof(type) (char*)(&type+1) - (char*)(&type)
//function declarations for sizes from standard headers
void RangeChar(void);
void RangeShort(void);
void RangeInt(void);
void RangeLong(void);
void RangeFloat(void);
void RangeUnsignedChar(void);
void RangeUnsignedShort(void);
void RangeUnsignedInt(void);
void RangeUnsignedLong(void);
void RangeUnsignedFloat(void);

#endif /* range_h */
