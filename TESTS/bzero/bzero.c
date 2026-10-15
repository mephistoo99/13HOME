#include <stdio.h>
#include "libft.h"


void printArray(int arr[],int size)
    {
        int i = 0;
        while(i<size){
        printf("%d,", arr[i]);
        i++;
        }
    }



int main()
{
	int arr[5] = {3, 8, 1, 10, 5};
    printf("Array before bzero()\n");
    printArray(arr,5);
    printf("\n");
    ft_bzero(arr, 4);
    printf("Array after bzero()\n");
    printArray(arr,5);
    printf("\n");
}
