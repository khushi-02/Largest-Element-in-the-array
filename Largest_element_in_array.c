#include<stdio.h>

int maximum(int A[], int n)
{
    int i;
    int max = A[0];
    for(i=1; i<n; i++)
    {
        if(A[i]>max)
        {
            max = A[i];
        }
    }
    return max;
}

int main()
{
    int A[] = {47, 31, 68, 2};
    int n = sizeof(A)/sizeof(A[0]);
    printf("The largest element in the array is %d", maximum(A,n));
    return 0;
}
