#include<stdio.h>


void print_binary_(unsigned int num)
{
    for(int i =32;i>0;i--)
    {
        if(num & (1<<i))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
}


int main()
{

unsigned int a = 0b10101010; // binary representation of 170
unsigned int b = 0b11001100; // binary representation of 204
unsigned int c = a&b; // bitwise OR of a and b
print_binary_(c);



}