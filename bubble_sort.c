/* Submitted By :
Aryan Garg
19124018
IT(G-1)
*/

//Program For The Implementation Of Bubble Sort

#include <stdio.h>
#include<stdlib.h>

void swap(int *x,int *y)//swapping function
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void Bubble(int A[],int n)//function for bubble sort
{
    int i,j,flag=0;
    for(i=0; i<n-1; i++)
    {
        flag=0;
        for(j=0; j<n-i-1; j++)
        {
            if(A[j]>A[j+1])
            {
                swap(&A[j],&A[j+1]);
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
}

int main()
{
    int A[]= {23,12,67,23,3,98};//array of elements of size 6
    int n=6;//size of array
    int i;//index of array to be traversed
    printf("Initial Array : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",A[i]);//initial array before sorting
    }
    printf("\n");
    Bubble(A,n);//call of function
    printf("Array After Sorting : ");
    for(i=0; i<n; i++)
        printf("%d ",A[i]);//printing all the elements of array in ascending order
    printf("\n");
    return 0;
}
