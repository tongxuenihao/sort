/*************************************************************************
	> File Name: select_sort.c
	> Author: 
	> Mail: 
	> Created Time: Mon 26 Mar 2018 09:53:00 AM CST
 ************************************************************************/

#include<stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void select_sort(int *data, int n)
{
    int i,j;
    int min_pos;
    for(i = 0; i < n; i++)
    {
        min_pos = i;
        for(j = i + 1; j < n; j++)
        {
            if(data[j] < data[min_pos])
            {
                min_pos = j;
            }
        }
        if(i != min_pos)
        {
            swap(&data[i], &data[min_pos]);
        }
    }
}

int main()
{
    int i;
    int tdata[] = {2,1,4,6,5,8,10,7};
    int n = sizeof(tdata) / sizeof(int);
    printf("before:");
    for(i = 0; i < n; i++)
    {
        printf("%d ", tdata[i]);
    }
    printf("\n");
    select_sort(tdata, n);
    printf("after:");
    for(i = 0; i < n; i++)
    {
        printf("%d ", tdata[i]);
    }
    printf("\n");
}
