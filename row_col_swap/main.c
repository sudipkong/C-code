#include<stdio.h>

#define ROW 3
#define COLUMN 3


void print_array(int arr[][COLUMN],int rows,int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j)
        {
            printf("%d",arr[i][j]);
        }   
    }
        //printf("\n");

}






int main()
{
    int arr[ROW][COLUMN] = 
    {

        {1,2,3},
        {4,5,6},
        {7,8,9}


    };

    print_array(arr,ROW,COLUMN);





    return  0;


}