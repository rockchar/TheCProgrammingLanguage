//
//  main.c
//  itoa
//
//  Created by rkumar43 on 25/04/22.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void itoa(int n,char * szBuff);
void reverse(char* szBuff);

int main(int argc, const char * argv[]) {
    // insert code here...
    char buffer[1024];
    int input;
    scanf("%d",&input);
    itoa(input, buffer);
    printf("Number string is %s \n",buffer);
    reverse(buffer);
    printf("Reversed buffer string is %s \n",buffer);
    return 0;
}

void itoa(int n,char * szBuff)
{
    int temp = n;
    printf("Number entered is %d \n",n);
    do{
//this generates the numbers in reverse order
        temp = n % 10;
        *szBuff = temp + '0';
        szBuff++;
    }
    while((n/=10) > 0);
    *szBuff = '\0';
}

//this reverses the string
void reverse(char * szBuff)
{
    int len = (int) strlen(szBuff);
    int count = 0;
    do{
        char temp;
        temp = szBuff[count];
        szBuff[count] = szBuff[len - (count+1)];
        szBuff[len - (count+1)] = temp;
        count++;
    }
    while(count<len/2);
    szBuff[len]='\0';
}
