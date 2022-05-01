//
//  main.c
//  Ex3.3
//
//  Created by Rohit Kumar on 24/04/22.
//

#include <stdio.h>

void itoa(int n,char * szAscii);
int main(int argc, const char * argv[]) {
    // insert code here...
    char buffer[128];
    itoa(1234,buffer);
    return 0;
}

/* itoa:  convert n to characters in s */

void itoa(int n,char *szAscii)
{
    int count = 0;
    do
    {
        int temp = n%10;
        printf("%d\n",temp);
        count++;
        n=(n-temp)/10;
    }
    while(n!=0);
}
