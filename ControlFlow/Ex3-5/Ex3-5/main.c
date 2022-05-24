//
//  main.c
//  Ex3-5
//
//  Created by Rohit Kumar on 01/05/22.
//

#include <stdio.h>

void maparraytoalpha(char * arr);

void ntob(int n,char* szBuffer,int base);

//void Base10(int n,char* szBuffer);
void BaseN(int n,char* szBuffer);
//void Base8(int n,char* szBuffer);

int main(int argc, const char * argv[]) {
    // insert code here...
    char buffer[1024];
    ntob(1000,buffer,16);
    printf("String %s\n",buffer);
    return 0;
}

/*
function itob(n,s,b) that converts the integer n into a base b character representation in the string s
In particular, itob(n,s,16) formats n as a hexadecimal integer in s.
*/
void ntob(int n,char* szBuffer,int base)
{
    char hexmap[16];
    if(base == 16)
        maparraytoalpha(hexmap);
    int digit = n;
    char * temp = szBuffer;
    while(digit > 0)
    {
        //printf("%d ",digit%base);
        if(base == 16)
        *temp = hexmap[digit%base];
        else
        *temp = '0'+(digit%base);
        digit/=base;
        temp++;
        if(digit<base)
        {
            if(base == 16)
            *temp = hexmap[digit%base];
            else
            *temp = '0'+(digit%base);
            digit=0;
            *(temp+1) ='\0';
        }
        
    }
    
}

void maparraytoalpha(char * arr)
{
    for(int i = 0 ; i <16 ; i++)
    {
        switch(i){
            case 10:
                arr[i] = 'A';
                break;
            case 11:
                arr[i] = 'B';
                break;
            case 12:
                arr[i] = 'C';
                break;
            case 13:
                arr[i] = 'D';
                break;
            case 14:
                arr[i] = 'E';
                break;
            case 15:
                arr[i] = 'F';
                break;
            default:
                arr[i] = '0'+ i;
                break;
                
        }
    }

}
