#include <stdio.h>
#include<math.h>
#include <stdlib.h>



int **alokuj_2D_pole(int n, int m)
{
    int **field;
    field = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        *(field+i) = (int *)malloc(m * sizeof(int));
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &field[i][j]);
        }
    }
    return field;
}
void vypis_2D_pole(int **field, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", field[i][j]);
        }
        printf("\n");
    }
}

void uvolni(int **field)
{
    free(field);
}

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    int **field = alokuj_2D_pole(n, m);
    vypis_2D_pole(field, n, m);
    uvolni(field);
}
