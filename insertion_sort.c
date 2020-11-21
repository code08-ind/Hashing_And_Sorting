/* Submitted By :
Aryan Garg
19124018
IT(G-1)
*/

//Program For The Implementation Of Insertion Sort

#include <stdio.h>
#include<stdlib.h>

void Insertion(int A[],int n)//function for insertion sort
{
    int i,j,x;
    for(i=1; i<n; i++)
    {
        j=i-1;
        x=A[i];
        while(j>-1 && A[j]>x)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }
}

int main()
{
    int A[]= {11,34,12,8,4,2};//taking the array and then the size of array=n
    int n=6;
    int i;//index of array to be traversed
    printf("Initial Array : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    Insertion(A,n);//function call of insertion sort
    printf("Array After Sorting : ");
    for(i=0; i<n; i++)
        printf("%d ",A[i]);//printing all the elements
    printf("\n");
    return 0;
}
