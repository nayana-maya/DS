#include <stdio.h>

#define MAX 1000

int Parent[MAX];

void initialize(int n)
{
    for(int i = 0; i < n; i++)
    {
        Parent[i] = i;
    }
}

int find(int x)
{
    while(x != Parent[x])
    {
        x = Parent[x];
    }
    return x;
}

void union_set(int x, int y)
{
    int rootX = find(x);
    int rootY = find(y);

    if(rootX != rootY)
    {
        Parent[rootX] = rootY;
    }
}

int connected(int x, int y)
{
    return find(x) == find(y);
}

int main()
{
    int n, choice;
    int x, y;
    char again;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    initialize(n);

    printf("\nEnter the number of union operations: ");
    scanf("%d", &choice);

    for(int i = 0; i < choice; i++)
    {
        printf("Enter two elements to union: ");
        scanf("%d %d", &x, &y);

        union_set(x, y);
    }

    do
    {
        printf("\nEnter two elements to check whether they are connected: ");
        scanf("%d %d", &x, &y);

        if(connected(x, y))
        {
            printf("%d and %d are connected\n", x, y);
        }
        else
        {
            printf("%d and %d are not connected\n", x, y);
        }

        printf("Do you want to check again? (y/n): ");
        scanf(" %c", &again);

    } while(again == 'y' || again == 'Y');

    return 0;
}

