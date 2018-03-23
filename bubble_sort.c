/*************************************************************************
	> File Name: bubble_sort.c
	> Author: 
	> Mail: 
	> Created Time: Fri 23 Mar 2018 02:35:53 PM CST
 ************************************************************************/

#include<stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int *data, int n)
{
    int i,j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(data[j] > data[j+1])
            {
                swap(&data[j], &data[j+1]);
            }
        }
    }
}

int main()
{
    int i;
    int tdata[] = {2,4,5,6,2,9,12,0};
    int n = sizeof(tdata) / sizeof(int);
    printf("before: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ",tdata[i]);
    }

    printf("\n");
    bubble_sort(tdata, n);
    printf("after: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ",tdata[i]);

    }
    printf("\n");
}

