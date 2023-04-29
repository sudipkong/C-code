#include<stdio.h>

#define SUM(a,b) ((a) + (b))





int main()
{
    int ar[5] = {1,3,4,3,34};
    int largest = ar[0];
    int output;

    for(int i = 0; i < 5; i++)
    {
        if(ar[i]>largest)
        {
            largest = ar[i];
        }
    }

    output = SUM(largest,50);

    printf("largest: %d\n",largest);
    printf("output:%d\n",output);

    return 0;
}