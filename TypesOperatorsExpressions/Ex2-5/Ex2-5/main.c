//
//  main.c
//  Ex2-5
//
//  Created by Rohit Kumar on 16/04/22.
//

#include <stdio.h>
#define BUFFER_SIZE 128
int any(char * s1,char * s2);

int main(int argc, const char * argv[]) {
    // insert code here...
    char s1[BUFFER_SIZE];
    char s2[BUFFER_SIZE];
    
    printf("Enter the first string : ");
    scanf("%[^\n]s",s1);
    getchar();
    printf("Enter the second string : ");
    scanf("%[^\n]s",s2);
    getchar();
    printf("the index is %d\n",any(s1,s2));
  
    return 0;
}


int any(char* s1, char *s2)
{
    int i,j;
    for(i = 0 ; s1[i]!='\0' ; i++)
    {
        for(j = 0 ; s2[j]!='\0' ;j++)
        {
            if(s1[i]==s2[j])
            {
                return i;
            }
        }
    }
    return(-1);
}
