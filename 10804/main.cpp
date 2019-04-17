#include <stdio.h>

void swap(int *arr, int a, int b)
{
    int tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;
}

void reverse(int *arr, int start, int end)
{
    int i;
    for (i = 0; i < (end - start + 1) / 2; i++)
    {
        swap(arr, start + i, end - i);
    }
}

int main()
{
    int n = 10, i, arr[21];
    int start, end;
    for (i = 0; i < 21; i++)
    {
        arr[i] = i;
    }
    while (n--)
    {
        scanf("%d %d", &start, &end);
        reverse(arr, start, end);
    }
    for (i = 0; i < 20; i++)
    {
        printf("%d ", arr[i + 1]);
    }
    return 0;
}