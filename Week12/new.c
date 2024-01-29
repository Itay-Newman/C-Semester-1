#include <stdio.h>

int main(void)
{
    char bob[] = "bob marley";
    for(int i = 0; bob[i]; i++)
    {
        printf("%c", bob[i]);
    }
}
