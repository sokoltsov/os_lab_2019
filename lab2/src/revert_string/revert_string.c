#include "revert_string.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void RevertString(char *str)
{
    int len = strlen(str);
    char *revstr = malloc(sizeof(char) * len);
    for(int i = 0; i < len; i++)
    {
        revstr[i] = str[len-i-1];
    }
    strcpy(str, revstr);
    free(revstr);
}

