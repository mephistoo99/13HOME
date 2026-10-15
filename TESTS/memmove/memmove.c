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
	char arr[10] = "123456789";
    ft_memmove(arr, &arr[2],7);
    printf("%s\n",arr);
	
}
