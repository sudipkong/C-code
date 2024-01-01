#include<stdio.h>

#define SUM(a,b) ((a) + (b))





// test line numbers

int main()
{
    int ar[5] = {1,3,4,3,34};
    int largest = ar[0];
    int output;

    int smallest = ar[0];

    for(int i = 0; i < 5; i++)
    {
        if(ar[i]>largest)
        {
            largest = ar[i];
        }
    }

    for(int j = 0; j < 5; j++)



    
    {
        if(ar[j] < smallest)
        {
            smallest = ar[j];
        }
    }



    output = SUM(largest,50);

    printf("largest: %d\n",largest);
    printf("output:%d\n",output);
    printf("smallest: %d\n",smallest);

    return 0;
}