#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *Arr = NULL;        
    int iSize = 0;         
    int i = 0;             
    int iSum = 0;          

    printf("Please enter how many elements?\n");
    scanf("%d",&iSize);

    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }

    printf("Addition is : %d\n",iSum);

    free(Arr);
    printf("Memory gets deallocated.\n");

    return 0;
}