//
//  main.c
//  InputOutput
//
//  Created by Rohit Kumar on 30/09/21.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char line[128];
    scanf("%[^,]",line);
    printf("Line = %s!\n",line);
    scanf("%s",line);
    printf("%s",line);
    return 0;
}
