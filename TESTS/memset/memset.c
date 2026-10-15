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
	int x = 0;
	unsigned char *p = (unsigned char *)&x;

	ft_memset(&p[0],1337%256,1);
	ft_memset(&p[1],1337/256%256,1);
	
	printf("%d\n",x);



	/*int arr1[5] = {3, 8, 1, 10, 5};
    printf("Array before memset()\n");
    printArray(arr1,5);
    printf("\n");
    ft_memset(arr1, 0, 4/*sizeof(arr1[0]));
    printf("Array after memset()\n");
    printArray(arr1,5);
    printf("\n");*/

}

