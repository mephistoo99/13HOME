#include <stdio.h>
#include "libft.h"

void printArray(char arr[],int size)
    {
        int i = 0;
        while(i<size){
        printf("%c,", arr[i]);
        i++;
        }
    }
int main()
{
	//int arr[5] = {3, 8, 1, 10, 5};
    char arr2[30];
    //printf("Array before memcpy()\n");
    //printArray(arr);
    printf("\n");
    ft_memcpy(arr2, "hjdendad", 30*sizeof(char));
    printf("array after memcpy()\n");
    printArray(arr2,8);
    printf("\n");
}
