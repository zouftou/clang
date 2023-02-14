#include<stdio.h>

/* binary search with one test */

#define ARRAY_LEN 1000

int binsearch(int, int[], int);

main()
{
    int i, p, v[ARRAY_LEN];

	for (i = 0; i < ARRAY_LEN; i++)
		v[i] = i;
    
    p = binsearch(123, v, ARRAY_LEN);
    printf("%d\n",p);
}

int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low+high) / 2;
        if(x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else
            return mid;
    }
}