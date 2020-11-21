/* Submitted By :
Aryan Garg
19124018
IT(G-1)
*/

//Program For The Implementation Of Selection Sort

#include <stdio.h>
#include<stdlib.h>

void swap(int *x,int *y)//function for swapping
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void SelectionSort(int A[],int n)//function of selection sort
{
    int i,j,k;
    for(i=0; i<n-1; i++)
    {
        for(j=k=i; j<n; j++)
        {
            if(A[j]<A[k])
                k=j;
        }
        swap(&A[i],&A[k]);
    }
}

int main()
{
    int A[]= {78,1,13,24,90,2};//array of the elements
    int n=6;//size of the array
    int i;//index of array for traversing the array
    printf("Initial Array : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",A[i]);//initial array before sorting
    }
    printf("\n");
    SelectionSort(A,n);//call of the function
    printf("Array After Sorting : ");
    for(i=0; i<n; i++)
        printf("%d ",A[i]);//printing the elements after sorting of the array
    printf("\n");
    return 0;
}
