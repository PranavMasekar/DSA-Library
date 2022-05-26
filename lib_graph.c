#include <stdio.h>
#define MAX 20

int q[MAX], top = -1, front = -1, rear = -1, stack[MAX];
typedef struct Graph{
    int a[20][20];
} Graph;
// int a[20][20] = {};

void Create(Graph* graph, int n)
{
    int i,j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            graph->a[i][j] = 0;
        }
    }
    int flag, v1, v2, choice;
    printf("Enter the type of the graph (1. Undirected ) (2. Directed ):");
    scanf("%d", &flag);
    do
    {
        printf("Enter the edge :");
        scanf("%d %d", &v1, &v2);
        graph->a[v1][v2] = 1;
        if (flag == 1)
        {
            graph->a[v2][v1] = 1;
        }
        printf("Enter do you want to continue :");
        scanf("%d", &choice);
    } while (choice == 1);
}
void Display(Graph* graph, int n)
{
    int i, j;
    printf("\nAdjacency matrix \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", graph->a[i][j]);
        }
        printf("\n");
    }
}
int delete ()
{
    int k;
    if (front == rear)
    {
        k = q[front++];
        front = rear = -1;
        return (k);
    }
    else
    {
        k = q[front++];
        return (k);
    }
}
void add(int item)
{
    if (rear == MAX - 1)
        printf("Queue is full");
    else
    {
        if (rear == -1)
        {
            q[++rear] = item;
            front++;
        }
        else
            q[++rear] = item;
    }
}
int isstackempty()
{
    if (top == -1)
        return 1;
    return 0;
}

void Push(int item)
{
    if (top == MAX - 1)
        printf("Stack overflow ");
    else
        stack[++top] = item;
}
int Pop()
{
    int k;
    if (top == -1)
        return (0);
    else
    {
        k = stack[top--];
        return (k);
    }
}

int is_queue_empty()
{
    if (front == -1)
        return 1;
    return 0;
}
void BFS(int a[20][20], int s, int n)
{
    int v1, v2, i, vis[MAX] = {};
    add(s);
    vis[s] = 1;

    while (!is_queue_empty())
    {
        v1 = delete ();
        printf(" %d", v1);
        for (v2 = 0; v2 < n; v2++)
        {
            if ((a[v1][v2] != 0) && (vis[v2] == 0))
            {
                add(v2);
                vis[v2] = 1;
            }
        }
    }
    printf("\n");
}
// void DFS(int a[20][20], int s, int n)
// {
//     int v1, v2, vis[MAX] = {};
//     Push(s);

//     while (!isstackempty())
//     {
//         v1 = Pop();
//         if (vis[v1] != 1)
//         {
//             printf("%d ", v1);
//             vis[v1] = 1;
//         }
//         for (v2 = 0; v2 < n; v2++)
//         {
//             if ((a[v1][v2] != 0) && (vis[v2] == 0))
//             {
//                 Push(v2);
//             }
//         }
        
//     }
//     printf("\n");
// }

