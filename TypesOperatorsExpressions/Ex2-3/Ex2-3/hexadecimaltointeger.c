//
//  hexadecimaltointeger.c
//  Ex2-3
//
//  Created by Rohit Kumar on 15/04/22.
//

#include "hexadecimaltointeger.h"
#include <string.h>
#include <math.h>

char * PREFIX_SMALL = "0x";
char * PREFIX_CAPS  = "0X";

int hex_map[128]={ 0 };

int htoi(char * sHex)
{
    int result = 0;
    bool hasPrefix = false;
    if(validateandtrim(sHex,&hasPrefix)==true)
    {
        //its a valid hexa decimal string
        if(hasPrefix == true)
        sHex += 2;
        
        hex_map['A'] = hex_map['a'] = 10;
        hex_map['B'] = hex_map['b'] = 11;
        hex_map['C'] = hex_map['c'] = 12;
        hex_map['D'] = hex_map['d'] = 13;
        hex_map['E'] = hex_map['e'] = 14;
        hex_map['F'] = hex_map['f'] = 15;
        
        for(int i = 0 ; i <= 9 ; i++ )
        {
            hex_map[i+'0'] = i;
        }
        
        for(int i = 0 ;i < strlen(sHex) ;i++)
        {
            result = result + hex_map[*(sHex+i)]*pow(16,(strlen(sHex)-(i+1)));
        }
        
    }
    else
    {
        printf("invalid string !");
        result = -99999;
    }
    
    return result;
}

bool validateandtrim(char * sHex,bool * bHasprefix)
{
    int count = 0;
    bool valid = true;
    *bHasprefix = false;
    char prefix[3]; //Prefix is two chars one for the null character
    memset(prefix,'\0',3);
    //first check for 0x or 0X
    strncpy(prefix, sHex, strlen(PREFIX_CAPS));
  
    if( 0 == strcmp(prefix, PREFIX_CAPS) || 0 == strcmp(prefix, PREFIX_SMALL) )
    {
        //it has a prefix
        *bHasprefix = true;
        //trim the prefix
        sHex +=  2;
    }
    //no prefix so proceed

    while(*(sHex+count)!='\0')
    {
        if(((char)(*(sHex+count) >= '0') && (char)(*(sHex+count) <='9'))||
           ((char)(*(sHex+count) >= 'A') && (char)(*(sHex+count) <='F'))||
           ((char)(*(sHex+count) >= 'a') && (char)(*(sHex+count) <='f')))
        {
            valid = true;
        }
        else
        {
            valid = false;
            break;
        }
        count++;
    }
    return valid;
}
