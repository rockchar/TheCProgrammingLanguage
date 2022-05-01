//
//  main.c
//  Ex3-4
//
//  Created by Rohit Kumar on 30/04/22.
//

#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>

void itoaEx(double n,char * szAscii);
void Reverse(char * szAscii);
int main(int argc, const char * argv[]) {
    // insert code here...
    char buffer[1024];
    double val;// = -9223372036854775808;
    scanf("%lf",&val);
    printf("value enetered is %.0lf\n",val);
    itoaEx(val,buffer);
    return 0;
}

/*
 In a two’s complement number representation, our version of itoa does not handle the largest negative number,
 that is,the value of n equal to −(2wordsize−1). Explain why not. Modify it to print that value correctly, regardless of the
 machine on which it runs.
 */
void itoaEx(double n,char * szAscii)
{
    double temp = n;
    bool negative = false;
    double divisor = 10;
    char * tempChar = szAscii;
    if(temp < 0)
    {
        temp=0-temp;
        negative = true;
    }
    //first lets extract the numbers
    do{
        int digit =fmod(temp,divisor);
        temp = temp - digit;
        *szAscii = digit+'0';
        //printf("digit %d\n",digit);
        szAscii++;
    }
    while((temp/=10)!=0);
    if(negative == true)
    {
        *szAscii = '-';
        szAscii++;
    }
    *szAscii = '\0';
    szAscii = tempChar;
    Reverse(szAscii);
    printf("Number String %s\n",tempChar);
}

void Reverse(char * szAscii)
{
    size_t size = strlen(szAscii);
    int count = 0;
    do
    {
        char temp = szAscii[size - (count+1)];
        szAscii[size - (count+1)] = szAscii[count];
        szAscii[count++]=temp;
    }
    while(count<size/2);
}
