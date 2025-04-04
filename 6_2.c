#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void alphabet()
{
    printf("  ");
    for (char letter = 'A'; letter <= 'Z'; letter++)
    {
        printf("%c ", letter);
    }
    printf("\n");
}

int main(void)
{
    char file[20];
    scanf("%s", file);
    FILE *fo = fopen(file, "r");
    char sign;
    int *field;
    int row = 1;
    int pos;
    field = (int *)malloc(26 * sizeof(int));
    for (int i = 0; i < 26; i++)
    {
        field[i] = 0;
    }
    if (fo == NULL)
    {
        printf("súbor nebol otvorený");
    }
    if (fo != NULL)
    {
        alphabet();
        while ((sign = getc(fo)) != EOF)
        {
            if (sign == '\n')
            {
                printf("%d ", row);
                row++;

                for (int i = 0; i < 26; i++)
                {
                    printf("%d ", field[i]);
                    field[i] = 0;
                }
                printf("\n");
            }
            if (sign != ' ' && sign != '.')
            {
                pos = (int)tolower(sign) - 'a';
                field[pos]++;
            }
        }
        printf("%d ", row);
        for (int i = 0; i < 26; i++)
        {
            printf("%d ", field[i]);
        }
    }
}