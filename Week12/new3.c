#include <stdio.h>
#include <string.h>

#define STR_LEN 10

int main (void)
{
    int i = 0;
    char name[STR_LEN] = {0};

    printf("Enter your name: ");
    fgets(name, STR_LEN, stdin);
    for(i = 0; i < STR_LEN; i++)
    {
        if(name[i] == '\n')
        {
            name[i] = '\0';
            break;
        }
    }
    printf("your name is: %s!!\n", name);

    return 0;
}
