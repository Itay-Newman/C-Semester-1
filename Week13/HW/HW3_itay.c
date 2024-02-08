#include <stdio.h>
#include <string.h>

#define SIZE 10
#define NAME_SIZE 50

int main(void)
{
    char namelist[SIZE][NAME_SIZE];
    char longestName[NAME_SIZE] = "", shortestName[NAME_SIZE] = "";
    char firstName[NAME_SIZE] = "", lastName[NAME_SIZE] = "";
    int i = 0, j = 0, count = 0;

    printf("Enter up to 10 names:\n");
    while (i < SIZE && fgets(namelist[i], NAME_SIZE, stdin))
    {
        namelist[i][strcspn(namelist[i], "\n")] = '\0';
        count++;
        i++;
    }

    if (count == 0)
    {
        printf("No names entered.\n");
        return 0;
    }

    // Finding longest and shortest names
    strcpy(longestName, namelist[0]);
    strcpy(shortestName, namelist[0]);
    for (i = 1; i < count; i++)
    {
        if (strlen(namelist[i]) > strlen(longestName))
        {
            strcpy(longestName, namelist[i]);
        }
        if (strlen(namelist[i]) < strlen(shortestName))
        {
            strcpy(shortestName, namelist[i]);
        }
    }

    // Sorting names alphabetically
    for (i = 0; i < count - 1; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            if (strcmp(namelist[i], namelist[j]) > 0)
            {
                char temp[NAME_SIZE];
                strcpy(temp, namelist[i]);
                strcpy(namelist[i], namelist[j]);
                strcpy(namelist[j], temp);
            }
        }
    }

    // First name (alphabetically) and Last name (alphabetically)
    strcpy(firstName, namelist[0]);
    strcpy(lastName, namelist[count - 1]);

    printf("Shortest name: %s\n", shortestName);
    printf("\nLongest name: %s\n", longestName);
    printf("First name: %s\n", firstName);
    printf("Last name: %s\n", lastName);

    return 0;
}
