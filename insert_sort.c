/*************************************************************************
	> File Name: insert_sort.c
	> Author: 
	> Mail: 
	> Created Time: Tue 27 Mar 2018 09:41:13 AM CST
 ************************************************************************/

#include<stdio.h>

void insert_sort(int *data, int n)
{
    int i,j;
    int x;
    for(i = 1; i < n; i++)
    {
        if(data[i] < data[i-1])
        {
            j = i - 1;
            x = data[i];
            data[i] = data[i-1];
            while(j >= 0 && x < data[j])
            {
                j--;
            }
            data[j + 1] = x;
        }
    }
}

int main()
{
    int i;
    int tdata[] = {1,7,2,4,5,6,3,9};
    int n = sizeof(tdata) / sizeof(int);
    printf("before:");
    for(i = 0; i < n; i++)
    {
        printf("%d ",tdata[i]);
    }
    printf("\n");
    insert_sort(tdata, n);
    printf("after:");
    for(i = 0; i < n; i++)
    {
        printf("%d ",tdata[i]);
    }
    printf("\n");
}
