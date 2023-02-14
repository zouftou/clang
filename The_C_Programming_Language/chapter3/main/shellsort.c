#include<stdio.h>

/* the Shell sort algorithm implementation */

#define MAX_LEN 7

void shellsort(int[], int);

main()
{
    int i;
    int tab[] = {23,4,65,43,95,2,5};

    shellsort(tab, MAX_LEN);
    for (i = 0; i < MAX_LEN; i++)
    {
        printf("%d\t", tab[i]);
    }
    
}

/* shellsort: sort v[0]...v[n-1] into increasing order */
void shellsort(int v[], int n)
{
    int gap, i, j, temp;

    for (gap = n/2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (j=i-gap;j>=0 && v[j]>v[j+gap]; j-=gap)
            {
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
}