#include <stdio.h>
#include <string.h>

#define ALPHABET_SIZE 26
#define MAX_WORD_LENGTH 100
#define MAX_WORDS 10

int isPangram(char sentence[][MAX_WORD_LENGTH], int rows, int maxWordLength);
int main(void)
{
    char sentence[MAX_WORDS][MAX_WORD_LENGTH] = {};
    int foundPangram = 0;
    int i = 0;

    printf("Enter a sentence: \n");
    for(i = 0; i < MAX_WORDS; i++)
    {
        fgets(sentence[i], MAX_WORD_LENGTH, stdin);
        int len = strlen(sentence[i]);
        if(len > 0 && sentence[i][len -1] == "\n")
        {
            sentence[i][len -1] = '\0';
        }

        if(isPangram(sentence, i + 1, MAX_WORD_LENGTH))
        {
            foundPangram = 1;
            break;
        }
    }

    printf("its a pangram?\n");

    if(foundPangram) 
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
int isPangram(char sentence[][MAX_WORD_LENGTH], int rows, int maxWordLength)
{
    int letters[ALPHABET_SIZE] = {0};

    int i = 0, j = 0;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < maxWordLength; j++)
        {
            char c = sentence[i][j];
            if(c == '\0')
            {
                break;
            }
            if ('a' <= c && c <= 'z')
            {
                letters[c - 'a'] = 1;
            }
            else if ('A' <= c && c <= 'Z')
            {
                letters[c - 'A'] = 1;
            }
        } 
    }

    int found = 1;
    for(int i = 0; i < ALPHABET_SIZE; i++)
    {
        if(!letters[i])
        {
            found = 0;
            break;
        }
    }
    return found;
}

