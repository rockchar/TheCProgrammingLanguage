//
//  main.c
//  Ex2-4
//
//  Created by Rohit Kumar on 16/04/22.
//

#include <stdio.h>
#include <stdbool.h>

void Squeeze(char s1[],char s2[]);
int main(int argc, const char * argv[]) {
    char s1[128] = {'\0'},s2[128] = {'\0'};
    printf("Enter the first String   : ");
    scanf("%[^\n]s",s1);
    getchar();
    printf("Enter the second String  : ");
    scanf("%[^\n]s",s2);
    getchar();
    Squeeze(s1,s2);
    return 0;
}

void Squeeze(char s1[],char s2[])
{
    int j;
    for( int i = j = 0 ; s1[i]!='\0' ; i++ )
    {
        bool bAdd = true;
        
        for( int k = 0 ; s2[k]!='\0' ; k++ )
        {
            if( s1[i] == s2[k] )
            {
                bAdd = false;
            }
        }
        if(bAdd == true)
        {
            s1[j++]=s1[i];
        }
        s1[j]='\0';
    }
    printf("\nAfter squeeze %s\n",s1);
}
