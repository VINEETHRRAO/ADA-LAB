#include <stdio.h>
#include <time.h>
void quicksort (int [], int, int);

int main()
{
    int list[100000];
    int size,i;
    time_t start,end;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        list[i]=rand();
    }
    start=clock();
    quicksort(list, 0, size - 1);
    end=clock();
    printf("After applying quick sort\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", list[i]);
    }

    printf("\n");
    printf("time required for quicksort is %.10f\n", difftime(end, start) / CLOCKS_PER_SEC);

    return 0;
}
void quicksort(int list[], int low, int high)
{

    int pivot, i, j, temp;
    if (low < high)
    {
        pivot = low;
        i = low;
        j = high;
        while (i < j)
        {
            while (list[i] <= list[pivot] && i <= high)
            {
                i++;
            }
            while (list[j] > list[pivot] && j >= low)
            {
                j--;
            }
            if (i < j)
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
        temp = list[j];
        list[j] = list[pivot];
        list[pivot] = temp;
        quicksort(list, low, j - 1);
        quicksort(list, j + 1, high);
    }
     int test;
for(test=0;test<1200;test++)
{
}
}
