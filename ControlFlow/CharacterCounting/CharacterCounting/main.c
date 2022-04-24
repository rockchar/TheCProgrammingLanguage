//
//  main.c
//  CharacterCounting
//
//  Created by Rohit Kumar on 24/04/22.
//

#include <stdio.h>
#include <string.h>
void CountCharacters(void);
void escape(char *s,char *t);
int main(int argc, const char * argv[]) {
    // insert code here...
    char bufferVisible[1024];
    char input[1024];
    int count = 0;
    while(count < 1024 && (input[count]=getchar())!=EOF)
    {
        count++;
    }
    input[count+1] = '\0';
    escape(bufferVisible, input);
   // CountCharacters();
    return 0;
}

void escape(char *s,char *t)
{
    int count = 0;
    char *str = s;
    while(t[count]!=EOF)
    {
        switch(t[count])
        {
            case '\n':
            {
                strcpy(s, "\\n");
                s+=2;
            }
                break;
            case '\t':
            {
                strcpy(s, "\\t");
                s+=2;
            }
                break;
            case ' ':
            {
                strcpy(s, "_");
                s+=1;
            }
                break;
            case '\0':
            {
                *s='\0';
            }
                break;
            default:
                *s = t[count];
                s+=1;
                break;
        }
        count++;
    }
   
    printf("\nvisible seq string is %s\n",str);
    
}





/* program to count count digits, white space, others */
void CountCharacters(void)
{
    int c;
    int nDigits[10] ;//= {0};
    int whitspaces = 0;
    int others = 0;
    memset((void*)nDigits,0,10);
    while((c = getchar())!=EOF)
    {
        switch(c)
        {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            {
                nDigits[c-'0']++;
            
            }
            break;
            case ' ':
                whitspaces++;
                break;
            default:
                others++;
                break;
        }
        
    }
    printf("\n");
    for(int i = 0 ; i < 10 ;i++)
    {
        printf("Count of digit %d is %d\n",i,nDigits[i]);
    }
    printf("Count of whitespaces is %d\nCount of others is %d\n",whitspaces,others);
}
