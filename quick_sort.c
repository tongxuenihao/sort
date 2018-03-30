/*************************************************************************
	> File Name: quick_sort.c
	> Author: 
	> Mail: 
	> Created Time: 2018年03月30日 星期五 09时32分59秒
 ************************************************************************/

#include<stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void quick_sort(int *data, int low, int high)
{
    int i,j,t;
    if(low < high)
    {
        i = low;
        j = high;
        t = data[low];
        while(i < j)
        {
            while(i < j && data[j] > t)
            {
                j--;
            }
            if(i < j)
            {
                swap(&data[i], &data[j]);
                i++;
            }
            while(i < j && data[i] <= t)
            {
                i++;
            }
            if(i < j)
            {
                swap(&data[i], &data[j]);
                j--;
            }
        }
        data[i] = t;
        quick_sort(data, 0, i - 1);
        quick_sort(data, i + 1, high);
    }
}

int main()
{
    int i;
    int tdata[] = {5,4,3,6,7,2,8,1,9};
    int n = sizeof(tdata) / sizeof(int);
    printf("before:");
    for(i = 0; i < n; i++)
    {
        printf("%d ",tdata[i]);
    }
    printf("\n");

    quick_sort(tdata, 0, n - 1);
    printf("after:");
    for(i = 0; i < n; i++)
    {
        printf("%d ",tdata[i]);
    }
    printf("\n");
}
