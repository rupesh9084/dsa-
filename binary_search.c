#include <stdio.h>

int main()
{
    int arr[50], i, j, pos, mid, flag = 0, key, n;
    printf("enter the size of array:");
    scanf("%d", &n);
    printf("enter the %d number: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("enter the number that you want to search:");
    scanf("%d", &key);
    j = n - 1, i = 0;
    while (i <= j)
    {
        mid = (i + j) / 2;
        if (arr[mid] == key)
        {
            flag = 1, pos = mid + 1;
            break;
        }
        if (arr[mid] > key)
        {
            j = mid - 1;
        }
        if (arr[mid] < key)
        {
            i = mid + 1;
        }
    }
    if (flag == 1)
    {
        printf("number is found at %d", pos);
    }
    else
    {
        printf("number is not found");
    }
    return 0;
}